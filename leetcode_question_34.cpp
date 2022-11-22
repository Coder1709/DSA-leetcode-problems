#include <iostream>
using namespace std;
int first(int arr[], int size , int key){

    int s = 0 ; 
    int e = size-1;
    int mid = s + ( e-s)/2;
    int ans = -1;
    while(s<=e){
        if (arr[mid] == key){
            ans = mid;
            e = mid -1;//for checking if there is same number prior to this

        }

        else if ( key > arr[mid]){
            s=mid+1;

        }

        else if ( key < arr[mid]){
            e= mid -1;

        }
        mid = s + ( e-s)/2;
    }
    return ans;
}

int last(int arr[], int size , int key){

    int s = 0 ; 
    int e = size-1;
    int mid = s + ( e-s)/2;
    int ans = -1;
    while(s<=e){
        if (arr[mid] == key){
            ans = mid;
            e = mid +1;//for checking if there is same number prior to this

        }

        else if ( key > arr[mid]){
            s=mid+1;

        }

        else if ( key < arr[mid]){
            e= mid -1;

        }
        mid = s + ( e-s)/2;
    }
    return ans;
}



int main(){


    int even[5] = {1,2,3,3,5};
    //cout <<"first occurance of 3 is "<<first(even , 5 , 3)<<endl;
    cout  <<"last  occurance of 3 is "<<last(even , 5 , 3)<<endl;

    return 0 ;




}