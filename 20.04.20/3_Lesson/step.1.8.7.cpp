#include <iostream>

using namespace std;

int getLog(int a)
{
    int p = 0;
    int s = 1;
    while (s <= a) 
    {
        s *= 2;
        p++;
    }
    
    return --p;
}

int main()
{
    int t = 0;
    int a = 1;   
   
    cin >> t;
    
    for (int i = 0; i < t; i++) 
    {
        cin >> a;
        cout << getLog(a) << endl;        
    }
  
  return 0;
}


