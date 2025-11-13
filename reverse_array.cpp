#include<iostream>
using namespace std;
int main(){
    int arr[5]={12,125,512,52,432};
    int size = sizeof(arr)/sizeof(int);
    int i=0;
    int j=size-1;
    
    int temp=0;
    while(i<=size/2){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++,j--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
        if (i<size-1){
            cout<<",";
        }
    }
}