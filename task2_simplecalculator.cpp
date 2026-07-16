#include <iostream>
using namespace std;
int main()
{
int num1,num2;
char op;
int result;
cout<<"enter the number 1:";
cin>>num1;
cout<<"enter the number 2:";
cin>>num2;
cout<<"enter the operator(+,-,*,/):";
cin>>op;
switch(op){
case '+':
result=num1+num2;
cout<<"Result= "<<result;
break;
case '-':
result=num1-num2;
cout<<"Result= "<<result;
break;
case '*':
result=num1*num2;
cout<<"Result= "<<result;
break;
case '/':
if(num2!=0){
result=num1/num2;
cout<<"Result= "<<result;
}
else{
cout<<"division by 0 is not possible";
}
break;
default:
cout<<"invalid operator!";
}

    return 0;
}
