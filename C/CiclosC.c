#include <stdio.h>

// 1) Programa que imprima los números del 10-20 de forma ascendente. //
/*
void main () {
    
    int num=10;
    while (num <= 20) {
        printf("%i ", num);
        num = num+1;
    }
    return;
} */

// 2) Programa que imprima los números del 20-10 de forma descendente. //
/* void main () {
    
    int num=20;
    while (num >= 10) {
        printf("%i ", num);
        num = num-1;
    }
    
} */

// 3) Programa que imprima los primeros 10 número impares //
/*
int main (){
   int num = 1;
   printf("%i ", num)
   for(int i = 1; i <= 10; i++){
    i = i + 2;
    printf("%i ", i);
   }
} */

// 4) Programa que imprima los primeros 10 números multiplos de 5//
/*void main () {
    int num = 5 , cont = 0;
    while (cont < 10) {
        printf("%i ", num);
        num=num+5;
        cont=cont+1;
    }
} */

// 5) Programa que le pida 10 numeros al usuario y calcule el primedio de estos//
/* void main(){
     int numu;
    float num2 = 0;
   
    printf ("Ingrese 10 número positivos y calcularemos el promedio de ellos: ");
        for (int num=0 ; num < 10 ; num++) {
            scanf("%i", &numu);
             num2 = num2 + numu;
             }
        num2= num2/10;
        printf("El promedio de la suma de los número es: %f ", num2);

} */


 // 6) Programa que le pide 2 números al usuario y arroja los números comprendidos entre estos (sin incluir los del usuario) //
 /*
 int main () {
    int num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%i", &num2);
        for (int i = num1; i < num2; i++){
            if (i != num1 && i != num2){
                printf("%i ", i);
            }
        }
        
    printf(" Son los números comprendidos entre %i y %i", num1, num2);

    return 0;
} */

// 7) Programa que imprima la suma de los números comprendidos entre 2 números ingresados por el usuario //
/*
int main () {
    int num1, num2, suma = 0;
    printf("Ingrese el primer número: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%i", &num2);
    
    for(int i = num1 ; i <= num2; i++){
        suma = suma + i;
    }
    
    printf("La suma de los números comprendidos entre %i y %i es: %i ", num1, num2, suma);

    return 0;
} */

// 8) Programa que le pida a el usuario número hasta que arroje un negativo //
/*
int main () {

    int num = 0;

    while (num >= 0) {

        printf("Ingrese un número: ");
        scanf("%i", &num);
    }

    return 0;
} */

// 9) Programa que imprima el factorial de un número, dado por el usuario (lo hice dentro de una función)//
/*
int factorial (int num);

int main (){
    int fact, num;
    printf("ingrese un número: ");
    scanf ("%i", &num);
    fact = factorial(num);
    printf("El factorial de el número ingresado es: %i ", fact);
    return 0;
}

int factorial (int num) {
int mult=1;
for (int i = 1; i <= num; i++){
    mult = mult * i;
}
return mult;
} */

// 10) Programa que pida 10 números enteros al usuario y al final diga cuántos fueron positivos y cuántos fueron negativos //
 /*
 int main () {
    int num, cp = 0, cn = 0;
    for (int i = 0; i < 10 ; i++ ){
        printf("Ingrese un número: ");
        scanf("%i ", &num);
        if (num > 0){
            cp++;
        }
        else {
            cn++;
        }
    }
    printf("La cantidad de números positivos ingresados fueron %i y de negativos fueron %i", cp, cn);

    return 0;
 } */

// 11) Programa que le pida al usuario 10 números al azar entre 1-100 y al final le diga cuál fue el número final ingresado//
/*
int main (){
    int num;
    for (int i = 0; i < 10; i++){
        printf("Ingrese número al azar: ");
        scanf("%i", &num);
        num = num;
    }
    printf("El número final ingresado fue el %i ", num);

    return 0;
} */

// 12) Programa que multiplique 10 números mediante sumas sucesivas //
// -----------------------------------------------------------------------------------------------------------------------------------//

// 13) Programa que imprima los primero 10 dígitos de la serie de Fibonachi. //
/*
int main() {
    int pn=0, sn=1, suma, cont=0;
    printf("0 - 1 - ");
    while (cont < 8){
        suma = pn + sn;
        pn = sn;
        sn = suma;
        printf("%i - ", suma);
        cont = cont + 1;
    }
    return 0;
} */

// 14) Programa que le pida al usuario que intente adivinar un número aleatorio entre 0 y 20 inicializado desde el mismo programa. //
/*
int main (){
    int num = 11, numu;
    printf("Adivine el número entre 0-20\n");
    do{
        printf("ingrese un número: ");
        scanf("%i", &numu);
        if (numu == num){
            printf("Felicidades, adivinó el número!!\n");
        }
        else{
            if (numu < 11){
                printf("El número es mayor a el número ingresado\n");
            }
            else{
                if (numu > 11){
                    printf("El número es menor al número ingresado\n");
                }
            }
        }
    }
    while(numu != num);
    return 0;
} */

// 15) Programa que imprima la tabla del 7 multiplicando del 1-20. //
/*
int main(){
    int mult = 0;
    for(int i = 1; i <= 20; i++){
        mult = i * 7;
        printf("7 x %i = %i \n", i, mult);
    }
    return 0;
} */

// 16) Programa que calcule las áreas de recángulos indefinidamente hasta que el usuario decida no continuar. //
/*
int main(){
    int arearec, b, a, stop;
    printf("Calculadora de áreas de rectángulos");
    do{
        printf("\nIngrese 1 si desea continuar o 0 si desea parar\n");
        scanf("%i", &stop);
        if (stop == 1){
            printf("Ingrese la base del rectángulo: ");
            scanf("%i", &b);
            printf("Ingrese la altúra del rectángulo: ");
            scanf("%i", &a);

            arearec = b * a;
            printf("El area del rectángulo dado es de: %i \n", arearec);
        }  
    }
    while (stop != 0);
    return 0;
} */

// 17) programa que imprima una escalera de asteriscos por niveles (10) asteriscos //
/*
int main(){
    
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
} */

// 18). Programa que imprima las tablas del 8, 9 y 10 multiplicando de 1 hasta 10. //
/*
int  main(){
    int mult8 = 0, mult9 = 0, mult10 = 0;
    for(int i = 1; i <= 10; i++){
        mult8 = i * 8;
        printf("8 x %i = %i \n", i, mult8);
    }
    printf("\n");
    for(int i = 1; i <= 10; i++){
        mult9 = i * 9;
        printf("9 x %i = %i \n", i, mult9);
    }
    printf("\n");
    for(int i = 1; i <= 10; i++){
        mult10 = i * 10;
        printf("9 x %i = %i \n", i, mult10);
    }
    return 0;
} */






