#include <iostream>
using namespace std;
int main(){
int a;
cin>>a;
int x=1;
while(x<=a){
    int y=1;
     int no=x;
   while(y<=x){
        cout<<no;
        no=no-1;
        y=y+1;
        }
    cout<<endl;
    x=x+1;
}
}
