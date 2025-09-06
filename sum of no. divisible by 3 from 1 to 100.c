#include<stdio.h>

int main(){
int i, sum;

sum=0;

for(i=3;i<=100;i=i+3)
{
sum=sum+i;
}
printf("sum of nos. divisible by 3 from 1 to 100= %d", sum);
}
