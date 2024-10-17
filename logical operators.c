#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);

    printf("a=%d,b=%d\n",a,b);
    printf("logical AND %d\n",a%2==0 && b%5==0);
    printf("logical OR %d\n",a%2==0 || b%5==0);

    return 0;
}
