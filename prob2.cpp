#include<iostream>
#include<vector>
#include<algorithm>


//4. Median of Two Sorted Arrays

using namespace std;
int main(){
    vector<int> nums1 = {1,2};
    vector<int> nums2 = {3,4};
    vector<int> x;
    x.insert(x.end(), nums2.begin(), nums2.end());
    x.insert(x.end(), nums1.begin(), nums1.end());
    sort(x.begin(), x.end());
    if(x.size()%2==0){
        int a = x[x.size()/2-1];
        int b = x[x.size()/2];
        double c = (double)(a+b)/2;
        cout<<c<<", "<<a<<", "<<b;
    }
    else{
        double c = x[x.size()/2];
        cout<<c;
    }
    return 0;
}
