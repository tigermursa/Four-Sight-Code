#include <stdio.h>

int main( ){

char name [20];

printf("What should I call you?:");
  
fgets(name,sizeof(name),stdin);
printf("Hello  %s , How you doing today? \n",name);

return 0;
}