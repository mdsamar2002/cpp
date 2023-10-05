#include <iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int n;
cin>>n;
int a=0;
int b=1;
cout<<a<<endl<<b<<endl;
for(int c=1;c<=n;c++){
        int next=a+b;
        cout<<next<<endl;
        a=b;
        b=next;

}


}
