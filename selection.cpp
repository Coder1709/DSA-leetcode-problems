
//left to right sorting


#include <bits/stdc++.h>
using namespace std;

// Bubble Sort - ascending order - Right to left
void Selection( vector < int>& v);


int main() {
    int n ;
    cin>>n;
    vector < int> v(n);
    
    for(int i = 0 ; i < n ; i++){
        cin>> v[i];
    }
    
    Selection(v);
    
    for(int a : v){
        
        cout<<a<<" ";
        
    }
    return 0 ;
}

void Selection( vector < int>& v){
    int n = v.size();

    int i, j ;  
    for(i = 0; i < n-1; i++)    
    {

        int index = i;

        for(j = i+1 ; j < n ; j++){

            if ( v[j]  < v[index]){
                index = j;

            }
        }

        if ( i != index ){
            swap( v[i] , v[index]);
        }

        for (int a : v){
            cout<<a<<"  ";
            
        }
        cout<<endl;
             
    }     
    
}
