#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>union_brute(const vector<int>&arr1,const vector<int>&arr2,int n ,int m){
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr1[i]);
    }
    for(int i =0;i<m;i++){
        st.insert(arr2[i]);
    }
    vector<int> result;
    result.reserve(st.size());
    for(auto it : st){
        result.push_back(it);
    }
    return result;
}

vector<int>union1(const vector<int>&arr1,const vector<int>&arr2,int n ,int m){
    int i = 0;
    int j = 0;
    vector<int> union_of_arr;
    union_of_arr.reserve(n + m);

    while(i < n && j < m){
        if(arr1[i] <= arr2[j]){
            if(union_of_arr.empty() || union_of_arr.back() != arr1[i]){
                union_of_arr.push_back(arr1[i]);
            }
            i++;
        }
        else {
            if(union_of_arr.empty() || union_of_arr.back() != arr2[j]){
                union_of_arr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i < n){
        if(union_of_arr.empty() || union_of_arr.back() != arr1[i]){
            union_of_arr.push_back(arr1[i]);
        }
        i++;
    }

    while(j < m){
        if(union_of_arr.empty() || union_of_arr.back() != arr2[j]){
            union_of_arr.push_back(arr2[j]);
        }
        j++;
    }

    return union_of_arr;
}




int main(){
    int n;
    cout<<"Enter the Size of Array1:"<<endl;
    cin>>n;
    vector<int> arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter the size of array2:"<<endl;
    cin>>m;
    vector<int> arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int> union_array = union1(arr1,arr2,n,m);
    
    for(size_t i=0;i<union_array.size();i++){
        cout<<union_array[i];
    }
    return 0;
}