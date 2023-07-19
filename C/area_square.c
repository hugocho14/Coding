#include<stdio.h>
#include<math.h>

int main()
{
	long double  a,b;

	printf("Write the lenght of the side square: ");
	scanf("%Lf",&a);

	b = a * a;

	printf("The area of the square is: %0.3Lf\n",b);

	return 0;
}
