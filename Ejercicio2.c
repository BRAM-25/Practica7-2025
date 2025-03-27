//Abraham Zuñiga
// ejercicio2
//programa para validar que un numero sea par o imppar*/
#include <stdio.h>

void main()
{
    int num;
    printf("dame un numero: ");
    scanf("%i",&num);
    
    if (num%2==0)
    {
        printf("num es par\n");
    }
    else
    {
        printf("num es impar\n");
    }
} 
