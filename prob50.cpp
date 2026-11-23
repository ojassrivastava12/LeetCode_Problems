#include<iostream>

using namespace std;

//50. Pow(x, n)

int main(){
    int n = -2;
    double x = 2.00000;
    long bin = n;
    double ans = 1;
    if (bin<0){
        bin = -1*bin;
        x = 1/x;
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
