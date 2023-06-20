
#include <bits/stdc++.h>

using namespace std;
//using map saving occurance count

int main() {
    
    int n , i , a;
    cin>>n;
   // string str;
    stack <int> st1;
    stack <int> st2;
    for ( i = 0 ; i < n ; i++){
        cin>>a;
        st1.push(a);
    }
    while( !st1.empty()){
        st2.push(st1.top());
        st1.pop();
        
    }
    
    while( !st2.empty()){
        cout<<st2.top()<<endl;
        st2.pop();
    }
    

    
    return 0;
}
