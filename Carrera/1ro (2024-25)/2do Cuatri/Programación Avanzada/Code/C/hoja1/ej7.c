#include <stdio.h>

int main(int argc, char *argv[])
{
	int a = 5, b = 10, c = 15;

	printf("%d\n", 10 + 5*2);
	printf("%d\n", a < b == c);
	printf("%d\n", a + b != c);
	printf("%d\n", a < b && b < c || c < a);
	printf("%d\n", !(a > b) && (a+b) || (a*b) == 50);
	printf("%d\n", (a+b) > c != (a*b) < c);	

	return 0;
}
