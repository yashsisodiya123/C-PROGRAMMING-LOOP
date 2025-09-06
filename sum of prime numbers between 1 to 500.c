#include<stdio.h>
int main(){
int i,j,N,sum, sum_of_prime_numbers;

printf("sum of prime numbers is= ");

sum_of_prime_numbers=0;

for(i=2;i<=500;i=i+1)
{
    sum=0;

for(j=1;j<=i;j=j+1)
{

    if(i%j==0)
    sum=sum+j;
}
    if(sum==1+i)
    sum_of_prime_numbers=sum_of_prime_numbers+i;
}

    printf("%d", sum_of_prime_numbers);
}
