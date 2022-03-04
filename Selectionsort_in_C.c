#include<stdio.h>
void Selectionsort(int arr[],int size)
{
	int i,j,temp,min;
	for(i=0;i<size;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	for(i=0;i<size;i++)
	{
		printf("%d	",arr[i]);
	}
}
int main()
{
	int arr[]={5,4,2,7,1,9};
	int size;
	size=sizeof(arr)/sizeof(arr[0]);
	Selectionsort(arr,size);
	return 0;
}
