#include<iostream>
using namespace std;

void print(int n){
    // outer loop is for rows
    for(int i=1; i<=n; i++){

        // inner loop is for columns
        for(int j=1; j<=(n-i+1); j++){
            cout<<j <<" ";
        }
        cout<<endl ;
    }
}

int main(){

    int t;
    cout<<"Enter number of testcase : ";
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cout<<"Enter numner of rows : ";
        cin>>n;
        print(n);
    }
    return 0;
}