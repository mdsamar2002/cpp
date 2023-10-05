#include<iostream>
using namespace std;
int main(){
    cout<<"enter the no"<<endl;
    int n;
    cin>>n;
    int no=0;
    while(n!=0){
       if(n&1){
        no++;

    }
       n = n>>1;
}
cout<<no<<endl;


}
