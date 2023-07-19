#include <stdio.h>
#include <conio.h>

main()
{
      float a,b,c,d;
      
      printf("\n Este programa realiza la suma de dos numeros enteros \n");
      printf("\n Introduce el primer sumando:  ");
      scanf("%f",&a);
      printf("\n Introduce el segundo sumando:  ");
      scanf("%f",&b);
      printf("\n Introduce tarjeta de credito:  ");
      scanf("%f",&d);
      
      c=a+b;
      
      printf("\n El resultado de %.2f+%.2f es = %.2f \n",a,b,c);
      printf("\n Adios terricola");

      getch();     
}
      
      