#include<stdio.h>
int main(){
int i,j,N,sum;

printf("prime numbers are= \n");

for(i=2;i<=500;i=i+1)
{
    sum=0;
for(j=1;j<=i;j=j+1)
{
    if(i%j==0)
    sum=sum+j;
}
    if(sum==i+1){
    printf("%d\n",i);
}}}
