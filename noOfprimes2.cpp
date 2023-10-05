#include <iostream>
using namespace std;
bool toChecknoOfPrimes(int end){
    for(int j=2;j<end;j++){
     if(end%j==0){
        return false;
    }
}
return true;
}
int main(){
int start,end;
cout<<"enter the start and end no: "<<endl;
cin>>start>>end;
for(int i=start;i<end;i++){
        if(start<2){
            cout<<"enter the valid input"<<endl;
            break;
        }
       else if(toChecknoOfPrimes(i)){
            cout<<i<<" ";
        }

}
}
