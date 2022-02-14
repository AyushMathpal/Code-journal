#include <bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        
    }
    
    
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum=sum+arr[j][i];
        }
        cout<<sum<<" ";
    }
    return 0;
    
}
