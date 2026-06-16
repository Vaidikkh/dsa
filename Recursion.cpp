#include<iostream>
using namespace std;
/*   int count = 0;
    void  recursion1() {
        
        if (count==3){
            return;
        }
        else{
        cout<<count<<endl;
        count++;
        recursion1();
        }
    }

    //problem2 
        void prt_name(int n){
            string name = "Vaidik";
            if(count == n){
                return;
            }
            else {
                cout<<name<<endl;
                count++;
                prt_name(n);
            }
        }

        void prt_name1(int i,int n) {
            string name ="Vaidik";
            if(i>n){
                return;
            }else{
                cout<<name<<endl;
                prt_name1(i+1,n);
            }
        }

    // print linearly from 1 to n
    void linear1(int i,int n){
        if(i>n){
            return;
        }else {
            cout<<i<<endl;
            linear1(i+1,n);
        }
    }
    void linear1_back(int i ,int n){
        if(i>n){
            return;
        }else{
            cout<<n<<endl;
            linear1_back(i,n-1);
        }

    }
    // linear 1 to n [backtrack]

    void linear1_backtrack(int i , int n){
        if(i<1){
            return;
        }else{
            linear1_backtrack(i-1,n);
            cout<<i<<endl;
        }
    } 
    void linear1_back_backtrack(int i , int n){
        if(i>n){
            return;
        }else{
            linear1_back_backtrack(i+1,n);
            cout<<i<<endl;
        }
    }

    int sum = 0;
    void summasion(int i, int n) {
        if(i>n){
        cout<<sum<<endl;
            return;}
        else{
            sum = sum +i;

            summasion(i+1,n);
        }  
            
    }

    int sumasion1(int n){
        if (n==0){
            return 0;
        }else{
            return n + sumasion1(n-1);
            
        }
    }

    //factorial
    int factorial(int n){
        if(n==1){
            return 1;
        }
        else{
            return n * factorial(n-1);
        }
    }

    // reverse an array using for loop
    for(int i = 0; i < n/2; ++i) {
        swap(arr[i], arr[n-1-i]);
    }

    // print the array
    for(int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //reverse an array
    int reverse(int l , int r){
        if(l>=r){
            return ;
        }else
        swap(arr[l] ,arr[r]);
        reverse(l++,r--);
    }
*/
// reverse a array with one parameter
void reverse_1(int i,int arr[],int n){
    
    if(i>=n/2){
        return;
    }else{
        swap(arr[i],arr[n-i-1]);
        reverse_1(i+1,arr,n);
    }

}
bool reverse_string(const string &m, int i, int n){
    if (i >= n) {
        return true;
    }
    if (m[i] != m[n]) {
        return false;
    }
    return reverse_string(m, i+1, n-1);
}
// using 1 parameter
bool reverse_string_1(int i , const string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return reverse_string_1(i+1,s);

}
// fabonacci series

int fabonacci(int n){

    if (n<=1) return n;
    else{
       
    return fabonacci(n-1) +fabonacci(n-2);
    }
}

int main(){
    
    //recursion1();
    //prt_name(5);
    //prt_name1(1,4);
    //linear1(1,5);
    //linear1_back(1,7);
    //linear1_backtrack(10,10);
    //linear1_back_backtrack(1,10);
    //summasion(1,5);
    //cout<<sumasion1(5);
       //cout<<factorial(5);
    //int arr[] = {1,7,3,9,2};
    //int n = sizeof(arr)/sizeof(arr[0]);
    //
    //reverse_1(0,arr,n);
    //    for(int i = 0; i < n; ++i) {
    //    cout << arr[i] << " ";
    //}
 /*   string m;
    cin>>m;
    if (reverse_string(m,0,m.length()-1)) {
        cout<<"IS palindrome"<<endl;
    }
    else{
        cout<<"is not palindrome"<<endl;
    }
    string s = "MADAM";
    if (reverse_string_1(0,s)) cout<<"Is Palindrone";
    else cout<<"IS not Palindrone";
  */ 
    cout<<fabonacci(5);




    return 0;
}


