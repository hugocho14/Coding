#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
      char op,a;
      float x,y;
      
      do
      {
            fflush(stdin);
            system("cls");
            printf("\n\t Bienvenido a tu calcu");
            printf("\n\t Que quieres hacer? \n\t A) Sumar \n\t B) Restar \n\t C) Multiplicar \n\t D) Dividir");
            printf("\n\t Introduce opcion: ");
            scanf("%c",&a);
            
            switch(a)
            {
                     case'A':
                            printf("\n\t Introduce numero de suma: ");
                            scanf("%f",&x);
                            printf("\n\t Introduce numero de suma: ");
                            scanf("%f",&y);
                            printf("\n\t El resultado es %0.2f",x+y);
                            break;
                     case'B':
                            printf("\n\t Introduce numero de resta: ");
                            scanf("%f",&x);
                            printf("\n\t Introduce numero de resta: ");
                            scanf("%f",&y);
                            printf("\n\t El resultado es %0.2f",x-y);
                            break;
                     case'C':
                            printf("\n\t Introduce numero de mult: ");
                            scanf("%f",&x);
                            printf("\n\t Introduce numero de mult: ");
                            scanf("%f",&y);
                            printf("\n\t El resultado es %0.2f",x*y);
                            break;
                     case'D':
                            printf("\n\t Introduce numero de div: ");
                            scanf("%f",&x);
                            printf("\n\t Introduce numero de div: ");
                            scanf("%f",&y);
                                 
                            if(y!=0)
                            {
                                 printf("\n\t El resultado es %0.2f",x/y);
                            }
                            else
                            {
                                 printf("\n\t No hay division entre 0");
                            }
                            break;
                     default:
                            printf("\n\t Inroduce algo valido");
                            break;
            }
            printf("\n\t \n\t Presiona S si pusiste algo incorrecto o quieres repetir: ");
            op=getche();
      }
      while((op=='s')||(op=='S'));
      getch();
}
                            
