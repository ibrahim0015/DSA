// This code takes a number from the user and creates a butterfly pattern using nested loops.


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int space1= n;
    int space2=0;
    // upper part.
    for (int i=0; i<n; i++){
    for(int j=0; j<=i;j++){
        cout<<"*";    
    }
    for(int k=0;k<2*space1-2;k++){
        cout<<" ";
    }    
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
        space1=space1-1;
        cout<<endl;
}
    
    // lower part.
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        for(int k=0;k<2*space2;k++){
            cout<<" ";
        }
    for(int j=n;j>i;j--){
            cout<<"*";
        }

        space2++;
        cout<<endl;
    }
    
    
    
    
}