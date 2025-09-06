#include<stdio.h>

int main(){
int num,digit;

digit=0;
printf("number= ");
scanf("%d", &num);

for(;num>0;num=num/10)
{

        digit=digit+1;

} printf("total digits are= %d", digit);
}
