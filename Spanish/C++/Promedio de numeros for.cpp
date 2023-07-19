#include<stdio.h>

int main(void)
{
      char c[9][20];
      int a,b[9],d=0,f;
      float e;
      
      printf("\n\tCuantas materias tienes: ");
      scanf("%i",&f);
      printf("\n\tDime tus %i materias \n\t",f);
      
      for(a=0;a<f;a++)
      {
           scanf("%s",c[a]);
           printf("\n\t");
           
           fflush(stdin);
      }
      
      for(a=0;a<f;a++)
      {
           printf("\n\t Introduce tu calificacion de %s: ",c[a]);
           scanf("%i",&b[a]);
           d+=b[a];
           fflush(stdin);
      }
      
      e=d/f;
      
      printf("\n\t Tu promedio es %0.2f",e);
      
      getchar();     
}
             