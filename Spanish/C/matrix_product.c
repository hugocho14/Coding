#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n,m,o,h;
    
    printf("===============================================\n");
    printf("Multiplicacion de matrices (MxN) \n");
    printf("Ingresa el numero de filas de A: \n");
    scanf("%d",&m);
    printf("Ingresa el numero de columnas de A: \n");
    scanf("%d",&n);
    printf("Ingrese el numero de filas de B: \n");
    scanf("%d",&o);
    printf("Ingrese el numero de columnas de B: \n");
    scanf("%d",&h);
    
    while (o!=n)
    {
        printf("El numero de filas de B debe ser igual al numero de columnas de A, ingrese de nuevo el # de filas de A: \n");
        scanf("%d",&m);
        printf("Ingresa el numero de columnas de A: \n");
        scanf("%d",&n);
        printf("Ingrese el numero de filas de B: \n");
        scanf("%d",&o);
        printf("Ingrese el numero de columnas de B: \n");
        scanf("%d",&h);
    }
    
    int A[m][n];
    int B[o][h];
    int M[m][h];
    int suma;
    
    printf("===============================================\n");
    printf("Dame los elementos de A: \n");
    
    for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
            {
                scanf("%d", &A[i][j]);
            }
        }
        
    printf("===============================================\n");
    printf("Dame los elementos de B: \n");
    
    for(i=0;i<o;i++)
        {
        for(j=0;j<h;j++)
            {
                scanf("%d", &B[i][j]);
            }
        }
        
    printf("===============================================\n");
    printf("La nueva matriz M es: \n");
    
    for(i=0;i<m;i++)
        {
        for(j=0;j<h;j++)
            {
                suma=0;
                for(k=0;k<n;k++)
                {
                    suma=A[i][k]*B[k][j] + suma;
                }
                M[i][j]=suma;
            }
        }
        
    for(i=0;i<m;i++)
        {
        for(j=0;j<h;j++)
            {
                printf("M[%d][%d] = %d \n",i,j,M[i][j]);
            }
        }

    return 0;
}

