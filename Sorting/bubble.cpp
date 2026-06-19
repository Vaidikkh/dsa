#include<iostream>
using namespace std;
void Bubble_sort(int arr[],int n){
    //optimize by counting swap to break
    int didSwap=0;
    for(int i =0;i<=n-1;i++){
        for(int j=1;j<n-i;j++){
            if(arr[j]<arr[j-1]) {
                //int temp = arr[j];
                //arr[j] = arr[j-1];
                //arr[j-1] = temp;
                swap(arr[j],arr[j-1]);
                didSwap=1;
            }
            if(didSwap==0){
                break;
            }
        }

    }
}

int main() {

    int n;
    cout<<"size of array:"<<endl;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    Bubble_sort(arr,n);

    for(int i =0;i<n;i++){
        cout<< arr[i]<<"\t";
    }

    return 0;
}