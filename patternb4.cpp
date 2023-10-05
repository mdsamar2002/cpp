#include<iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int num;
cin>>num;
int i=0;
for( ;i<num;i++){
    for(int j=0;j<num-i;j++){
        cout<<"*";
    }
    cout<<endl;
}





}
