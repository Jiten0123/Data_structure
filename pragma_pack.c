#include<stdio.h>
#pragma pack(1)
struct abc{
	char a;
	int b;
	char c;
};
int main()
{
	printf("%d",sizeof(struct abc));
}
