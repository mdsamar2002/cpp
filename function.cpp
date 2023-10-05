#include<iostream>
using namespace std;
bool iseven(int a){
    if(a%2==0){
        return 1;
    }
        else{
            return 0;
        }
}

int main(){

int a;
cin>>a;
 if (iseven(a)){
cout<<"the no is even"<<endl;
}
else{
    cout<<"the no is odd"<<endl;
}

}
