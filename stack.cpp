
#include <bits/stdc++.h>

using namespace std;
//using map saving occurance count

int main() {
    
    int n , i , a;
    cin>>n;
   // string str;
    stack <int> st;
    for ( i = 0 ; i < n ; i++){
        cin>>a;
        st.push(a);
    }
    while( !st.empty()){
        cout<< st.top() << " ";
        st.pop();
        
    }
    

    
    return 0;
}
