#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int max_count(vector<int> &nums){
    unordered_map<int, int> map;
    for (int num : nums) {
        map[num]++;
    }
    int max_count = 0;
    int val = 0;
    for (const auto &entry : map) {
        if (entry.second > max_count){
            max_count = entry.second;
            val = entry.first;
        }
    }
    return val;
}

void rev_str(string &a){
    int n = a.size();
    for (int i=0; i<n/2; i++){
        swap(a[i], a[n-i-1]);
    }
}

bool pal_check(string a){
    int n = a.size();
    for (int i=0; i<n/2; i++){
        if (a[i] != a[n-i-1]) return false;
    }
    return true;
}

int main(){
    string a = "hellehi";
    rev_str(a);
    // cout << a << endl;
    cout << (pal_check(a) ? "Palindrome" : "Not Palindrome") << endl;
}