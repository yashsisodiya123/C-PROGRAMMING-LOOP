#include<stdio.h>
int main(){
int num, sum_of_digits;

sum_of_digits=0;
printf("enter the number= ");
scanf("%d", &num);

for(;num>0;num=num/10)
{
    sum_of_digits=sum_of_digits+(num%10);
}
printf("sum of digits= %d", sum_of_digits);
}
