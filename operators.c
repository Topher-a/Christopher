#include <stdio.h>
int main()
{
	int a =15;
	int b =10;

	int sum = a + b;
	int subtraction = a - b;
	int multiplication = a * b;
	double division = a / b;
	int modulus = a % b;
	
	printf("the sum of %d and %d is %d\n, the subtraction of %d and %d is %d\n, the multiplication of %d and %d is %d\n, the division of %d and %d is %.1f\n, the modulus of %d and %d is %d\n",a,b,sum,a,b,subtraction,a,b,multiplication,a,b,division,a,b,modulus);

return 0;
}

