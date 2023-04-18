// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int power(int n){
    
    //base case 
    if(n==0){
        return 1;  
    }
    int smallproblem = power(n-1);
    int bigproblem = 2* smallproblem;
    
    return bigproblem;
    
    
    
}

int main() {
    int n ;
    cin>>n ;
    int ans = power(n);
    cout<<ans<<endl;
    

    return 0;
}
