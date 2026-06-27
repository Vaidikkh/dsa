#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void shift_zero_brute(vector<int> &arr,int n) {
    vector<int> temp;
    for(int i =0;i<n;i++){
        if(arr[i] !=0){
            temp.push_back(arr[i]);
        }
    }
    int nz =temp.size();
    for(int i =0;i<nz;i++){
        arr[i]=temp[i];
    }
    for(int i=nz;i<n;i++){
        arr[i] =0;
    }


}

void shift_zero_optimal(vector<int> &arr,int n){
    int i,j=n;
    for(int i=0;i<j;i++){
        if(arr[i] ==0){
            j=i;
            break;
        }
        
    }

    
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
        }
        

    }
    
    

}
int main(){
        int n;
    cout<<"Enter the Size of Array:"<<endl;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    shift_zero_optimal(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}
