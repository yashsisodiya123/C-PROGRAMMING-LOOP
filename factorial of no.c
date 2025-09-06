#include<stdio.h>

int main(){
int i,N, factorial;
factorial=1;

printf("N= ");
scanf("%d", &N);

for(i=1;i<=N;i=i+1)

{factorial=factorial*i;
}
printf("factorial= %d\n", factorial);
}
