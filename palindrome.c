#include<stdio.h>
void main()
{
	int x=123321,pal,rem,temp;
	temp=x;
	for(pal=0,rem=0;x>0;)
	{
		rem=x%10;
		pal=pal*10+rem;
		x=x/10;`
	}
	 if (temp==pal)
		printf("palindrome");
	else
		printf("not palindrome");	
}

