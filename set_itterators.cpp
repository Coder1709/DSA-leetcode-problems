// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;


int main() {
    int n,i ,a;
    cin>>n;
    
    set <int> s;
    set <int> :: iterator it;
    for ( i = 0 ; i < n ; i++){
        
        cin>>a;
        
        s.insert(a);
        
        
    }
    
    for( it = s.begin() ; it!= s.end() ;it++){
        cout<<*(it)<< " ";
    }
    

    return 0;
}
