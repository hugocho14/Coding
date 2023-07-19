#include<stdio.h>
#include<conio.h>

main()
{
      float a,b,c;
      
      printf("\n Bienvenido a la comparacion numerica \n");
      printf("\n Introduzca el primer numero:  ");
      scanf("%f",&a);
      printf("\n Introduzca el segundo numero:  ");
      scanf("%f",&b);
      printf("\n Introduzca el tercer numero:  ");
      scanf("%f",&c);
      
      if(a==b && b==c)
      {
              printf("Todos tus numeros son iguales");
      }
      else if(a>b && b>c)
      {
              printf("El primero es mayor que el segundo y el segundo mayor que el tercero");
      }
      else if(a>b && b<c)
      {
              printf("El primero es mayor que el segundo y el segundo menor que el tercero");
      }
      else if(a<b && b<c)
      {
              printf("El primero es menor que el segundo y el segundo menor que el tercero");
      }
      else if(a<b && b>c)
      {
              printf("El primero es menor que el segundo y el segundo es mayor que el tercero");
      }
      else if(a==b && b>c)
      {
              printf("El primero es igual que el segundo y son mayores que el tercero");
      }
      else if(a==b && b<c)
      {
              printf("El primero es igual que el segundo y son menores que el tercero");
      }
      else if(a<b && b==c)
      {
              printf("El segundo es igual que el tercero y son mayores que el primero");
      }
      else if(a>b && b==c)
      {
              printf("El segundo es igual que el tercero y son menores que el primero");
      }
      else if(a==c && b<c)
      {
              printf("El primero es igual que el tercero y son mayores que el segundo");
      }
      else if(a==c && b>c)
      {
              printf("El primero es igual que el tercero y son menores que el segundo");       
      }
      getch();
      return 0;
}
              
              
              
              
              
              
              
              
              
              
              
              
              
      