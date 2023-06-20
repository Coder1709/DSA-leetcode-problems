
#include <bits/stdc++.h>

using namespace std;
//using map saving occurance count

int main() {
    
    int n , i , a;
    //cin>>n;
    string str;
    
    cin>>str;
    map < char , int > mp;
    
    for(i = 0 ; i < str.length() ; i++){
        
        
        mp[str[i]]++;
        
        
    }
    
    for(pair <char , int > p:mp){
        cout<<p.first <<" "<<p.second<<endl;
        
        
        
    }

    
    return 0;
}
