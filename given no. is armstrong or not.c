#include<stdio.h>
int main(){
int num,digit,original,sum_of_cube_of_digits;

printf("enter the number= ");
scanf("%d", &num);

original=num;
sum_of_cube_of_digits=0;

for(;num>0;num=num/10)
{
    digit=num%10;

    sum_of_cube_of_digits=sum_of_cube_of_digits+(digit*digit*digit);

}
    if(original==sum_of_cube_of_digits)
        printf("%d is an armstrong number", sum_of_cube_of_digits);
    else
        printf("%d is not an armstrong number", sum_of_cube_of_digits);
}
