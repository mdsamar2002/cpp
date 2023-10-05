#include<iostream>
using namespace std;

void rearrangeBySign(int arr[], int size) {
    int pos[size/2];
    int neg[size/2];
       int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            neg[j]=arr[i];
            j++;
        }
    }
    int k=0;
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            pos[k]=arr[i];
            k++;
        }
    }
    int m=0,n=0;
    for(int i=0;i<size;i++){
            if(i%2==0){
                 arr[i]=pos[m];
                 m++;
            }

        else{
            arr[i]=neg[n];
            n++;
    }
}
}

int main() {
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, 8};
    int size = 8;
    rearrangeBySign(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
