#include<stdio.h>
int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	long long int longlongintType;
	char charType;

	/* sizeof evaluates the size of a variable */
	printf("Size of a char: %ld bytes\n", sizeof(charType));
	printf("Size of an int: %ld bytes\n", sizeof(intType));
	printf("Size of a long int: %ld bytes\n", sizeof(longintType));
	printf("Size of a long long int: %ld byte\n", sizeof(longlongintType));
	printf("Size of a float: %ld bytes\n", sizeof(floatType));
	return (0);
}
