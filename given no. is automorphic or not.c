#include<stdio.h>
int main(){
int i,N,num,sqr;

printf("enter the number= ");
scanf("%d", &N);

num=N;
sqr=N*N;

for(;num>0;num=num/10,sqr=sqr/10)
{   if((num%10)!=(sqr%10))
        {printf("%d is not an automorphic number",N);
        return 0;}

}
        printf("%d is an automorphic number", N);
}
