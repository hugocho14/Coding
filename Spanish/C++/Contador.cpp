#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
      int c=0;
      char op;
      
      do
      {
            c=0;
	  		system("cls");
      		while(c<=10)
      		{
                  printf("%d \n",c);
                  c=c+1;
      		}
      
      		printf("¿Quieres volver a contar? (Presiona S)");
      		op=getche();
      }
      while((op=='s')||(op=='S'));
      getch();
}
      



