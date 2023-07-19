#include<stdio.h>
#include<math.h>

int main()
{
	
      float a,b,pi=3.1416;
	printf("Write circle radius: ");
	scanf("%f",&a);

	b = pi * pow(a,2);

	printf("The area of the circle is: %0.3f\n",b);

	return 0;
}
