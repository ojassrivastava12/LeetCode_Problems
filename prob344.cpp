#include<iostream>
#include<vector>

//344. Reverse String

using namespace std;
int main(){
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    int i = 0, k = s.size()-1;
    while(i<k){
        swap(s[i], s[k]);
        i++;
        k--;
    }
    for(int i = 0; i<s.size(); i++){
        cout<<s[i];
    }
    return 0;
}
