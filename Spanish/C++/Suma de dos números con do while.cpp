#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
      int a,b;
      char op;
      
      do
      {
           system("cls");
           printf("\n\t Dame el primer numero: ");
           scanf("%d", &a);
           printf("\n\t Introduce el segundo numero: ");
           scanf("%d",&b);
           printf("\n\t La suma es: %d \n\t",a+b);
           printf("Deseas realizar, otra operacion? (presiona s)");
           
           op=getche();
      }//fin de do (bloque de repetición)
      while((op=='s')||(op=='S'));
      getch();
}//fin de main