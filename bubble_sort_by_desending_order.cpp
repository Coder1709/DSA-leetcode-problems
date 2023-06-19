
//right to left descending order''




#include <bits/stdc++.h>
using namespace std;

// Bubble Sort - ascending order - Right to left
void Bubble_sort( vector < int>& v);


int main() {
    int n ;
    cin>>n;
    vector < int> v(n);
    
    for(int i = 0 ; i < n ; i++){
        cin>> v[i];
    }
    
    Bubble_sort(v);
    
    for(int a : v){
        
        cout<<a<<" ";
        
    }
    return 0 ;
}

void Bubble_sort( vector < int>& v){
    int n = v.size();

    int i, j, temp;  
    for(i = 0; i < n; i++)    
    {    
      for(j = n-1; j > i ; j--)    
        {    
            if(v[j] > v[i])    
            {    
                temp = v[i];    
                v[i] = v[j];    
                v[j] = temp;     
            }     
        }     
    }     
    
}
