#include<stdio.h>

int main(){
int i,girl,boy;
char gender;

girl=0;
boy=0;

for(i=1;i<=5;i=i+1)
{

printf("gender of student %d(M/F)= ", i);
scanf(" %c", &gender);

    if(gender=='F')

        girl=girl+1;


    if(gender=='M')

        boy=boy+1;


}

printf("number of girls= %d\n", girl);
printf("number of boys= %d\n", boy);

}
