#include<iostream>
using namespace std;

//9. Palindrome Number
int main(){
    int x = 1234567899;
    int n = x;
    cout<<n<<endl;
    int a = 0;
    long long num = 0;
    while (n>0){
        a = n%10;
        num +=a;
        n = (n-a)/10;
    }
    cout<<x<<", "<<n<<", "<<num<<", ";
    
    return 0;
}
