#include<stdio.h>
int main()
{
    int i,sum=0,avg;
    int sub_u1[5];
    for(i=0;i<5;i++)
{
    printf("enter the marks of the subject");
    scanf("%d",&sub_u1[i]);
}
printf("PPS marks:%d\n",sub_u1[0]);
printf("POE marks:%d\n",sub_u1[1]);
printf("Maths marks:%d\n",sub_u1[2]);
printf("Biology marks:%d\n",sub_u1[3]);
printf("Chemistry marks:%d\n",sub_u1[4]);

for(i=0;i<5;i++){
    sum=sum+sub_u1[i];
    avg=sum/5;
}
printf("the sum of the entered marks is=%d\n",sum);
printf("the average of the entered marks is=%d",avg);
return 0;
}
