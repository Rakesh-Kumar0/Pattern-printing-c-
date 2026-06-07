#include<iostream>
using namespace std;

// void print(int n){
//     for(int i=1; i<=n; i++){
//         int start = 65;
//         for(int j=1; j<=i; j++){
//             cout<<char(start) <<" ";
//             start += 1;
//         }
//         cout<<endl;
//     }
// }

void print(int n){
    for(int i=0; i<n; i++){
        for(char ch = 'A'; ch<='A'+i; ch++){
            cout<<ch <<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cout<< "Enter number of testcases : ";
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cout<<"Enter number of rows : ";
        cin>>n;
        print(n);
    }
    return 0;
}