#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,j,n;
    int M=0,N=1000;
    
    printf("================================================\n");
    printf("Imprimimos los elementos de una matriz (NxN). \n");
    printf("Dame el valor de N: \n");
    scanf("%d",&n);
    
    int a[n][n];
    
    srand(time(NULL));
    printf("\n");
    
    printf("Primero imprimiremos todos los elementos de la matriz para poder corroborar resultados \n");
    
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
                    a[i][j] = M + (double)rand() / ((double)RAND_MAX / (N - M + 1) + 1);
                    printf("a[%d][%d] = %d      ",i,j, a[i][j]);
            }
            printf("\n");
        }
    printf("================================================\n");
    
    printf("a) Impresion de la primera columna\n");
    
    for(i=0;i<n;i++)
        {
            printf("a[%d][0] = %d \n",i,a[i][0]);
        }
    printf("================================================\n");
    
    printf("b) Impresion del primer renglon\n");
    
    for(j=0;j<n;j++)
        {
            printf("a[0][%d] = %d \n",j,a[0][j]);
        }
    printf("================================================\n");
    
    printf("c) Impresion de la ultima columna\n");
    
    for(i=0;i<n;i++)
        {
            printf("a[%d][%d] = %d \n",i,n-1,a[i][n-1]);
        }
    printf("================================================\n");
    
    printf("d) Impresion del ultimo renglon\n");
    
    for(j=0;j<n;j++)
        {
            printf("a[%d][%d] = %d \n",n-1,j,a[n-1][j]);
        }
    printf("================================================\n");
    
    printf("e) Impresion de las diagonales (Izq Arr - Der Ab; Der Ab - Izq Arr; Izq Ab - Der Arr; Der Arr - Izq Ab)\n");
    
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    printf("a[%d][%d] = %d \n", i, j, a[i][j]);
                }
            }
        }
    printf("\n");
    
    for(i=n-1;i>=0;i--)
        {
        for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    printf("a[%d][%d] = %d \n", i, j, a[i][j]);
                }
            }
        }
    printf("\n");
    
    j=0;
    
    for(i=n-1;i>=0;i--)
        {
        j=j+1;
            	{
                   printf("a[%d][%d] = %d \n", i, j-1, a[i][j-1]);
                }
        }
    printf("\n");
    
    i=0;
    
    for(j=n-1;j>=0;j--)
        {
        i=i+1;
            	{
                   printf("a[%d][%d] = %d \n", i-1, j, a[i-1][j]);
                }
        }
    printf("\n");

    return 0;
}
