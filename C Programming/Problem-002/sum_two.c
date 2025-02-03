#include <stdio.h>

int main(){

int numOne;
int numTwo;

printf("what is your first number ? :");
scanf("%d",&numOne);
printf("what is your second number ? :");
scanf("%d",&numTwo);

int sum = numOne + numTwo;
printf("Your sum is : %d \n",sum);



    return 0;
}