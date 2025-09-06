#include<stdio.h>
int main(){
int num;

printf("enter the number= ");
scanf("%d", &num);

printf("reverse digits of number= ");

for(;num>0;num=num/10)
{
    printf("%d",num%10);
}
}
