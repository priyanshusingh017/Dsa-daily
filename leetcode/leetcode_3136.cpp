#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isValid(string word)
{

    // base case
    if (word.size() < 3)
        return false;
    bool has_vowels = false;
    bool has_consonants = false;
    string vowels = "aeiouAEIOU";
    for (auto ch : word)
    {
        if (!isalnum(ch))
        {
            return false;
        }
        if (isalpha(ch))
        {
            if (vowels.find(ch) != string ::npos)
            {
                has_vowels = true;
            }
            else
            {
                has_consonants = true;
            }
        }
    }
    return has_vowels && has_consonants;
}

int main()
{

    string word = "a3$e";
    cout << isValid(word) << endl;
    // 1 -> true ; 0 -> false ;

    return 0;
}