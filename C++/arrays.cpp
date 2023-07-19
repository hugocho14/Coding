#include<stdio.h>

int main (void){
    
    int a[3],b[3],i,d=0;
    char c[3];
    c[0]='i'; 
    c[1]='j';
    c[2]='k';
    
    for(i=0;i<3;i++)
    {
         printf("Insert value %c for vector 1: ",c[i]);           
         scanf("%i",&a[i]);
         fflush(stdin);
    }
    for(i=0;i<3;i++)
    {
         printf("Insert value %c for vector 2: ",c[i]);           
         scanf("%i",&b[i]);
         fflush(stdin);
    }
    for(i=0;i<3;i++)
    {            
         d+=(a[i])*(b[i]);      
         fflush(stdin);
    }

    printf("The dot product is: %i",d);
    
    getchar();   
}