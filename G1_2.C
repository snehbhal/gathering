#include<stdio.h>

sum(int num[])
{
	int i,sum=0;
	for(i=0;i<=9;i++)
	{
		sum=sum+num[i];
	}
	return sum;
}
main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,0};
	sum(arr);
	printf("Sum of array elements is :%d",sum(arr));
}
