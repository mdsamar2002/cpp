#include<iostream>
using namespace std;
int main(){
int a,b;

cout<<"enter the first no"<<endl;
cin>>a;
cout<<"enter the second no"<<endl;
cin>>b;
cout<<"enter the operation"<<endl;
char ch;
cin>>ch;

switch(ch){

    case '+':cout<<a+b<<endl;
    break;
    case '-':cout<<a-b<<endl;
    break;
    case '*':cout<<a*b<<endl;
    break;
    case '/':cout<<a/b<<endl;
    break;
    case '%':cout<<a%b<<endl;
    break;
     default:cout<<"enter a valid operation"<<endl;
     break;
}
}
