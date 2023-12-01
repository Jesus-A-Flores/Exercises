#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    
    cin>>n;
    int v[n][n];
    
    int num = 1;
    for (int i = 0; i < n; i++){
        int col = n-1;
        for (int j = 0; j < n; j++){
            (i%2 == 0)? v[i][j] = num: v[i][col] = num;//genera la matriz
            col--;
            num++;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}