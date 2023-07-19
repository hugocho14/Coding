#include <stdio.h>

int main()
{
    int i;
    int n;
    int e;
    
    
    
    do{
    	
    	printf("================================================= \n");
    	printf("Suma de dos vectores (A+B=C) en N dimensiones. \nIntroduzca la dimension de sus vectores: ");
    	scanf("%d",&n);
    
   		float A[n];
    	float B[n];
    	float C[n];
    
    	printf("Introduzca las coordenadas de A: \n");
    
    	for(i=0;i<n;i++)
    	{
    	    scanf("%f", &A[i]);
    	}

    	printf("Introduzca la coordenadas de B: \n");

    	for(i=0;i<n;i++)
    	{
    	    scanf("%f", &B[i]);
    	}
    
    	for(i=0;i<n;i++)
    	{
        	C[i]=A[i]+B[i];
    	}
    
    	printf("La suma de A+B es: \n");
    
    	for(i=0;i<n;i++)
    	{
        	printf("%f \n",C[i]);
    	}
    	
    	printf("================================================= \n");
    	
    	printf("Quiere continuar? Si quiere salir escriba 0, si quiere quedarse escriba cualquier numero, oprima enter: ");
    	scanf("%d",&e);
    	
    }
    while(e!=0);
    
    printf("================================================= \n");

    return 0;
}
