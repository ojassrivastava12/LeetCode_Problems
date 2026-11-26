#include<iostream>

using namespace std;

// 50. Pow(x, n)

int main(){
    int n = -2;
    long double x = 2.00000;
    long long bin = n;
    long double ans = 1;
    if (bin<0){
        x = 1.0 / x;
        bin = -bin;
    }
    
    while (bin > 0){
        if(bin%2 == 1){
            ans *= x;
        }
        x*=x;   
        bin/=2;
    }
    cout<<ans;
    return 0;
}
