#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    // by traversing and finding max of all and then compareing //its the better apporach 
int second_largest(const vector<int> &arr){
    int p =arr[0];
    for(int i=1; i<(int)arr.size();++i){
        if(p<arr[i]){
            p = arr[i];
        }
    }  
    int second_lrg=-1;
    for(int i=1;i<(int)arr.size();i++){
        if(arr[i]>second_lrg && arr[i]!=p){
            second_lrg = arr[i];
        }
    }
    return second_lrg;

}
    //optimal approach 
  int second_largest_opt(const vector<int> &arr){
    int p =arr[0];
    int second_lrg=-1;
    for(int i=1; i<(int)arr.size();++i){

        
        if(p<arr[i]){

            second_lrg=p;
            p = arr[i];
        }
        else {
            if(arr[i]>second_lrg){
                second_lrg =arr[i];
            }
        }
    } return second_lrg;   
  }
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int second_largest_Value = second_largest_opt(arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<"Second Largest element in the array is :"<<second_largest_Value<<endl;


}