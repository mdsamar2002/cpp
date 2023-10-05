#include<iostream>
using namespace std;
bool isprime(int a){

     for(int i=2;i<a;i++){
        if (a%i==0){
            return 0;
        }
    }
    return 1;
}


int main(){

    int a;
    cin>>a;
    if(isprime(a)){
   cout<<"is prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }



}
