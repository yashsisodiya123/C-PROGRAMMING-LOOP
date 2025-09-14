#include<stdio.h>
int main(){
int i,N,a,b,temp;

printf("enter number of terms= ");
scanf("%d", &N);

printf("fibonacci sequnce= ");

a=0;
b=1;
for(i=1;i<=N;i=i+1)
{   printf("%d,", a);
    temp=a+b;
    a=b;
    b=temp;
}
}

