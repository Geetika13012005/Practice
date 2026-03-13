#include<iostream>
using namespace std;

int main (){
    int n;
    cin >> n;

    int arr[n];
    int pos = 0;

    // take input
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    // move non-zero elements
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            arr[pos] = arr[i];
            pos++;
        }
    }

    // fill remaining with zeros
    while(pos < n){
        arr[pos] = 0;
        pos++;
    }

    // print result
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}