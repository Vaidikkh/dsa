#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void left_shift1(vector<int> &arr,int n){

    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] =arr[i];
    }
    arr[n-1] = temp;


}

void left_shift_d(vector<int> &arr,int n,int d){
    d = d%n;
    vector<int> temp(d);
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int i =d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i] = temp[i-(n-d)];
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
    int d;
    cout<<"Enter the no of shift"<<endl;
    cin>>d;

    //left_shift1(arr,n);
    left_shift_d(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }


}
