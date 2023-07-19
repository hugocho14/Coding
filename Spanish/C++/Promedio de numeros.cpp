#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(void)
{
    int contador,a;
    float b;
    char op;
    
    do
    {
        system("clr");
        
        b=0;
        
        for(contador=0;contador<=5;contador=contador+1)
        {
            printf("Dame tu numero");
            scanf("%d",&a);
            fflush(stdin);
            b=b+a;
        }
        
        printf("Tu promedio es %0.2f",b/5);
        printf("Repetir promedio? (Presiona S)");
        op=getche();
    }
    while ((op=='s')|(op=='S'))
    
    getch();
}
    
