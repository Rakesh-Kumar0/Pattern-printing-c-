#include<iostream>

using namespace std;

int main(){

    int n ;
    cout << "Enter number of rows or cloumns : " ;
    cin >> n ;
    // outer loop is for rows
    for(int i = 0; i < n; i++){
        // inner loop is for columns
        for(int j = 0; j < n; j++){
            cout << "*" << " " ;
        }
        cout << endl ;
    }
    return 0;
}