#include <stdio.h>

/**
 * main - Entry point
 * code by KAMBALE NDULANI SAGESSE
 *
 * Return:0
*/
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(f));
}
