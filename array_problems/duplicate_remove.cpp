#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int duplicate_remove( vector<int>&arr){
    set<int> st;
    for(int i=0;i<(int)arr.size();i++){
        st.insert(arr[i]);
    }
    int index =0;
    for(auto it : st){
       arr[index]=it;
        index++; 
    }
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

    duplicate_remove (arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    
    return 0;

}