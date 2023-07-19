#include<stdio.h>
#include<math.h>

int main()
{
	long double  a,b;

	printf("Write temperature in Celcius: ");
	scanf("%Lf",&a);

	b = (a*1.8+32);

	printf("Temperature in Fahrenheit is: %0.3Lf\n",b);

	return 0;
}
