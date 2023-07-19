#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
      float a,b;
      char op;
      
      do
      {
      		system("cls");
      		printf("Bienvenido a la fabrica, aqui le decimos si su numero es mayor, menor o igual \n");
      		printf("\n Introduce tu primer numero:  ");
      		scanf("%f",&a);
      		printf("\n Introduce tu segundo numero:  ");
      		scanf("%f",&b);
      
     		 if(a<b)
      		{
             		printf("\n %.2f es menor que %.2f",a,b);
             		printf("\n %.2f es mayor que %.2f",b,a);
             		printf("\n Para repetir, presiona S");
              		op=getche();
      		}	
     		else 
      		{
     		        if(a==b)
             		{
                  		printf("\n %.2f es igual que %.2f",a,b);
                  		printf("\n Para repetir, presiona S");
              			op=getche();
             		}
             		else
             		{
                 		 printf("\n %.2f es mayor que %.2f",a,b);
                 		 printf("\n %.2f es menor que %.2f",b,a); 
						 printf("\n Para repetir, presiona S");
              			 op=getche();         
             		}  
			}
      }
      while((op=='s')||(op=='S'));
      getch();
      return 0;
}
