#include<iostream>
#include<string>

// 1910. Remove All Occurrences of a Substring

using namespace std;
int main(){
    string s = "daabcbaabcbc";
    string part = "abc";
    while(s.length()>0 && s.find(part)<s.length()){
        s.erase(s.find(part), part.length());
    }
    cout<<s<<endl;
    return 0;
}
