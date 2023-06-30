
#include <iostream>

using namespace std;

int main()
{
    int n;  cin>>n;
    
    char ch = 64 + n;
    for(int i=0; i<n; i++) {
        
        for(char c = ch - i; c<=ch; c++) {
            cout<<c<<" ";
        }          
        cout<<endl;
    }
    
    return 0;
}
