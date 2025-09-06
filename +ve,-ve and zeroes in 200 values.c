#include<stdio.h>

int main(){
int i,num,negative,positive, zeroes;

positive=0;
negative=0;
zeroes=0;

for(i=1;i<=200;i=i+1)
{

printf("enter number %d= ", i);
scanf("%d", &num);

    if(num>0)

        positive=positive+1;


    if(num<0)

        negative=negative+1;

    if(num==0)

        zeroes=zeroes+1;

}

printf("positive numbers= %d\n", positive);
printf("negative numbers= %d\n", negative);
printf("zeroes= %d\n", zeroes);

}
