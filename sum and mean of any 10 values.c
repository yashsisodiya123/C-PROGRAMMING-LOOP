#include<stdio.h>

int main(){
int i,num,sum,mean;
sum=0;

for(i=1;i<=10;i=i+1)
{

printf("enter number %d= ", i);
scanf("%d", &num);

sum=sum+num;
mean=sum/10;
}

printf("sum= %d\n", sum);
printf("mean= %d\n", mean);

}
