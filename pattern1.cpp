# include <iostream>
using namespace std;
int main(){
    cout<<"enter the no for pattern"<<endl;
int a;
cin>>a;
int x=1;
while(x<=a){
    int y=1;
    while(y<=a){
        cout<<x;
        y=y+1;
    }
    cout<<endl;
    x=x+1;
}
}
