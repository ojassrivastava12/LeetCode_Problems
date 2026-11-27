#include<iostream>
#include<vector>
using namespace std;

// 238. Product of Array Except Self

int main(){
    vector<int> nums = {1, 2, 3, 4}; 
    int n = nums.size();
    vector<int> ans(n,1);
    vector<int> pe(n,1);
    vector<int> su(n,1);
    for(int i = 1; i<n; i++){
        pe[i] = pe[i-1]*nums[i-1];
    }
    for(int i = n-2; i>=0; i--){
        su[i] = su[i+1]*nums[i+1];
    }
    for(int i = 0; i<n; i++){
        ans[i] = pe[i]*su[i];
    }
    for (int i = 0; i < nums.size(); i++){
        cout<<ans[i]<<", ";
    }
    
    

    return 0;
}
