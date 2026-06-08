#include<iostream>

using namespace std;

void print(int n){
    // Outer loop for rows
        for (int i = 0; i < n; i++) {
            // Inner loop for columns
            for (int j = 0; j < n; j++) {
                // Print star if it's a border cell
                if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                    cout << "*";
                // Print space otherwise
                else
                    cout << " ";
            }
            // Move to next line after each row
            cout << endl;
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