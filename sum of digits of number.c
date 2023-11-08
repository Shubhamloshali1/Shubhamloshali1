#include<stdio.h>
void main()
{
	int x=6783,sum=0,rem=0;
	for(sum=0,rem=0;x>0;x=x/10)
	{
		rem=x%10;
		sum=sum+rem;
	}
	
		printf("sum of digits are=%d",sum);
}

