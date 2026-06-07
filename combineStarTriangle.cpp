#include<iostream>
using namespace std;

void print1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<"*" <<" ";
        }
        cout<<endl;
    }
}

void print2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i); j++){
            cout<<"*" <<" ";
        }
        cout<<endl ;
    }
}

int main(){

    int t;
    cout<<"Enter number of testcase : ";
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cout<<"Enter number of rows : ";
        cin>>n;
        print1(n);
        print2(n);
    }
    return 0;
}