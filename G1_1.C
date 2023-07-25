#include<stdio.h>
{
	if(num<=0)
	{
		return 1;
	}
	else 
	{
		num=num*fact(num-1);
	}
	return num;
}

main()
{
	int n;
	printf("Enter value of n:");
	scanf("%d",&n);

	fact(n);
	printf("%d!=%d",n,fact(n));

}
