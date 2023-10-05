#include <iostream>
using namespace std;
int main(){
cout<<"enter the no"<<endl;
int a;
cin>>a;
int x=1;
while(x<=a){
    int c=x;
    int y=1;
    while(y<=x){
        cout<<c;
        c=c+1;
        y=y+1;
    }
    cout<<endl;
    x=x+1;
}

}
