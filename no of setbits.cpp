#include <iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int n;
int no=0;
cin>>n;
while(n!=0){
        if(n&1){
     no++;
  }
  n=n>>1;
}
cout<<no<<endl;
}
