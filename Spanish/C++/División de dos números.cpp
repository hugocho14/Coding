#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
      float a,b,c;//Determinacion de variables
      char op;
      
      do
      {
	  		system("cls");
	  		printf("Realizacion de division de numeros\n");
      		printf("\n Introduce el dividendo:  ");
      		scanf("%f",&a);
      		printf("\n Introduce tu divisor:  ");
      		scanf("%f",&b);
      
      		if(b!=0)
      		{
              		c=a/b;
              		printf("\n El resultado es: %.2f",c);//Fin del If
              		printf("\n Quieres hacer otra division? (Presiona S)");
              		op=getche();
      		}
      		else if(b==0&&a!=0)
      		{
              		printf("\n No se puede, pon un divisor valido (Presiona S para repetir)");
					op=getche();//Fin del else
      		}
      		else if(a==0&&b==0)
      		{
              		printf("\n A ver a ver >:v imaginate que tienes 0 galletas y las repartes entre 0 amigos");
             		printf("\n No tiene sentido, asi que el monstruocomegalletas no tiene galletas y tu no tienes amigos xd"); 
					printf("\n Ahora bien, si quieres tener amigos presiona S");
					op=getche();
      		}		
      }
      while((op=='s')||(op=='S'));
      getch();
      return 0;
}
