#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (void)
{
	
	int a,b,c;
	
	printf("\n\t Buenos d%cas, le dibujaremos un rect%cngulo o cuadrado \n\t",161,160);
	printf("\n\t Introduzca un n%cmero que ser%c la altura",163,160);
	scanf("%d",&a);
	printf("\n\t Introduzca un n%cmero que ser%c la anchura",163,160);
	scanf("%d",&b);

	for(c=1;c<=a;c=c+1)
	{
		printf("*");
	}
	
	for(c=1;c<=b;c=c+1)
	{
		printf("\n\t*");
	}

	getch();
	
}
