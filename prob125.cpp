#include<iostream>
#include<string>

//125. Valid Palindrome

using namespace std;
int main(){
    string s = "0P";
    int i = 0, k = s.size()-1;
    int ans = 0;
    while(i<k){
        if(!isalnum(s[i])){
            i++;
            continue;
        }
        else if(!isalnum(s[k])){
            k--;
            continue;
        }
        else if(tolower(s[i])!=tolower(s[k])){
            ans++;
            break;
        }
        i++;
        k--;
    }
    if(!ans){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}
