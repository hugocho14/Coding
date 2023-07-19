#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	
	int a,b;
	float c;
	char op;
	
	do
	{
		system("cls");
		printf("\n\t Promedio de 5 numeros \n\t");
	
		for(a=1;a<=5;a=a+1)
		{
			printf("\n\t Introduce el numero: ");
			scanf("%d",&b);
		
			c=c+b;
		}
	
		printf("\n\t El promedio es: %0.2f",c/5);
		printf("\n\t \n\t Sacar promedio de nuevo, presiona tecla S: ");
		
		op=getche();
	}
	while ((op=='s') || (op=='S'));
	
	getch();	
}
