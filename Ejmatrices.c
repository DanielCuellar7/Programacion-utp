//#include <stdio.h>

//Programa que cree una matriz 2x3, la inicialice con números dados por el usuario y luego convierta cada número en negativo//
/*
int main(){
    int m[2][3];
    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
           printf("Ingrese número: ");
           scanf("%i", &m[i][j]);
        }  
    }
    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            m[i][j] = m[i][j] * (-1);
            printf("%i", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
} */

//Cree 2 matrices con números al azar y sume las 2 matrices dato a dato en una 3er matriz (mostrar la resultante) //
/*
int main (){
    int m1[2][3]={{1,2,3},{4,5,6}};
    int m2[2][3]={{1,2,3},{4,5,6}};
    int m3[2][3];
    for(int i = 0; i < 2; i++){
        for (int  j = 0; j < 3; j++){
           m3[i][j]= m1[i][j] + m2[i][j];
           printf("%i ", m3[i][j]);
        } 
        printf("\n"); 
    }
    return 0;
} */

//Programa que cree dos matrices donde registre las ventas de cada mes del año y muestre la suma de las ventas de cada trimestre//
/*
int main(){
    int m[4][3], suma = 0;
    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            printf("Ingrese las ventas del trimestre %i: ", i+1);
            scanf("%i", &m[i][j]);
        }  
    }
    for(int f = 0; f < 4; f++){
        for (int c = 0; c < 3; c++){
            suma= suma + m[f][c];
        }
        printf("la venta total del trimestre %i es %i,\n", f+1, suma);
        suma=0;
    }
  return 0;
} */

//programa que muestre la suma de los datos de cada columna de una matriz 3x4 llenada con números aleatórios//

// int main (){
//     int m[3][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4}};
//     int suma=0;
    
//     return 0;
// }

/*
int main()
{
    int m[3][4]={{1,2,3,4},{1,2,3,4,},{1,2,3,4}}, suma=0;
    
    for( int j = 0 ; j < 4; j++){
        for(int i = 0 ; i < 3 ; i++){
            suma = suma + m[i][j];
        }
        printf("la suma de la columna  %i es: %i \n", j+1, suma);
        suma = 0;
    }
   return 0; 
} */


//EJERCICIOS PARA ENTREGAR -----------------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>


// 1) Crear un programa que solicite al usuario las 4 notas parciales obtenidas en un curso, las almacene en un vector. Luego debe recorrer el vector y mostrar en pantalla la nota más baja obtenida.*/
/*

int main() {
float v[4], hnote = 5.0;
printf("ingrese por favor las cuatro notas de los parciales: \n"); 
    for( int i=0 ; i<4 ; i++ ) {
        scanf("%f", &v[i] ); 
    }
    for( int i=0 ; i<4 ; i++ ){
        if( v[i] < hnote ){
            hnote=v[i]; 
        }
    }
    printf("La nota mas baja es: %.1f", hnote ); 
 return 0;
} */


// 2) Crear un programa que llene un vector con 10 números aleatorios, luego se debe solicitar un número al usuario. Finalmente se debe recorrer el vector, si el número está dentro del vector, mostrar la posición donde el número fue encontrado, sino, informar que el número no está en el vector.*/
/*

int main () {
    int v[10]={3,2,5,8,1,9,7,10,4,12};
    int num,l=0;
    printf("ingrese un número: \n"); 
    scanf("%i", &num);
        for (int i=0 ; i<10 ; i++){ 
            if(v[i]== num){
                printf("el número %i se encuentra en la posición: %i \n", num, i); l=1;
                break;
            } 
        }
        if (l==0){
            printf("el número %i no se encuentra en el vector", num);
        }
return 0;
} */

// 3) Crear un programa que inicialice 2 vectores de 4 posiciones con números aleatorios, luego se debe multiplicar dato a dato el primer vector con el segundo. Mostrar el resultado en pantalla. */
/*

int main(){
    int v1[4]={1,2,3,4}, v2[4]={1,2,3,4}, v[5];
        for( int i=0 ; i<4 ; i++){
         v[i]= v1[i] * v2[i];
            printf("El resultado de multiplicar v1*v2 es de: %i \n", v[i]); 
        }
return 0;
} */

// 4. Crear un programa que inicialice 2 vectores con datos ingresados por el usuario. El primer vector con 5 posiciones y el segundo con 3 posiciones, luego crear un tercer vector el cual se debe llenar posteriormente con los datos de los 2 vectores anteriores. Mostrar los datos del tercer vector en pantalla.*/
/*
int main(){
    int v1[5], v2[3], v3[8];
    printf("ingrese datos del primer vector: \n"); 
        for( int i=0 ; i<5 ; i++){
            scanf("%i", &v1[i]); 
        }
        printf("\n");
        printf("ingrese datos del segundo vector: \n");
        for( int i=0 ; i<3 ; i++){
            scanf("%i", &v2[i]); 
        }
        printf("su nuevo vector es:"); 
        for( int i=0 ; i<8 ; i++) {
            v3[i]= v1[i];
            v3[i]= v2[i]; 
            printf("%i ", v3[i]);
        } 
return 0;
} */

// 5) Crear un programa que inicialice un vector de 5 posiciones con las letras de una palabra de tamaño 5. Ejemplo (junio), adicionalmente inicializar un vector de 5 posiciones con 5 asteriscos(*). Luego pedir una letra al usuario, si la letra está en el vector inicial, reemplazar en el vector de asteriscos en la misma posición con la letra ingresada y mostrar el vector de asteriscos.*/
/*
#include <string.h> 
int main(){
    char v1[5]={'j','u','l','i','o'}, v2[5]={'*','*','*','*','*'}, letter; 
    printf("ingrese una letra y adivine la palabra");
        for(int i=0; i<10; i++){
            printf("\n");
            scanf("%c", &letter); 
            for(int i=0 ; i<5 ; i++){
                if(v1[i]==letter){
                    v2[i]=letter;
                } 
            }
            printf("\n");
            for(int i=0 ; i<5 ; i++){
                printf("%c ", v2[i]);
            }
        }
return 0;
} */

// 6) Programa que cree 2 Matrices de 2x3 con datos aleatorios y sume las 2 matrices dato a dato en una 3ra matriz. Mostrar matriz resultante.

/*
int main (){
    int m1[2][3]={{1,2,3},{4,5,6}};
    int m2[2][3]={{1,2,3},{4,5,6}};
    int m3[2][3];
    for(int i = 0; i < 2; i++){
        for (int  j = 0; j < 3; j++){
           m3[i][j]= m1[i][j] + m2[i][j];
           printf("%i ", m3[i][j]);
        } 
        printf("\n"); 
    }
    return 0;
} */

// 7) Programa llene una matriz de 4x4 con números solicitados al usuario. Luego debe reemplazar la diagonal de la matriz por 0. Mostrar matriz resultante.*/
/*
int main(){
    int m[4][4];
    printf("ingrese los números: \n"); 
    for( int i=0 ; i<4 ; i++){
        for( int j=0 ; j<4 ; j++){ 
            scanf("%i", &m[i][j]);
        }
        printf("\n"); 
    }
    for( int i=0 ; i<4 ; i++){ 
        for( int j=0 ; j<4 ; j++){ 
            if(i == j){
                m[i][j]=0; 
            }
            printf("%i ", m[i][j]); 
        }
        printf("\n");
    }
return 0;
} */


// 8) Programa que llene una matriz de 8x8 con guiones para simular un tablero de ajedrez. Luego solicitar al usuario una posición para ubicar un caballo (Representada con la letra C). Luego solicitar al usuario una posición para ubicar un peón (Representado con la letra P). Mostrar la matriz resultante y especificar si el peón está siendo atacado por el caballo.*/
/*
int main(){
    int x, y, x2, y2, t, p;; char m[9][9]={
    {'0','1','2','3','4','5','6','7','8'}, 
    {'1','-','-','-','-','-','-','-','-'}, 
    {'2','-','-','-','-','-','-','-','-'}, 
    {'3','-','-','-','-','-','-','-','-'}, 
    {'4','-','-','-','-','-','-','-','-'}, 
    {'5','-','-','-','-','-','-','-','-'}, 
    {'6','-','-','-','-','-','-','-','-'}, 
    {'7','-','-','-','-','-','-','-','-'}, 
    {'8','-','-','-','-','-','-','-','-'},
    };
        for( int i=0 ; i<9 ; i++){ 
            for( int j=0 ; j<9 ; j++){
                printf("%c ",m[i][j]);
            }
            printf("\n");
        }
        printf("ingrese una coordenada en (x,y) para la torre: \n"); 
        scanf("%i", &x);
        scanf("%i", &y);
        printf("ingrese una coordenada en (x,y) para el peón: \n"); 
        scanf("%i", &x2);
        scanf("%i", &y2);
        m[x][y]='t'; m[x2][y2]='p';
        for( int i=0 ; i<9 ; i++){ 
            for( int j=0 ; j<9 ; j++){
                printf("%c ",m[i][j]);
            }
            printf("\n"); 
        }
        if(x == x2 || y == y2){ 
            printf("\n jaque para el peón. ");
        } 
return 0;
} */


 










