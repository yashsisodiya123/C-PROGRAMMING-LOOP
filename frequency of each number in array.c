#include<stdio.h>
int main(){
int i,j, x[10], count;

printf("enter the elements of array:\n");
for(i=0;i<10;i++){
    scanf("%d", x[i]);}

printf("frequency of the numbers:\n");
for(i=0;i<10;i++){
    count=0;
    for(j=0;j<10;j++){
        if(x[i]=x[j]){
        count=count+1;}

        printf("number %d is %d times", x[i], count);
        }}}
