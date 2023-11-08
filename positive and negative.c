#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num <1 )
        printf("%d is negative", num);
    if(num ==0 )
        printf("%d is zero", num);    
    else
        printf("%d is positive", num);
    
    return 0;
}
