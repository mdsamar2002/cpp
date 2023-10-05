#include <iostream>
using namespace std;
int main(){
    cout<<"enter the no"<<endl;
    int a;
    cin>>a;
    int b=0;
    int sum=0;
    while(b <= a){
            sum=sum+b;
        b=b+2;
    }
    cout<< sum <<endl;
}
