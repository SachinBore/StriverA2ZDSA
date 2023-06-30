
#include <iostream>

using namespace std;

int main()
{
    int n;  cin>>n;
    
    int spaces = 2*n-2;
    for(int i=0; i<n; i++) {
            
        // stars
        for(int j=0; j<=i; j++) {
            cout<<"*";
        }
            
        // spaces
        for(int j=0; j<spaces; j++) {
            cout<<" ";
        }
            
        // stars
        for(int j=0; j<=i; j++) {
            cout<<"*";
        }
            
        spaces -= 2;
        cout<<endl;
    }
        
    spaces = 2;
    for(int i=0; i<n-1; i++) {
            
        // stars
        for(int j=0; j<n-1-i; j++) {
            cout<<"*";
            }
            
        // spaces
        for(int j=0; j<spaces; j++) {
            cout<<" ";
        }
            
        // stars
        for(int j=0; j<n-1-i; j++) {
            cout<<"*";
        }
            
        spaces += 2;
        cout<<endl;
    }
    
    return 0;
}
