#include<iostream>

using namespace std;

// function to print triangleStar
void print(int n){
    // outer loop for rows
    for(int i = 0; i < n; i++){
        // inner loop for columns
        for(int j = 0; j <= i; j++){
            cout << "*" << " " ;
        }
        cout << endl ;
    }
}

int main(){
    int t;
    cout << "Enter testcase : " ;
    cin >> t ;
    for(int i = 0; i < t; i++){
        int n;
        cout << "Enter number rows :" ;
        cin >> n ;
        print(n); // function calling
    }
    return 0;
}