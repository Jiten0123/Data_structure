#include<stdio.h>
int fun1();
int __attribute__((destructor)) fun1();
int main()
{
	printf("main function\n");
	return 0;
}
int fun1()
{
	printf("After\n");
	return 0;
}
