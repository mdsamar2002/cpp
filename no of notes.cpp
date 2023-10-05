#include<iostream>
using namespace std;
int main(){
int cash,value;
cin>>cash;
switch(1){
     case 1:cout<<"the no 100rs note required is "<<cash/100<<endl;
             value=cash%100;
     case 2:cout<<"the no 50rs note required is "<<value/50<<endl;
             value=value%50;
     case 3:cout<<"the no 10rs note required is "<<value/10<<endl;
             value=value%10;
     case 4:cout<<"the no 1rs note required is "<<value/1<<endl;

}

}
