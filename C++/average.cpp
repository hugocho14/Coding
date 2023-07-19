#include<stdio.h>

int main(void)
{
      char c[9][20];
      int a,b[9],d=0,f;
      float e;
      
      printf("\n\tHow many subjects do you have: ");
      scanf("%i",&f);
      printf("\n\tInsert your %i subjects \n\t",f);
      
      for(a=0;a<f;a++)
      {
           scanf("%s",c[a]);
           printf("\n\t");
           
           fflush(stdin);
      }
      
      for(a=0;a<f;a++)
      {
           printf("\n\t Insert the grade for %s: ",c[a]);
           scanf("%i",&b[a]);
           d+=b[a];
           fflush(stdin);
      }
      
      e=d/f;
      
      printf("\n\t Your final grade is %0.2f",e);
      
      getchar();     
}
