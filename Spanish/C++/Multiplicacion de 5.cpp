#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
      int m, n=0, o;
      char op;
    
    do
    {
      n=0;
	  system("cls");
      printf("\n\t Multiplicaremos del 1 al 10 el numero que me pidas \n\t");
      printf("\n\t Introduce el que quieras: ");
      scanf("%i",&m);
      
      while(n<=10)
      {
                  o=m*n;
                  printf("\n\t %i x %i = %i \n\t ",m,n,o);
                  n=n+1;
      }
      printf("\n\t Volver a multiplicar presiona S");
      op=getche();
    }
    while((op=='s')||(op=='S'));
    getch();
}
