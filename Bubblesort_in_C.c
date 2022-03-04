#include<stdio.h>
#include<string.h>
void Bubblesort(int arr[],int size)
{
	int i,j,k,temp,flag=0;
	for(i=0;i<(size-1);i++)
	{
		for(j=0;j<(size-1-i);j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
	for(k=0;k<size;k++)
	{
		printf("%d	",arr[k]);
	}
}
int main()
{
	int arr[]={5,4,3,2,1};
	int size;
	size=sizeof(arr)/sizeof(arr[0]);
	Bubblesort(arr,size);
	return 0;
}
