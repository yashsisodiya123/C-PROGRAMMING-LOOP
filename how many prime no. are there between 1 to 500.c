#include<stdio.h>
int main(){
int i,j,N,sum,prime_numbers;

printf("no. of prime numbers is= ");

prime_numbers=0;

for(i=2;i<=500;i=i+1)
{
    sum=0;

for(j=1;j<=i;j=j+1)
{

    if(i%j==0)
    sum=sum+j;
}
    if(sum==1+i)
    prime_numbers=prime_numbers+1;
}

    printf("%d", prime_numbers);
}
