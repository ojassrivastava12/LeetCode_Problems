#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//33. Search in Rotated Sorted Array

int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    int i = 0, k = nums.size()-1;
    int index = 0;
    while(i<=k){
        int m = i+(k-i)/2;
        if(nums[m]==target){
            cout<<m;
            break;
        }
        if (nums[m]>=nums[k]){
            if(nums[i]<=target && target<=nums[m]){
                k = m -1;
            }
            else{
                i = m+1;
            }
        }
        else{
            if(nums[k]<=target && target<=nums[m]){
                i = m+1;
            }
            else{
                k = m-1;
            }
        }
    }
    return 0;
}
