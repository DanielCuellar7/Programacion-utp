#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void login();
void menu();
void lista();
void venta();
void resumen(int cod, int unds, int pago, int und, int totalund, int dinero);
void compra();
void resumencompra(int cod, int unds, int pago, int und, int totalund, int dis, int valorund);
// void readProducts();
char sino;
int m[4][3]={{1, 1500, 10}, {2, 2500, 13}, {3, 1000, 18}, {4, 3000, 12}};
char* productos[4]={"Iphone", "Samsung", "Xiaomi", "Huawei"};
int efectivo = 20000, tarjeta = 10000;
char* medpago[2]={"Efectivo", "Tarjeta"};
void ventasdia();

int main(){
    login();
 return 0;
}

 

void login(){
    system("clear");
    FILE *pf;
    char user[10], pwd[10], logUser[10], logpwd[10];
    

    printf("******************************\n");
    printf("*  LOGIN ALMACÉN EL IMPERIO  *\n");
    printf("******************************\n");

    printf("-> Ingrese el usuario: ");
    scanf("%s", logUser);
    printf("-> Ingrese la contraseña: ");
    scanf("%s", logpwd);

    pf= fopen("users.txt", "r");
    
    fscanf(pf, "%s", user);
    fscanf(pf, "%s", pwd);

    if(strcmp(logUser, user) == 0 && strcmp(logpwd, pwd) == 0 ){
        printf("Bienvenido %s\n\n", user);
        menu();
    }
    else{
        printf("\n");
        printf(" Error: Usuario o contraseña incorrecta\n");
        printf("¿Desea intentar de nuevo? (s/n): ");
        fflush(stdin); //Limpia el buffer (memoria donde guarda las teclas introducidas por teclado)
        scanf("%c", &sino);
        if (sino == 's')
        {
            login();
        }
        else {
            printf("\n Gracias por visitar nuestro sitio\n");
        }
    }

    fclose(pf);
}

void menu(){

    system("clear");
    int num;
    printf("--Menú de opciones-- \n");
    printf(" 1. Lista de productos \n");
    printf(" 2. Venta producto \n");
    printf(" 3. Compra producto \n");
    printf(" 4. Ventas del día \n");
    printf(" 5. Salir \n");
    printf("\n -> Seleccione una opción: ");
    scanf("%i", &num); 

    switch (num)
    {
    case 1:
        lista();
        break;
    case 2:
        venta();
        break;
    case 3:
        compra();
        break;
    case 4:
        ventasdia();
        break;
    case 5:
        printf("\n");
        system("clear");
        printf("Gracias por visitar nuestro sitio.");
        printf("\n");
        exit(0);
        break;
    
    default:
        printf("\n");
        printf("Error: La operación no existe \n");
        printf("¿Desea intentar de nuevo? (s/n): ");
        fflush(stdin);
        scanf("%c", &sino);
        if (sino == 's'){
            menu();
        }
        else {
            exit(0);
        }
    }
}


void lista(){

    system("clear");
    printf("\n");
    printf("Productos disponibles: \n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
                printf("Cod producto: %i - %s x Und: %i - Unidades %i\n", m[i][j], productos[i], m[i][j+1], m[i][j+2]);
            j = 3;
        }
    }
    printf("¿Desea realizar otra operación? (s/n): ");
    fflush(stdin);
    scanf("%c", &sino);
    if (sino == 's'){
        menu();
    }
    else {
        lista();
    }
    
}

void venta(){
    system("clear");
//Muestra la lista de productos
    printf("\n");
    printf("----Venta Producto----\n");
    int cod, unds, pago, und, totalund, dis;
    printf("\nProductos disponibles: \n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
                printf("Cod producto: %i - %s x unds: %i - Unidades %i\n", m[i][j], productos[i], m[i][j+1], m[i][j+2]);
            j = 3;
        }
    }
    printf("\n");
    printf("Total en efectivo: %i - Total en tarjeta: %i\n", efectivo, tarjeta);
//Pedir datos para vender y su validación
    printf("\n");
    printf("-> Ingrese cod del producto: ");
    fflush(stdin);
    scanf("%i", &cod);

    for(int i=0 ;i<4;i++){
    	if(cod == m[i][0]){
    		printf("-> Unidades: ");
            fflush(stdin);
    		scanf(" %i",&unds);
    		if(unds <= m[i][2] && unds > 0){
    		    printf("-> Metodo de pago 1(Efectivo) - 2(Tarjeta): ");
                fflush(stdin);
    			scanf(" %i",&pago);
                if(pago == 1 || pago == 2){
                    und = m[i][1];
                    totalund = unds * und;
                    if(pago == 2){
                        tarjeta = tarjeta + totalund;
                        // m[i][2] = m[i][2] - unds;
                        dis = m[i][2];
                        i=5;
                    }
                    else{
                        efectivo = efectivo + totalund;
                        // m[i][2] = m[i][2] - unds;
                        dis = m[i][2];
                        i=5;
                                    
                    }
                }
                else{
                    printf("\n");
                    printf("Error: El método de pago es incorrecto\n");
                    printf("¿Desea intentar de nuevo? (s/n): ");
                    fflush(stdin);
                    scanf("%c", &sino);
                    if (sino == 's'){
                        venta();
                    }
                    else {
                        menu();
                    }
                }
    		}
    		else{
                printf("\n");
    			printf("Error: Las cantidad de unidades disponibles de este producto son %i\n",m[i][2]);
    			printf("¿Desea intentar de nuevo? (s/n): ");
                fflush(stdin);
                scanf("%c", &sino);
                if (sino == 's'){
                    venta();
                }
                else {
                    menu();
                }
    		}
    	}
    	else{
    		if(i == 3){
                printf("\n");
    		    printf("Error: El código del producto no es correcto \n");
    			printf("¿Desea intentar de nuevo? (s/n): ");
                fflush(stdin);
                scanf("%c", &sino);
                if (sino == 's'){
                    venta();
                }
                else {
                    menu();
                }
    			            
            }
    	}			    
    }
    	resumen(cod, unds, pago, und, totalund, dis);		 
}

void resumen(int cod, int unds, int pago, int und, int totalund, int dis){
//llenado de archivo ventas.txt
    FILE *ventas;
    FILE *ventasdia;
    ventas = fopen("ventas.txt", "a");
    ventasdia = fopen("ventasdia.txt", "a");
    if (ventasdia == NULL){
        printf("Error: El archivo no se puede abrir");
    }
    if(ventas == NULL){
        printf("Error: El archivo no se puede abrir");
    }
    printf("\n");
    printf("--Resumen--\n");
    fprintf(ventas, "--Resumen--\n");
    printf(" Acción: Venta\n");
    fprintf(ventas, " Acción: Venta\n");
    printf(" cod producto: %i\n", cod);
    fprintf(ventas, " cod producto: %i\n", cod);
    printf(" Producto: %s\n", productos[cod - 1]);
    fprintf(ventas, " Producto: %s\n", productos[cod-1]);
    printf(" Unidades: %i\n", unds);
    fprintf(ventas, " Unidades: %i\n", unds);
    printf(" Valor de la unidad: %i\n", m[cod - 1][1]);
    fprintf(ventas, " Valor de la unidad: %i\n", m[cod - 1][1]);
    printf(" Medio de pago: %s\n", medpago[pago-1]);
    fprintf(ventas, " Medio de pago: %s\n", medpago[pago-1]);
    printf(" Total venta: %i\n", totalund);
    fprintf(ventas, " Total venta: %i\n", totalund);
    printf(" Unidades anteriores: %i\n", m[cod - 1][2]);
    // fprintf(ventas, " Unidades anteriores: %i\n", m[cod - 1][2]);
    m[cod - 1][2] = m[cod - 1][2] - unds;
    printf(" Unidades disponibles: %i\n", m[cod - 1][2]);
    // fprintf(ventas, " Unidades disponibles: %i\n", m[cod - 1][2]);
    fclose(ventas);
//llenado de archivo ventasdia.txt
    fprintf(ventasdia, "Medio de pago: %i - valor de la venta %i\n", pago, totalund);
    printf("\n");
    
    fclose(ventasdia);
    
    printf("Total en efectivo: %i - Total en tarjeta: %i\n", efectivo, tarjeta);
    printf("\n");
    printf("\n");
    printf("¿Desea realizar otra venta? (s/n): ");
    fflush(stdin);
    scanf("%c", &sino);
    if (sino == 's'){
         venta();
    }
    else {
        menu();
    }

 }

void compra(){
     system("clear");
//Muestra la lista de productos
    printf("\n");
    printf("----Compra Producto----\n");
    int cod, unds, pago, und, totalund, dis, valorund;
    printf("\nProductos disponibles: \n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
                printf("Cod producto: %i - %s x unds: %i - Unidades %i\n", m[i][j], productos[i], m[i][j+1], m[i][j+2]);
            j = 3;
        }
    }
    printf("\n");
    printf("Total en efectivo: %i - Total en tarjeta: %i\n", efectivo, tarjeta);
    
//Validación de la compra
    printf("\n");
    printf("-> Ingrese cod del producto: ");
    fflush(stdin);
    scanf("%i", &cod);

    for(int i=0 ;i<4;i++){
    	if(cod == m[i][0]){
    		printf("-> Unidades: ");
            fflush(stdin);
    		scanf(" %i",&unds);
    		if(unds <= m[i][2] && unds > 0){
                printf("-> Valor de la Unidad: ");
                fflush(stdin);
                scanf("%i", &valorund);
                if(valorund < m[i][1]){
    		        printf("-> Metodo de pago 1(Efectivo) - 2(Tarjeta): ");
                    fflush(stdin);
    			    scanf(" %i",&pago);
                    if(pago == 1 || pago == 2){
                        und = m[i][1];
                        totalund = unds * valorund;
                        if(pago == 2){
                            if(tarjeta > totalund){
                            tarjeta = tarjeta - totalund;
                                // m[i][2] = m[i][2] - unds;
                                dis = m[i][2];
                                i=5;  
                                resumencompra(cod, unds, pago, und, totalund, dis, valorund);
                            }
                            else{
                                printf("\n");
                                printf("Error: El dinero de la tarjeta es insuficiente\n");
                                printf("¿Desea intentar de nuevo? (s/n): ");
                                fflush(stdin);
                                scanf("%c", &sino);
                                if (sino == 's'){
                                    compra();
                                }
                                else {
                                    menu();
                                }
                            }
                        }
                        else{
                            if(efectivo > totalund){
                            efectivo = efectivo - totalund;
                                // m[i][2] = m[i][2] - unds;
                                dis = m[i][2];
                                i=5;  
                                resumencompra(cod, unds, pago, und, totalund, dis, valorund);
                            }
                            else{
                                printf("\n");
                                printf("Error: El dinero en efectivo es insuficiente\n");
                                printf("¿Desea intentar de nuevo? (s/n): ");
                                fflush(stdin);
                                scanf("%c", &sino);
                                if (sino == 's'){
                                    compra();
                                }
                                else {
                                    menu();
                                }
                            }               
                        }
                    }
                    else{
                        printf("\n");
                        printf("Error: El método de pago es incorrecto\n");
                        printf("¿Desea intentar de nuevo? (s/n): ");
                        fflush(stdin);
                        scanf("%c", &sino);
                        if (sino == 's'){
                            compra();
                        }
                        else {
                            menu();
                        }
                    }
                }
                else{
                    printf("\n");
                    printf("Error: El valor de la unidad es mayor al de la venta\n");
    			    printf("¿Desea intentar de nuevo? (s/n): ");
                    fflush(stdin);
                    scanf("%c", &sino);
                    if (sino == 's'){
                        compra();
                    }
                    else {
                        menu();
                    }
                }
    		}
    	    else{
                printf("\n");
    		    printf("Error: Las cantidad de unidades no es correcta\n");
    		    printf("¿Desea intentar de nuevo? (s/n): ");
                fflush(stdin);
                scanf("%c", &sino);
                if (sino == 's'){
                    compra();
                }
                else {
                    menu();
                }
    	    }
    	}
    	else{
    		if(i == 3){
                printf("\n");
    		    printf("Error: El código del producto no es correcto \n");
    			printf("¿Desea intentar de nuevo? (s/n): ");
                fflush(stdin);
                scanf("%c", &sino);
                if (sino == 's'){
                    compra();
                }
                else {
                    menu();
                }	            
            }
    	}			    
    }		 
}
    

void resumencompra(int cod, int unds, int pago, int und, int totalund, int dis, int valorund){
    
    FILE *compras;
    compras = fopen("compras.txt", "a");
    if(compras == NULL){
        printf("Error: El archivo no se puede abrir");
    }
    printf("\n");
    printf("--Resumen de la compra--\n");
    fprintf(compras, "--Resumen de la compra--\n");
    printf(" Acción: Compras\n");
    fprintf(compras, " Acción: Compras\n");
    printf(" cod producto: %i\n", cod);
    fprintf(compras, " cod producto: %i\n", cod);
    printf(" Producto: %s\n", productos[cod - 1]);
    fprintf(compras, " Producto: %s\n", productos[cod-1]);
    printf(" Unidades: %i\n", unds);
    fprintf(compras, " Unidades: %i\n", unds);
    printf(" Valor de la unidad: %i\n", valorund);
    fprintf(compras, " Valor de la unidad: %i\n", valorund);
    printf(" Medio de pago: %s\n", medpago[pago-1]);
    fprintf(compras, " Medio de pago: %s\n", medpago[pago-1]);
    printf(" Total venta: %i\n", totalund);
    fprintf(compras, " Total venta: %i\n", totalund);
    printf(" Unidades anteriores: %i\n", m[cod - 1][2]);
    m[cod - 1][2] = m[cod - 1][2] + unds;
    printf(" Unidades disponibles: %i\n", m[cod - 1][2]);
    printf("\n");
    printf("Total en efectivo: %i - Total en tarjeta: %i\n", efectivo, tarjeta);

    fclose(compras);

    printf("\n");
    printf("¿Desea realizar otra compra? (s/n): ");
    fflush(stdin);
    scanf("%c", &sino);
    if (sino == 's'){
         compra();
    }
    else {
        menu();
    }
 }

 void ventasdia(){
    system("clear");
    FILE *vendia;
    char ven_dia[200];
    vendia = fopen("ventasdia.txt","r");
       while(fgets(ven_dia, sizeof(ven_dia), vendia) != NULL){
        printf("%s", ven_dia);
       }
    fclose(vendia);
    printf("\n");
    printf("Total en efectivo: %i - Total en tarjeta: %i\n", efectivo, tarjeta);
    printf("\n");
    printf("¿Desea realizar otra operación? (s/n): ");
    fflush(stdin);
    scanf("%c", &sino);
    if (sino == 's'){
         menu();
    }
    else {
        ventasdia();
    }                                                                                                                                                                                                                                                                                           
 }
 
 



