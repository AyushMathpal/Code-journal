#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    long arr1[n];
   
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    long m;
    cin>>m;
    long arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    long ans[n+m];
    for(int i=0;i<n+m;i++){
        if(i<n){
            ans[i]=arr1[i];
        }
        else if(i>=n){
            ans[i]=arr2[i-n];
        }
    }
    sort(ans,ans+n+m);
    for(int i=0;i<n+m;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
