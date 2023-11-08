#include<stdio.h>
int main()
{
	int p,r,t,cal=0;
     printf("Enter val of p: ");
    scanf("%d", &p);
    printf("Enter val of r: ");
    scanf("%d", &r);
    printf("Enter val of t: ");
    scanf("%d", &t);
    cal=p*r*t/100;
    printf("SI of %d,%d and %d is %d" ,p,r,t,cal);
    
	
}

