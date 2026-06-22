#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int pivot(vector<int>& arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(i <= high && arr[i] <= pivot){
            i++;
        }
        while(j >= low && arr[j] > pivot){
            j--;
        }
        if(i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quicksort(vector<int>& arr,int low,int high){
    if(low >= high){
        return;
    }
    else {
        int partition= pivot(arr,low,high);
        quicksort( arr,low, partition -1);
        quicksort(arr, partition +1, high);
    }
}

int main() {

    int n;
    cout<<"size of array:"<<endl;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);

    for(int i =0;i<n;i++){
        cout<< arr[i]<<"\t";
    }

    return 0;
}
