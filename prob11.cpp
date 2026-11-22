#include<iostream>
#include<vector>

// 11. Container With Most Water
using namespace std;

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int maxC = 0;
    int i = 0;
    int k = height.size()-1;
    while(i<k){
        int x = min(height[i], height[k]);
        int vol = x*(k-i);
        maxC = max(maxC, vol);
        if (height[i]>=height[k])
        {
            k--;
        }
        else{
            i++;
        }
    }
    cout<<maxC;
    return 0;
}
