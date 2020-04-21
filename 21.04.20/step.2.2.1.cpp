#include <iostream>

using namespace std;

void rect()
{
    int a=0;
    cin >> a;
    if ( a ==0 ) return;
    rect();
    cout << a << " ";
   
}

int main()
{
    rect();
	return 0;
}