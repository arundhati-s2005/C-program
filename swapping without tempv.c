#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter two integers");
    scanf("%d %d",&num1,&num2);
    printf("%d %d\n",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("%d %d",num1,num2);
    return 0;
}
