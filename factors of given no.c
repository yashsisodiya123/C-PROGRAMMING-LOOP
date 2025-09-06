#include<stdio.h>
int main(){
int i,N;

printf("enter the number= ");
scanf("%d", &N);

printf("factors of %d = \n", N);


for(i=1;i<=N;i=i+1)
{
    if(N%i==0)
        printf("%d\n",i);
}
}
