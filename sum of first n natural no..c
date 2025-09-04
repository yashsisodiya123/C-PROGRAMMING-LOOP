#include<stdio.h>

int main(){
int i,N, sum;
sum=0;

printf("N= ");
scanf("%d", &N);

for(i=1;i<=N;i=i+1)

sum=sum+i;
printf("sum= %d\n", sum);
}
