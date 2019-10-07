#include <stdio.h>

int main(int argc, char** argv)
{
	int x;
	printf("The value of x is: %ld\n", (long)x);
	printf("At address       : %p\n", &x);

	return 0;

}
