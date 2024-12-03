#include <stdio.h>

// 1. Programa que imprima los primeros 10 números impares. //
/*
int main (){
   int num = 1;
   int  impares = 10 * 2; 
   for(int i = 1; i <= impares; i++){
        if(i % 2 != 0){
            printf("%i ", i);
        }
   }
} */

// 2. Programa que pida 10 números enteros al usuario y al final le diga cuántos de ellos fueron positivos y cuántos negativos. //
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

// 3. Programa que le pida al usuario que intente adivinar un número aleatorio entre 0 y 20 inicializado desde el mismo programa. //
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

// 4. Programa que imprima una escalera de * de 10 niveles. //
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

// 5. Programa que imprima las tablas del 8, 9 y 10 multiplicando de 1 hasta 10. //
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