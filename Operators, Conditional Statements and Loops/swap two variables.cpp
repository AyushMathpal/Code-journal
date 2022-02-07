//USING THIRD VARIABLE
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    int c=a;
    a=b;
    b=c;
    
    cout<<a<<" "<<b;
    return 0;
}


//WITHOUT USING THIRD VARIABLE-METHOD 2
#include<iostream>

using namespace std;

int main(){
	
	int a,b;
	cin >> a >> b;

	a = a + b;
	b = a - b;
	a = a - b;
	cout << a << " " << b ;
	return 0;
}
