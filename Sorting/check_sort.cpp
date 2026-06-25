#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int check_sorted(const vector<int>&arr){
    for(int i=1;i<(int)arr.size();i++){
        if(arr[i]>=arr[i-1]){
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Size of array"<<endl;
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool sorted = check_sorted(arr);
    cout<<"Array is Sorted :"<<sorted<<endl;
    return 0;

}