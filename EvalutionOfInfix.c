#include<stdio.h>
void main()
{
    int a,b;
    char op;
    printf("\nEnter the 1st number:");      // Taking input
    scanf("%d",&a);
    printf("\nEnter the operation to perform:");        // Taking input
    scanf(" %c",&op);
    printf("\nEnter the 2nd number:");      // Taking input
    scanf("%d",&b);
    switch(op) // solving based on operator
    {
        case '+': printf("\nAnswer is:%d",a+b);break;   // ifoperation to be performed is +
        case '-': printf("\nAnswer is:%d",a-b);break;   // ifoperation to be performed is -
        case '*': printf("\nAnswer is:%d",a*b);break;   // ifoperation to be performed is *
        case '/': printf("\nAnswer is:%d",a/b);break;   // ifoperation to be performed is /
        default: printf("\n Invalid operator...."); break;
    }
}
