#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//1. Two Sum

int main(){
  
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<pair<int, int>> arr;
    for(int i = 0; i<nums.size(); i++){
        arr.push_back({nums[i], i});
    }
    sort(arr.begin(), arr.end());
    int i = 0, j = nums.size()-1;
    while(i<j){
        int sum = arr[i].first+arr[j].first;
            if(sum>target){
                j--;
            }
        else if(sum<target){
            i++;
        }
        else{
            cout<<arr[i].second<<", "<<arr[j].second;
            break;
        }
    }

    return 0;
}
