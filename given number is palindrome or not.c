#include<stdio.h>
int main(){
int num, original,digit, reversed;

printf("enter the number= ");
scanf("%d", &num);

original=num;
reversed=0;

for(;num>0;num=num/10)
{
    digit=num%10;

    reversed=reversed*10+digit;
}
    if(original==reversed)
        printf("%d is a palindrome number", reversed);
    else
        printf("%d is not a palindrome number", reversed);
}
