#include<stdio.h>
int main()
{
    float pie=3.14;
    int radius;

    printf("enter the radius of circle");
    scanf("%d",&radius);

    printf("the radius of the circle is %d",radius);
    float area=(pie*radius*radius);

    printf("the area of the given circle is %f",area);
    return 0;
}
