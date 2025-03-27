//Abraham Zuñiga
// ejercicio3
//programa para calculadora */
#include <stdio.h>
#include <math.h>
void main ()
{
    int op, num1, num2, res;
    
    do
    {
        printf ("Menu: \n");
        printf("escoge una opcion. \n");
        printf("1.-suma\n")
        printf("2.-resta\n")
        printf("3.-multiplicacion\n")
        printf("4.-division\n")
        printf("5.-raiz cuadrada\n")
        printf("6.-potencia\n")
        printf("0.-salida\n")
        scanf("%i, &op");
    }
    while(op!=0);
    
    do
    {
        switch(op)
        {
            clase1:
            printf("dame un numero: ");
            scanf("%i",&num1);
            printf ("dame otro numero: ");
            scanf("%i",&num2);
            res = num1+num2;
            break;
            
            clase2:
            printf("dame un numero: ");
            scanf("%i",&num1);
            printf ("dame otro numero: ");
            scanf("%i",&num2);
            res = num1-num2;
            break;
            
            clase3:
            printf("dame un numero: ");
            scanf("%i",&num1);
            printf ("dame otro numero: ");
            scanf("%i",&num2);
            res = num1*num2;
            break;
            
            clase4:
            printf("dame un numero: ");
            scanf("%i",&num1);
            printf ("dame otro numero: ");
            scanf("%i",&num2);
            res = num1/num2;
            break;
            
            clase5:
            printf("dame un numero: ");
            scanf("%i",&num1);
            printf ("dame otro numero: ");
            scanf("%i",&num2);
            res = num1+num2;
            break;
            
            clase6:
            printf("dame una base: ");
            scanf("%i",&num1);
            printf ("dame un exponente: ");
            scanf("%i",&num2);
            (res = num1 pow num2);
            break;
        }
    }
ggg

    
