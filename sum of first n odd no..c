#include<stdio.h>

int main(){
int i,N, sum;
sum=0;

printf("N= ");
scanf("%d", &N);

for(i=1;i<=2*N;i=i+2)

sum=sum+i;
printf("sum= %d\n", sum);
}
