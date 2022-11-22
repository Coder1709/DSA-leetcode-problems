#include <iostream>

using namespace std;
int binarysearch (int arr[], int size , int key){
    int start = 0;
    int end = size-1;
//mid ke value optimization ke leye aise lekha hai warna 
//start = 2^31 and end bhi same toh mid ki value int ke range 
//se bahar ho jayega

    int mid =start + (end-start)/2;
    while(start <= end){
        if (arr[mid] == key){

            return mid;
        }

        if ( key > arr[mid]){
            start = mid + 1;
        }

        if (key < arr[mid]){
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;

}

int main(){

    int even[6] = {2,4,6,8,12,18};
    int odd[5]= {5,7,9,11,14};

    int evenIndex =  binarysearch(even , 6, 12);
    cout<<"index of 12 is "<<evenIndex<<endl;

    int oddIndex = binarysearch(odd,5,19);
    cout<<"index of 11 is "<<oddIndex<<endl;



    return 0;


    



}
