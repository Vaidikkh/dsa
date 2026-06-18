#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
/*    int n;
    cout<<"size of array";
    cin>>n;
    int arr[n];
    cout<<"array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
*/
     //Brute force
/*    int count =0;
    int number ;
    cin>>number;
    for(int i=0;i<n;i++){
        if(arr[i]==number)  count = count +1;
        
    }
    cout<<"count of number"<<number<< "is:"<<count<<endl;
*/
    //optimal sol using hashing 
    // but this sol has limit of arr because you cant declare int arr more then 10e7 or more
    //what if the size is greater then we use map
/*   int hash[13] ={0};
    for(int i=0;i<n;i++){
        hash[arr[i]] +=1;
    } 

    int q; 
    cout<<"No. of questions"<<endl;
    cin>>q;
    int number ;
    //no of questions q
    while(q--){
        
        cin>>number;
        cout<<number<<" number appear "<<hash[number]<<" times in the array"<<endl;
    }   //fetch
*/   
    //map
    int n1;
    cout<<"Give me the size of array:";
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    map<int,int>mpp;
    for(int i=0;i<n1;i++){
        mpp[arr1[i]]++;
    }
    //iterate in the map
    for (auto it :mpp){
        cout<<it.first<<"-->"<<it.second<<endl;
    }
    int q;
    cout<<"how many numbers you wanna count in the array?"<<endl;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<"the numbers appears in the array "<<mpp[number]<<"times"<<endl;
    }


    return 0;



}