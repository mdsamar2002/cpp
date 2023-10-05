#include<iostream>
using namespace std;
int main(){
cout<<"enter the no of sides"<<endl;
int sides;
cin>>sides;
if(sides==5){
    cout<<"this is pentagone"<<endl;
}
else if(sides==4){
    cout<<"this is rectangle"<<endl;
    }
    else if(sides==3){
        cout<<"this is triangle"<<endl;
    }
    else{
        cout<<"i don't know"<<endl;
    }
}
