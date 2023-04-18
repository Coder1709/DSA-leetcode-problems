// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void reachHome(int src, int dest){
    
    cout<<"source"<<src<<"des"<<dest<<endl;
    //base case
    
    if(src == dest){
        cout<<"done";
        return;
    }
    reachHome(src+1 ,dest);
}


int main() {
    
    int dest = 10;
    int src = 1;
    reachHome(src,dest);

    return 0;
}
