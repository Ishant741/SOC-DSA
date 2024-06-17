#include<iostream>
#include<string>
using namespace std;


bool isPalindrome(string s) {
    int first = 0, last = (s.size()-1);
    while(first<last){        // only half of string we have to iterate
        
        while((!isalnum(s[first])) && (first<last)){
            first++;
        }
        while((!isalnum(s[last])) && (first<last)){
            last--;
        }
        if(tolower(s[first])!=tolower(s[last])){
            return false;
        }
        first++;
        last--;

    }
    return true;
}



int main(){
    string s = "   abcdeedcba ";
    bool ans = isPalindrome(s);
    cout<<ans;
}