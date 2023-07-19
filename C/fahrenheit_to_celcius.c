#include<stdio.h>
#include<math.h>

int main()
{
	long double  a,b;

	printf("Write temperature in Fahrenheit: ");
	scanf("%Lf",&a);

	b = ((a-32)/1.8);

	printf("Temperature in Celcius is: %0.3Lf\n",b);

	return 0;
}
