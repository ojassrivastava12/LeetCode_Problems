// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
//     vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
//     int n = nums.size();
//     int x = 0;

//     for(int i = n-2; i>=0; i--){
//         if(nums[i]==nums[i+1]){
//             nums[i+1] = -1;
//             x++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<nums[i]<<", ";
//     }
    
//     cout<<"\n"<<x;
//     return 0;
// }

#include<iostream>
#include<vector>

using namespace std;
// 26. Remove Duplicates from Sorted Array
int main(){
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = nums.size();
    int x = 0;
    int k = 1;
    for(int i = 1; i<n; i++){
        if(n==1){
            k++;
            break;
        }
        if(nums[i]!=nums[i-1]){
            nums[k] = nums[i];
            k++;
            continue;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<", ";
    }
    
    cout<<"\n"<<x;
    return 0;
}
