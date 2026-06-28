#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> intersectionarray(vector<int> &arr1,vector<int>&arr2,int n,int m ){
    int i=0;
    int j =0;
    vector<int> intersect_arr;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            intersect_arr.push_back(arr1[i]);
            i++;
            j++;
        }

        else{
            if(arr1[i]<arr2[j]){
                i++;
            }
            else{
                j++;
            }
        }
    }
    return intersect_arr;
   /*for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            if(arr1[i]==arr2[j]){
                intersect_arr.push_back(arr1[i]);
            }

    }
   }*/
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
    vector<int> intersect_array = intersectionarray(arr1,arr2,n,m);
    

    for(size_t i=0;i<intersect_array.size();i++){
        cout<<intersect_array[i];
    }
    return 0;
}