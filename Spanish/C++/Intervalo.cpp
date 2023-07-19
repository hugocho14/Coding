#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
      int k,l,m,n=0,o;
      char op;
      
      do
      {
          system("cls");    
          printf("\n\t Multiplicaremos numeros de rangos cualesquiera \n\t");
          printf("\n\t Introduce el que quieras: ");
          scanf("%i",&m);
          printf("\n\t Multiplica de: ");
          scanf("%i",&l);
          printf("\n\t A: ");
          scanf("%i",&k);
      
          while(l<=k)
          {
                  o=m*l;
                  printf("\n\t %i x %i = %i \n\t ",m,l,o);
                  l=l+1;
          }
          printf("\n\t Quieres volver a ver que la compu multiplica mejor que tu? (Presiona M de malo)");
          op=getche();
      }
      while ((op=='m')||(op=='M'));
      
      getch();
}
