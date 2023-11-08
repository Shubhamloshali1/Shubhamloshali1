#include<stdio.h>	
void main()
{
	int x=6783,rev,rem;
	for(rev=0,rem=0;x>0;)
	{
		rem=x%10;
		rev=rev*10+rem;
		x=x/10;
	}
		printf("reverse of digits are=%d",rev);
		
}

