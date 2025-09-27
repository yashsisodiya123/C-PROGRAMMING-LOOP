#include<stdio.h>

int main(){
float i,num,sum,mean;
sum=0;

for(i=1;i<=10;i=i+1)
{

printf("enter number %.f= ", i);
scanf("%f", &num);

sum=sum+num;

}
mean=sum/10;
printf("sum= %.2f\n", sum);
printf("mean= %.2f\n", mean);

}


