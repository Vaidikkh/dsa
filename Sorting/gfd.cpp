#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void Merge_sort(vector<int> &nums,int low,int mid,int high){
        vector<int> temparr;
        int left =low;
        int right= mid+1;
        while(left<=mid && right<=high){
            if(nums[left]<nums[right]){
                temparr.push_back(nums[left]);
                left++;
            }
            else {
                temparr.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid){
            temparr.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            temparr.push_back(nums[right]);
            right++;
        }
    for(int i=low;i<=high;i++){
        nums[i] = temparr[i-low];

    }    

    }
    void Merge( vector<int> &nums,int low,int high){
        if(low>=high){
            return;
        }
        int mid = (high + low) / 2;
        Merge(nums,low,mid);
        Merge(nums,mid+1,high);
        Merge_sort(nums,low,mid,high);
    }
    vector<int> sortArray(vector<int>& nums) {
        Merge(nums,0,(int)nums.size()-1);
        return nums;
    }
};



int main(){


    int n;
    cout<<"size of array:"<<endl;
    cin>>n;
    vector<int> nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }



    Solution st;
    st.sortArray(nums);
    for(int i =0;i<n;i++){
        cout<< nums[i]<<" ";
    }

    return 0;
}
