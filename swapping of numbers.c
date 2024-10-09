#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter two integers");
    scanf("%d %d",&a,&b);

    printf("swapping using temporary variable");
    printf("before swap A=%d B%d\n",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swap A=%d, B=%d",a,b);
    return 0;
}
