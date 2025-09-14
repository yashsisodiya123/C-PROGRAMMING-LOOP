#include<stdio.h>

int main(){
int i,N,num,sum,mean;
sum=0;


printf("N=");
scanf("%d", &N);

for(i=1;i<=N;i=i+1)
{

printf("enter number %d= ", i);
scanf("%d", &num);

sum=sum+num;

}
mean=sum/N;
printf("sum= %d\n", sum);
printf("mean= %d\n", mean);

}

