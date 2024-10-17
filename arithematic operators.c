#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the values of a&b");
    scanf("%d %d",&a,&b);

    int sum=a+b;
    int diff=a-b;
    int multiply=a*b;
    int divide=a/b;

    printf("a=%d,b=%d\n",a,b);
    printf("sum of a&b is %d\n",sum);
    printf("difference of a&b is %d\n",diff);
    printf("multiplication of a&b is %d\n",multiply);
    printf("division of a&b is %d\n",divide);

    return 0;
}
