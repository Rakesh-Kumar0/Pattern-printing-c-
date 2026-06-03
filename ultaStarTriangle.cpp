#include<iostream>
using namespace std;

void print(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i); j++){
            cout << "*" << " ";
        }
        cout <<endl ;
    }
}

int main(){
    int t;
    cout << "Enter testcase : ";
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cout << "Enter number of rows : ";
        cin >> n;
        print(n);
    }
    return 0;
}