#include<stdio.h>

int main(){
int i,num,largest, smallest;

printf("enter number 1= ");
scanf("%d", &num);

largest=num;
smallest=num;

for(i=2;i<=100;i=i+1)
{

printf("enter number %d= ", i);
scanf("%d", &num);

    if(num>largest)
    {
        largest=num;
    }

    if(num<smallest)
    {
        smallest=num;
    }
}

printf("largest= %d\n", largest);
printf("smallest= %d\n", smallest);

}
