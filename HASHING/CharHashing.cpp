#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
/*    string s ={'a','t','e','t','r','j','e','w','r','e','r','y','t','e','g'};
    int n=s.size();
    int hash[26]={0};
            for(int i=0;i<n;i++){
            hash[s[i] -'a']++;
    }
    int q;
    cout<<"no of questions"<<endl;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        cout<<c<<" repeats in the string "<<hash[c-'a']<<"times"<<endl;

    }
*/  
    //for every character or special character
    string s;
    cout<<"Give the string"<<endl;
    cin>>s;
/*    int  hashh[256] ={0};
    for(int i=0;i<s.size();i++){
        hashh[s[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<"The "<<c<<" repeats "<<hashh[c]<<" times."<<endl;
    }

*/  
    // using map
/*    map<char,int>mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
 
    for(auto it:mpp){
        cout<<it.first<<"-->"<<it.second<<endl;
    }

    int q;
    cout<<"tell me how many letters you wanna check in the string?"<<endl;
    cin>>q;
    while(q--){
        char c;
        cout<<"give the "<<q<<" letter to check "<<endl;
        cin>>c;
        cout<<mpp[c]<<endl;
    
    }
*/

   //unordered map
    unordered_map<char,int>mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
 
    for(auto it:mpp){
        cout<<it.first<<"-->"<<it.second<<endl;
    }

    int q;
    cout<<"tell me how many letters you wanna check in the string?"<<endl;
    cin>>q;
    while(q--){
        char c;
        cout<<"give the "<<q<<" letter to check "<<endl;
        cin>>c;
        cout<<mpp[c]<<endl;
    
    }
    

}