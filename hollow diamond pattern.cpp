#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"enter value of n: ";
    cin>>n;
     
  
    for(int i=0;i<n;i++){
        for(int j=n-1; j>i; j--){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            for(int k=0; k<i*2-1; k++){
                cout<<" ";
                
            }}
            if(i!=0){cout<<"*";}
            cout<<endl;
        }
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        cout<<"*";
        
        if(i!=n-2){
        for(int k=0;k<2*(n-2-i)-1;k++){
            cout<<" ";
        }
        cout<<"*";
    }
           
     
        cout<<endl;
    }

  

    return 0;
}