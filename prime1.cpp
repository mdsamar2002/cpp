#include <iostream>
using namespace std;
int main(){
int no1,no2;
char ch,bit;
cout<<"enter the value of no1"<<endl;
cin>>no1;
cout<<"enter the value of no2"<<endl;
cin>>no2;
cout<<"enter the operation of no1 and no2"<<endl;
cin>>ch;
switch(ch){
       case '+':cout<<"the value of "<<no1<<" + "<<no2<<" is "<<no1+no2<<endl;
                break;
       case '-':cout<<"the value of "<<no1<<" - "<<no2<<" is "<<no1-no2<<endl;
                break;
       case '*':cout<<"the value of "<<no1<<" * "<<no2<<" is "<<no1*no2<<endl;
                break;
       case '/':cout<<"the value of "<<no1<<" / "<<no2<<" is "<<no1/no2<<endl;
                break;
       case '%':cout<<"the value of "<<no1<<" % "<<no2<<" is "<<no1%no2<<endl;
                break;

       default :cout<<"enter the valid operation"<<endl;
       }
}
