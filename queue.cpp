
#include <bits/stdc++.h>

using namespace std;
//using map saving occurance count

int main() {
    
    int n , i , a;
    cin>>n;
    // string str;
    queue <int> q;
   
   
   for ( i = 0 ; i < n  ; i++){
       cin>>a;
       q.push(a);
       
   }
   while(!q.empty()){
       cout<<q.front() <<"  ";
       q.pop();
   }

    
    return 0;
}
