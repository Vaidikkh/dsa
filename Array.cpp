
#include<bits/stdc++.h>
using namespace std;
/*

    class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
            int m = matrix.size();
            int n = matrix[0].size();

            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(matrix[i][j]==0){
                        for(int col=0;col<n;col++){
                            if(matrix[i][col]!=0){
                                matrix[i][col] = -1;
                            }
                        }    
                        for(int row=0;row<m;row++){
                            if(matrix[row][j]!=0)
                                matrix[row][j]=-1;
                        }       
                    }
                }
            }
            for(int i=0;i<m;i++){
                for(int j =0;j<n;j++){
                    if(matrix[i][j]==-1)
                        matrix[i][j]=0;
                }
            }
        }
    };

    int main(){
        vector<vector<int>> matrix {{1,2,3},{1,0,4},{3,6,3}};
        Solution sol;
        sol.setZeroes(matrix);
        for(int i=0;i<matrix.size();i++){
                for(int j =0;j<matrix[0].size();j++){
                    cout<<matrix[i][j]<<" ";
                    
                }cout<<endl;
            }
        return 0;
    }
*/


int main(){
    int n = 5;
    int arr[] = {1,3,5,7,9};
    int end = n-1;

    for(int i=0; i<end;i++){
        int temp;
        temp = arr[i];
        arr[i] = arr[end];
        arr[end] = temp;
        end--;
    }
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }

}