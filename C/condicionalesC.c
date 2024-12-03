/*1. Programa que indique cuál es el mayor entre 2 hermanos.*/
/*
#include <stdio.h>
int main()

{
    int herm1,herm2;
    printf("ingrese la edad del primer hermano: ");
    scanf("%i", &herm1);
    printf("ingrese la edad del segundo hermano: ");
    scanf("%i", &herm2);
    if(herm1>herm2){
        printf("el primer hermano es mayor");
    }
    else {
         printf("el segundo hermano es mayor");
    }

    return 0;
}
*/


/*2. Programa que indique si un numero ingresado es negativo, positivo o cero.*/
/*
#include <stdio.h>
void main()
{
    float num;
    printf("ingrese su numero a identificar: ");
    scanf("%f", &num);
    if ( num>0){
        printf("su numero es positivo");
        }
    else{ 
        if (num<0){
        printf("su numero es negativo");
        }
    else{
        printf("su numero es 0");
        }
    }
}
*/


/*3. Programa que solicite nombre de usuario y contraseña, 
si el usuario ingresado es Juan y la contraseña es 1234 mostrar 
en pantalla el mensaje “Acceso correcto” 
de lo contrario mostrar “Acceso denegado”.*/
/*
#include <stdio.h>
#include <string.h>

void main()
{
    char us[10];
    char con[10];
    printf("ingrese su Usuario: ");
    scanf("%s", us);
    printf("ingrese su Contraseña: ");
    scanf ("%s", con);
    if (strcmp(us,”juan")==0){
        if(strcmp(con,”1234")==0){
            printf("acceso concedido");
        }
        }
    else{
        printf("Acceso denegado");
    }
    
}
*/


/*5. Hacer un programa que solicite el estrato social de una persona y 
muestre la siguiente descripción. Si el estrato ingresado es 1 mostrar en pantalla 
el texto “Bajo”, 2 “Medio bajo”, 3 “Medio”, 4 “Medio alto”, 5 “Alto”.*/
/*
#include <stdio.h>


void main()
{
    float est;
    printf("ingrese su estrato social: ");
    scanf("%f", &est);
    if (est==1){
        printf("su estrato social es Bajo");
    }
    else{
        if (est==2){
            printf("su estrato social es Medio Bajo");
        }
    else{
        if(est==3){
        printf("su estrato social es Medio");
        }
    else{
        if (est==4){
        printf("su estrato social es Medio Alto");
        }
    else{
        if (est==5){
        printf("su estrato social es Alto");
        }
                }
            }
        }
    }
}
*/


/*6. Programa que dado el mes de nacimiento de una
persona escriba cual es su signo.*/
/*
#include <stdio.h>
#include <string.h>
void main()
{
    char mes[10];
    printf("Ingrese su mes de Nacimiento: ");
    scanf("%s", mes);
    if (strcmp(mes,"Enero")==0){
        printf("Su signo Zodiacal es Acuario");
        }
    else{
        if (strcmp(mes,"Febrero")==0){
        printf("Su signo Zodiacal es Piscis");
        }
    else{
        if (strcmp(mes,"Marzo")==0){
        printf("Su signo Zodiacal es Aries");
        }
    else{
        if (strcmp(mes,"Abril")==0){
        printf("Su signo Zodiacal es Tauro");
        }
    else{
        if (strcmp(mes,"Mayo")==0){
        printf("Su signo Zodiacal es Geminis");
        }
    else{
        if (strcmp(mes,"Junio")==0){
        printf("Su signo Zodiacal es Cancer");
        }
    else{
        if (strcmp(mes,"Julio")==0){
        printf("Su signo Zodiacal es Leo");
        }
    else{
        if (strcmp(mes,"Agosto")==0){
        printf("Su signo Zodiacal es Virgo");
        }
    else{
        if (strcmp(mes,"Septiembre")==0){
        printf("Su signo Zodiacal es Libra");
        }
    else{
        if (strcmp(mes,"Octubre")==0){
        printf("Su signo Zodiacal es Escorpion");
        }
    else{
        if (strcmp(mes,"Noviembre")==0){
        printf("Su signo Zodiacal es Sagitario");
        }
    else{
        if (strcmp(mes,"Diciembre")==0){
        printf("Su signo Zodiacal es Capricornio");
        }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
*/


/*7. Programa que solicite al usuario edad 
y género, y adicionalmente si es mujer preguntar 
cuántos hijos tiene.*/
/*
#include <stdio.h>
#include <string.h>
void main()
{
    int E, O;
    char G[1];
    printf("Ingrese su edad:");
    scanf("%i", &E);
    printf("Ingrese su genero (Para masculino: M - para femenino: F): ");
    scanf("%s", G);
    if (strcmp(G,"M")==0){
        printf("Gracias por Ingresar los datos");
    }
    else{
        if (strcmp(G,"F")==0){
        printf("Cuantos hijos tiene: ");
        scanf("%i", &O);
        printf("Gracias por Ingresar los datos");
        }
    }
}
*/


/*8. Programa que indique el nivel de peso de una persona basado 
en su índice de masa corporal teniendo en cuenta que si el IMC es:  
menor a 18.5 Bajo Peso, entre 18.5 y 24.9  Peso 
Normal, Entre 25 y 29.9 sobrepeso, mayor a 30 Obesidad.*/
/*
#include <stdio.h>


void main()
{
   float peso, altura, IMC;
   printf("ingrese su peso en Kg: ");
   scanf("%f", &peso);
   printf("ingrese su altura: ");
   scanf("%f", &altura);
   IMC=P/(A*A);
   
       if(IMC<18.5){
       printf("Usted tiene Bajo peso");
       }
   else{
       if(18.5>=IMC, IMC<24.9){
           printf("Usted tiene un peso Normal");
        }
    else{
        if(25>=IMC, IMC<29.9){
            printf("Usted tiene sobrepeso");
        }
    else{
        if(IMC>30){
            printf("Usted tiene Obesidad");
        }
            }
        }
    }
}
*/


/*9. Programa que indique si una persona debe o no declarar renta teniendo
en cuenta que deben declarar aquellos que hayan ganado más de 50.000.000 el 
últimoaño o posean activos por más de 300.000.000.*/
/*
#include <stdio.h>
void main()
{
    
    double ganancias, act;
    double IG=50000000;
    double IC=300000000;
    printf("Ingrese sus ganancias y sus activos: ");
    scanf("%lf", &ganancias);
    scanf("%lf", &act);
    
        if(ganancias>IG && act>IC){
        printf("Usted debe  hacer declaración de renta");
        }
    else{
        if(ganancias<IG && act>IC){
        printf("Usted debe  hacer declaración de renta");
        }
    else{
        if(ganancias>IG && act<IC){
        printf("Usted debe  hacer declaración de renta");
        }
    else{
        if (ganancias<IG && act<IC){
        printf("Usted no debe hacer declaración de renta");
        }
            }
        }
    }
}
*/


/*10. Hacer un programa que capture los datos de una persona e indique 
si tiene o no derecho a subsidio, teniendo en cuenta que el subsidio 
solo se le dará a personas de la tercera edad(60 años) con ingresos  menores 
a 1.000.000 y a las mujeres de estrato 1 y 2. */
/*
#include <stdio.h>
#include <string.h>
void main()
{
    int E, H, I, S;
    char G[1];
    double IM=1000000;
    printf("Ingrese su edad:");
    scanf("%i", &E);
    printf("Ingrese su genero (Para Masculino:M Para femenino F): ");
    scanf("%s", G);
    printf("Cual es la cantidad de sus ingresos");
    scanf("%i", &I);
    
        if(E>=60 && strcmp(G, "M")==0 && I<IM){
        printf("Usted es apto para el subsidio");
        }
    else{
        if(E>=60 && strcmp(G, "F")==0 && 1>=S<=2 && I<IM){
        printf("Ingrese su estrato: ");
        scanf("%i", &S);
        printf("usted aplica para subsidio");
        }
    else{
        printf(" no es apto para subsidio");
        }
    }
}
*/