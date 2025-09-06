#include<stdio.h>
int main(){
int i,N,sum;

printf("enter the number= ");
scanf("%d", &N);

sum=0;

for(i=1;i<=N;i=i+1)
{
    if(N%i==0)
        sum=sum+i;
}
    if(sum==N+1)
        printf("%d is a prime number",N);
    else
        printf("%d is not a prime number",N);
}
