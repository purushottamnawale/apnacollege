#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    /* A minor change in the algorithm
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            swap(arr[j+1],arr[j]);
            j--;
        }
    }
    */



    /*
    12 45 23 51 19 10
    12 45 23 51 19 10 i 1
    12 23 45 51 19 10 i 2
    12 23 45 51 19 10 i 3
    12 23 45 51 19 10 i 4
        12 23 45 51 19 10 i 4
        12 23 45 51 51 10 i 4
        12 23 45 45 51 10 i 4
        12 23 23 45 51 10 i 4
        12 19 23 45 51 10 i 4
    12 19 23 45 51 10 i 5
        12 19 23 45 51 10 i 5
        12 19 23 45 51 51 i 5
        12 19 23 45 45 51 i 5
        12 19 23 23 45 51 i 5
        12 19 19 23 45 51 i 5
        12 12 19 23 45 51 i 5
        10 12 19 23 45 51 i 5
    10 12 19 23 45 51



    */

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}