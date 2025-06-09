#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string robotWithString(string s) {
        string t , p ;
        vector<int>freq(26 , 0);
        for(auto c : s){
            freq[c - 'a']++; // freq[c - 'a'] -> converts any lowercase letter to a 0-based index:
        }
        int minchar = 'a';
        for(auto c : s){
            t.push_back(c);
            freq[c-'a']--;
            while(minchar<='z' && freq[minchar - 'a']==0){
                minchar++;
            }

            while(!t.empty() && t.back()<=minchar){
                p.push_back(t.back());
                t.pop_back();
            }
        }

        while(!t.empty()){
            p.push_back(t.back());
            t.pop_back();
        }
        return p;
    }

int main(){

    string s ="zza";
    string s1 = "bdda";
    cout<< robotWithString(s)<<endl;;
    cout<< robotWithString(s1)<<endl;;


    return 0;
}