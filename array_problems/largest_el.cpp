#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    // by traversing and finding max of all
int largest(const vector<int> &arr){
    int p =arr[0];
    for(int i=1; i<(int)arr.size();++i){
        if(p<arr[i]){
            p = arr[i];
        }
    } 
    return p;
}


int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxValue = largest(arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<"Largest element in the array is :"<<maxValue<<endl;


}