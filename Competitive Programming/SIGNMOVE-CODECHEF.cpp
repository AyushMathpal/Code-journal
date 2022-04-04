#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int pos=0;
	    if(n%2!=0){
    	    for(int i=1;i<=n;i=i+2){
    	        pos--;
    	    }
	    }
	    else if(n%2==0){
	        for(int i=2;i<=n;i=i+2){
    	        pos++;
    	    }
	    }
	    cout<<pos<<endl;
	    
	}
	return 0;
}
