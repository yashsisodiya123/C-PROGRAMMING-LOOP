#include<stdio.h>
int main(){
int i,N,sum;

printf("enter the number= ");
scanf("%d", &N);

sum=0;

for(i=1;i<N;i=i+1)
{
    if(N%i==0)
        sum=sum+i;
}
    if(sum==N)
        printf("%d is a perfect number",N);
    else
        printf("%d is not a perfect number",N);
}
