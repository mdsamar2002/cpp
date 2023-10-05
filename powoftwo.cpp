#include<iostream>
#include<math.h>
using namespace std;
int main(){
cout << "enter the no"<<endl;
int n;
cin>>n;
for(int i=0;i<=31;i++){
    int ans=pow(2,i);

if(ans==n){
    cout<<"true"<<endl;
    break;
    }
    else{
        cout<<"false"<<endl;

    }

}



}






