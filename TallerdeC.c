#include <stdio.h>
#include <math.h>
int main()
{
    /* 1. Crear un programa que calcule el área de cualquier circulo. A=PI*R^2.*/
    /*
    float num, areacir;
    printf("Ingrese el número del radio del circulo: ");
    scanf("%f",&num);
    areacir=3.1416*num*num;
    printf("El area del circulo con el radio solicitado es de: %f cm^2", areacir); */
    
   /* 2. Crear un programa que calcule la distancia que tardó una persona en realizar un viaje en auto. D=V*T. */
   /*
   int tiempo, vel, distance;
   printf ("Ingrese el tiempo que tardo en horas: ");
   scanf("%i",&tiempo);
   printf("Ingrese la velocidad a la que iba en el trayecto: ");
   scanf("%i",&vel);
   distance=vel*tiempo;
   printf("La distancia recorrida es de: %i km",distance);
   */
   
   /* 3. Crear un programa que calcule el valor a pagar por x cantidad de productos a determinado precio.*/
   /*
   int cnt, product;
    printf ("Cuántos productos desea llevar: ");
    scanf("%i",&cnt);
    product=cnt*1000;
    printf("El valor total es de: %i COP",product);
    */
    
    /*4. Crear un programa que calcule el valor a pagar de un producto después de aplicar un descuento.*/
    /*
    int precio, desc;
    printf ("Ingrese el precio del producto que desea llevar: ");
    scanf("%i",&precio);
    desc=precio-((precio*12)/100);
    printf("El valor total a pagar con el 12%% de descuento: %i COP",desc);
    */
    
    /*5. Crear un programa que calcule el índice de masa corporal de una persona. IMC= peso/Altura^2.*/
    /*
    float peso, altura, imc;
    printf ("Ingrese su peso: ");
    scanf("%f",&peso);
    printf ("Ingrese su altura: ");
    scanf("%f",&altura);
    imc=peso/(altura*altura);
    printf("El índice de su masa corporal es de: %.2f",imc);
    */
    
    /*6. Crear un programa que calcule la edad promedio de 3 hermanos.*/
    /*
    int ed1, ed2, ed3, prom;
    printf ("Ingrese la edad del primer hermano: ");
    scanf("%i", &ed1);
    printf ("Ingrese la edad del segundo hermano: ");
    scanf("%i", &ed2);
    printf ("Ingrese la edad del tercer hermano: ");
    scanf("%i", &ed3);
    prom=(ed1 + ed2 + ed3) / 3;
    printf("El promedio de las edades es: %i ",prom);
    */
    
    /* 7. Crear un programa que calcule la antigüedad en años de un producto basado en su año de elaboración. */
    /*
    int anoproduct, anoact, operation;
    printf("Escriba el año de creación del producto: ");
    scanf("%i",&anoproduct);
    printf("Escriba el año actual: ");
    scanf("%i",&anoact);
    operation=anoact-anoproduct;
    printf("El producto tiene %i años de antiguedad",operation);
   */
   
   /*8. Crear un conversor de metros a centímetros.*/
   /*
    float meters, operation;
    printf("coloque la cantidad de metros: ");
    scanf("%f",&meters);
    operation=meters*100;
    printf("El valor de metros en centimetros es: %.2f cm ",operation);
    */
    
    /*9. Dados los catetos de un triangulo rectángulo calcular su hipotenusa.*/
    /*
    float ca, co, h;
    printf("coloque el cateto adyacente: ");
    scanf("%f",&ca);
    printf("coloque el cateto opuesto: ");
    scanf("%f",&co);
    h= sqrt((ca*ca)+(co*co));
     printf("El valor de la hipotenusa del triangulo es de: %.2f ",h);
    */
   
    
    /*10. Crear un programa que reciba 2 números en las variables num1 y num2, 
    luego debe hacerse un intercambio de valores y volver a mostrar el contenido 
    de las variables num1 y num2 con los valores intercambiados.*/
    /*
    int num1 = 5;
    int num3 = 0;
    num3 = num1;
    printf("num1 es igual a: %i \n", num1); 
    int num2 = 7;
    printf("num2 es igual a: %i \n", num2);
    num1=num2;
    printf ("El nuevo valor de num1 es: %i \n",num1);
    num2 = num3;
    printf ("El nuevo valor de num2 es: %i ",num3);
    */
    
    return 0;
}