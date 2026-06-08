#include<iostream>
using namespace std;

void print(int n){

    for(int i=0; i<n; i++){
        for(char ch='E'-i; ch<='E'; ch++){
            cout<<ch <<" ";
        }
        cout <<endl;
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