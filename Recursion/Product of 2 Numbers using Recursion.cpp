#include <iostream>
using namespace std;
int Product(int x,int y,int prod,int cnt){
    if(cnt==y){
        
        return prod;
    }
    prod=prod+Product(x,y,prod,cnt+1);
    
    return x+prod ;
}
int main()
{
 int x,y;
 cin>>x>>y;
 cout<<Product(x,y,0,0);
    return 0;
}
