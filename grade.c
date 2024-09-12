#include <stdio.h>
int main()
{
	char grade = 'D';

	switch (grade)
	{
		case 'A':
			printf("Excellent\n");
			break;

		case 'B':
			printf("Good\n");
			break;

		case 'C':
			printf("Fair\n");
			break;

		case 'D':
			printf("Poor\n");
			break;
			
		case 'F':
			printf("Fail\n");
			break;

	}
	return 0;

}	
