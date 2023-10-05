#include <iostream>
using namespace std;
int main(){
cout<<"enter"<<endl;
int a;
cin>>a;
for(int x=1;x<=a;x++){
        int no=1;
    for(int y=1;y<=a-x+1;y++){
        cout<<no;
        no++;
    }
    for(int z=1;z<x;z++){
       cout<< "*" ;
    }
    for(int d=1;d<x;d++){

        cout<<"*";
    }
    int m=1;
    int e=a-m+1;
   for(int f=a+1;f<=a+a-m+1; f=f+1){
        cout<<e;
        e=e-1;
       }
   cout<<endl;
}


}

