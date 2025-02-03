#include <iostream>
using namespace std;


int main(){

int num,i;
int factorial =1;

cout <<"what is your number:";
cin >> num;
for(i=1;i<=num;i++){

factorial *=i;

}



cout <<"The factorial of " << num <<" is " <<factorial <<endl;



    return 0;
}