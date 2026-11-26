#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> ans = {-1, -1};
    int i = 0, k = nums.size()-1;
    while(i<=k){
        int m = i + (k - i) / 2;
        if(nums[m]==target){
            ans[0] = m;
            k = m-1;
        }
        else if(target>nums[m]){
            i = m+1;
        }
        else{
            k = m-1;
        }
    }
    i = 0, k = nums.size()-1;
    while(i<=k){
        int m = i + (k - i) / 2;
        if(nums[m]==target){
            ans[1] = m;
            i = m+1;
        }
        else if(target>nums[m]){
            i = m+1;
        }
        else{
            k = m-1;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}
