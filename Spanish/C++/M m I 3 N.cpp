#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
      float a,b,c;
      char op;
      
      do
      {
      		system("cls");
      		printf("\n Bienvenido a la comparacion numerica \n");
      		printf("\n Introduzca el primer numero:  ");
      		scanf("%f",&a);
      		printf("\n Introduzca el segundo numero:  ");
      		scanf("%f",&b);
      		printf("\n Introduzca el tercer numero:  ");
      		scanf("%f",&c);
      
      		if(a==b && b==c)
      		{
              printf("\n Todos tus numeros son iguales");
              printf("\n Para repetir, presiona S");
              op=getche();
     		}
      		else if(a>b && b>c)
      		{
              printf("\n El primero es mayor que el segundo y el segundo mayor que el tercero");
              printf("\n Para repetir, presiona S");
              op=getche();
     		}
     		 else if(a>b && b<c && a!=c)
     		{
              printf("\n El primero es mayor que el segundo y el segundo menor que el tercero");
              printf("\n Para repetir, presiona S");
              op=getche();
     		}
     		 else if(a<b && b<c)
     		{
              printf("\n El primero es menor que el segundo y el segundo menor que el tercero");
              printf("\n Para repetir, presiona S");
              op=getche();
     		}
      		else if(a<b && b>c && a!=c)
      		{
              printf("\n El primero es menor que el segundo y el segundo es mayor que el tercero");
              printf("\n Para repetir, presiona S");
              op=getche();
     		}
     		 else if(a==b && b>c)
      		{
              printf("\n El primero es igual que el segundo y son mayores que el tercero");
              printf("\n Para repetir, presiona S");
              op=getche();
      		}
      		else if(a==b && b<c)
      		{
              printf("\n El primero es igual que el segundo y son menores que el tercero");
              printf("\n Para repetir, presiona S");
              op=getche();
     		}
      		else if(a<b && b==c)
      		{
              printf("\n El segundo es igual que el tercero y son mayores que el primero");
              printf("\n Para repetir, presiona S");
              op=getche();
      		}
     		 else if(a>b && b==c)
     		{
              printf("\n El segundo es igual que el tercero y son menores que el primero");
              printf("\n Para repetir, presiona S");
              op=getche();
     		}
     		 else if(a==c && b<c)
     		{
              printf("\n El primero es igual que el tercero y son mayores que el segundo");
              printf("\n Para repetir, presiona S");
              op=getche();
     		}
     		 else if(a==c && b>c)
     		{
              printf("\n El primero es igual que el tercero y son menores que el segundo");     
			  printf("\n Para repetir, presiona S");
              op=getche();  
      		}
      	}
      	while((op=='s')||(op=='S'));
      getch();
      return 0;
}
