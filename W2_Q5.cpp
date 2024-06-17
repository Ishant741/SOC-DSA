#include<iostream>
#include<string>
#include<vector>
using namespace std;

int compress(vector<char>& chars) {
    int i = 0, ans = 0;
    while (i < chars.size()) {
        int cnt = 1;
        while (i+1 < chars.size() and chars[i] == chars[i+1]) {
            cnt++;
            i++;
        }
        chars[ans++] = chars[i];
        if (cnt > 1) {
            string s = to_string(cnt);
            for (char c: s) {
                chars[ans++] = c;
            }
        }
        i++;
    }
    return ans;
}


int main(){
    vector<char> arr = {'a'};
    int ans = compress(arr);
    cout<<ans;
}