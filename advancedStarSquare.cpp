#include<iostream>
using namespace std;

void print(int n){
    int space = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i); j++){
            cout <<"*";
        }
         for(int j=0; j<space; j++){
            cout <<" ";
            
        }
         for(int j=0; j<(n-i); j++){
            cout <<"*";
        }
        cout<<endl;
        space += 2;
    }

    space = 8;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        space -= 2;
        cout<<endl;
    }
}

int main(){

    int t;
    cout<<"Enter number of testcases : ";
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cout<<"Enter number of rows : ";
        cin>>n;
        print(n);
    }
    return 0;
}