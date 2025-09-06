#include<stdio.h>

int main(){
int num;

printf("number= ");
scanf("%d", &num);

printf("digits are= ");


for(;num>0;num=num/10)
{
    printf("%d.", num%10);

}}
