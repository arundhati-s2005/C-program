#include<stdio.h>
int main()
{
    int i;
    printf("enter the value of i");
    scanf("%d",&i);

    printf("%d\n",i++);
    printf("%d\n",++i);
    printf("%d\n",i--);
    printf("%d\n",--i);

    return 0;
}
