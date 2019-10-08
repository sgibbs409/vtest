#include <stdio.h>

void myfunc(int);

void myfunc(int arg){
	printf("arg = %d\n", arg);
	return;
}


int main(int argc, char** argv)
{
	int x;
	printf("The value of x is: %ld\n", (long)x);
	printf("At address       : %p\n", &x);
	myfunc(43);
	
	return 0;

}
