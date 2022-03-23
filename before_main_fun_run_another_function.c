#include<stdio.h>
int fun1();
int __attribute__((constructor)) fun1();
int main()
{
	printf("main function\n");
}
int fun1()
{
	printf("Before\n");
	return 0;
}
