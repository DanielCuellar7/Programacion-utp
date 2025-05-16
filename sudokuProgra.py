Cols = "ABCDEFGHI"
Rows = set(range(1, 10))

#Unifica las variables cols con rows {A1},{A2}...
def createBoard(VarDoms):
    for row in Rows:
        for col in Cols:
            VarDoms[f"{col}{row}"] = Rows.copy()
VarDoms = {}
createBoard(VarDoms)

#Lee un archivo txt y obtiene la info de los board
def boardName(VarDoms, fileName):
    with open(fileName, 'r') as file:
        lines = file.readlines()
        for row, line in enumerate(lines, 1):
            line = line.strip()  # Eliminar saltos de línea
            for col, char in enumerate(line, 1):
                if char != '0':
                    VarDoms[f"{Cols[col-1]}{row}"] = {int(char)}

boardName(VarDoms, 'board2.txt')

#
def generateConstraints(IdCols, Dom):
    constraints = []

    # Filas
    for i in Dom:
        constraint_row = [f"{id}{i}" for id in IdCols]
        constraints.append(constraint_row)

    # Columnas
    for id in IdCols:
        constraint_col = [f"{id}{i}" for i in Dom]
        constraints.append(constraint_col)

    # Cajas
    for row_start in range(1, 10, 3):
        for col_start in range(0, 9, 3):
            box = []
            for i in range(3):
                for j in range(3):
                    row = row_start + i
                    col = col_start + j
                    box.append(f"{IdCols[col]}{row}")
            constraints.append(box)

    return constraints

#Asegurar que todas las variables en VarsList tengan valores distintos dentro de sus dominios.
def AllDif(VarDoms, VarsList):
    anyChange = False
    for var in VarsList:
        if len(VarDoms[var]) == 1:
            for varAux in VarsList:
                if var != varAux:
                    oldDom = VarDoms[varAux].copy()
                    VarDoms[varAux].discard(list(VarDoms[var])[0])
                    if oldDom != VarDoms[varAux]:
                        anyChange = True
    return anyChange

def ConsistenceDomsEqual2(VarDoms, constraint):
    anyChange = False
    varsEquals = {}
    for var1 in constraint:
        if len(VarDoms[var1]) > 1:
            for var2 in constraint:
                if var1 != var2:
                    if VarDoms[var1] == VarDoms[var2]:
                        if tuple(VarDoms[var1]) in varsEquals:
                            Set_aux = set(varsEquals[tuple(VarDoms[var1])].copy())
                            Set_aux.add(var1)
                            Set_aux.add(var2)
                            varsEquals[tuple(VarDoms[var1])] = list(Set_aux)
                        else:
                            varsEquals[tuple(VarDoms[var1])] = [var1, var2]
    for domVar in varsEquals:
        if len(domVar) == len(varsEquals[domVar]):
            for var in constraint:
                if var not in varsEquals[domVar]:
                    for value in domVar:
                        oldValue = VarDoms[var].copy()
                        VarDoms[var].discard(value)
                        if oldValue != VarDoms[var]:
                            anyChange = True
    return anyChange

def ConsistenceDomsEqual(Vardoms, constraint):
    anyChange = False
    for var1 in constraint:
        if len(Vardoms[var1]) == 2:
            for var2 in constraint:
                if var1 != var2:
                    if Vardoms[var1] == Vardoms[var2]:
                        for var3 in constraint:
                            if var1 != var3 and var2 != var3:
                                oldValue = Vardoms[var3].copy()
                                Vardoms[var3].discard(list(Vardoms[var1])[0])
                                Vardoms[var3].discard(list(Vardoms[var1])[1])
                                if oldValue != Vardoms[var3]:
                                    anyChange = True
    return anyChange


def HiddenSingles(VarDoms, constraint):
    anyChange = False
    possible_positions = {i: [] for i in range(1, 10)}

    for var in constraint:
        for value in VarDoms[var]:
            possible_positions[value].append(var)

    for value, vars_with_value in possible_positions.items():
        if len(vars_with_value) == 1:
            var = vars_with_value[0]
            if len(VarDoms[var]) > 1:
                VarDoms[var] = {value}
                anyChange = True

    return anyChange

def solve_sudoku_fc(VarDoms, constraints):
    if is_solved(VarDoms):
        return True

    var = select_unassigned_variable(VarDoms)
    domain = VarDoms[var].copy()

    for value in domain:
        if is_valid_assignment(VarDoms, var, value):
            # Guardamos copias del dominio antes de modificar
            saved_domains = {v: VarDoms[v].copy() for v in VarDoms}

            VarDoms[var] = {value}

            # Aplicamos forward checking
            if forward_check(VarDoms, var, value, constraints):
                if solve_sudoku_fc(VarDoms, constraints):
                    return True

            # Si falló, restauramos dominios
            VarDoms.update(saved_domains)

    return False

def forward_check(VarDoms, var, value, constraints):
    for constraint in constraints:
        if var in constraint:
            for neighbor in constraint:
                if neighbor != var and len(VarDoms[neighbor]) > 1:
                    VarDoms[neighbor].discard(value)
                    if len(VarDoms[neighbor]) == 0:
                        return False  # Sin valores posibles: inconsistencia
    return True

def is_solved(VarDoms):
    return all(len(VarDoms[var]) == 1 for var in VarDoms)

def select_unassigned_variable(VarDoms):
    for var in VarDoms:
        if len(VarDoms[var]) > 1:
            return var

def is_valid_assignment(VarDoms, var, value):
    for constraint in constraints:
        if var in constraint:
            for other_var in constraint:
                if other_var != var and len(VarDoms[other_var]) == 1 and list(VarDoms[other_var])[0] == value:
                    return False
    return True


constraints = generateConstraints(Cols, Rows)

solve_sudoku_fc(VarDoms, constraints)

for row in Rows:
    for col in Cols:
        cell = f"{col}{row}"
        value = list(VarDoms[cell])[0]
        print(f"{cell} {{{value}}}", end=", ")
    print()
