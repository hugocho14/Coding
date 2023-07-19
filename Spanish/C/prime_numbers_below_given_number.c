#include <stdio.h>

int primos();

int n;

int main()
{
    
    printf("De un numero, y nosotros le decimos los primos que hay debajo de el: ");
    scanf("%d",&n);
    
    primos();

}

int primos()
{
    int contador;
    int par;
    int i = 3;
    
    printf("Los primos que hay son:\n");
    printf("1 2\n");
    
    for(contador=3;contador<=n;contador++)
    {
        for(par=2;par<=i-1;par++)
        {
            if(i%par==0)
            {
                printf("%d No es primo \n",i);
                break;
            }
        }
        
        if(par==i)
        {
            printf("%d      SI ES PRIMO\n",i);
        }
        
        i++;
    }
    
    return 0;
}
