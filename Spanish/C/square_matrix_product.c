#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int C();

int n;

int main()
{
    printf("Multiplicacion de matrices cuadradas, cual es la dimension de las matrices: ");
    scanf("%d",&n);
    
    C();
}

int C()
{
    int i,j,k;
    int M=0,N=10;
    int a1[n][n];
    int a2[n][n];
    int c[n][n];
    int suma;
    
    srand(time(NULL));
    
    printf("\n");
    
    printf("Para corroborar, la matriz a1 es: \n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a1[i][j]=M+(double)rand()/((double)RAND_MAX/(N-M+1)+1);
            printf("a1[%d][%d] = %d \n",i,j,a1[i][j]);
        }
    }
    
    printf("\n");
    printf("Para corroborar, la matriz a2 es: \n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a2[i][j]=M+(double)rand()/((double)RAND_MAX/(N-M+1)+1);
            printf("a2[%d][%d] = %d \n",i,j,a2[i][j]);
        }
    }
    
    printf("La Multiplicacion da una matriz que es: \n");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            suma=0;
            for(k=0;k<n;k++)
            {
                suma=suma+a1[i][k]*a2[k][j];
            }
            c[i][j]=suma;
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("c[%d][%d] = %d \n",i,j,c[i][j]);
        }
    }

    return 0;    
        
}
