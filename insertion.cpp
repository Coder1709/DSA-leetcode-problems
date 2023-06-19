
//left to right sorting


#include <bits/stdc++.h>
using namespace std;

// Bubble Sort - ascending order - Right to left
void Insertion( vector < int>& v);


int main() {
    int n ;
    cin>>n;
    vector < int> v(n);
    
    for(int i = 0 ; i < n ; i++){
        cin>> v[i];
    }
    
    Insertion(v);
    
    // for(int a : v){
        
    //     cout<<a<<" ";
        
    // }
    // return 0 ;
}

void Insertion( vector < int>& v){
    int n = v.size();
     
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    

        for (int a : v){
            cout<<a<<"  ";
            
        }
        cout<<endl;
             
    }     
    
}
