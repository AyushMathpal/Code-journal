#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    string roworcol="";
    int index=0;
   
    
    
    for(int i=0;i<n;i++){
        int sumrow=0;
        for (int j=0;j<m;j++){
            sumrow=sumrow+arr[i][j];
        }
        
        if(sumrow>max){
            max=sumrow;
            roworcol="row";
            index=i;
        }
    }
    for(int i=0;i<m;i++){
        int sumcol=0;
        for(int j=0;j<n;j++){
            sumcol=sumcol+arr[j][i];
            
        }
        if(sumcol>max){
            max=sumcol;
            roworcol="column";
            index=i;
        }
    }
    cout<<roworcol<<" "<<index<<" "<<max;
    
    
    
    
    return 0;
}
