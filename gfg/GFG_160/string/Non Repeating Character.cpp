#include <iostream>
#include <vector>
using namespace std;

char nonRepeatingChar(string &s)
{
    int n = s.size();
    vector<int> vis(26, -1);

    for (int i = 0; i < n; i++)
    {
        int index = s[i] - 'a';

        if (vis[index] == -1)
        {
            // first seen
            vis[index] = i;
        }
        else
        {
            // second visit
            vis[index] = -2;
        }
    }

    char idx = '$';
    int minindex = INT_MAX;
    for (int i = 0; i < 26; i++)
    {
        if (vis[i] >= 0 && (vis[i] < minindex))
        {
            minindex = vis[i];
            idx = s[vis[i]];
        }
    }

    return idx;
}

char nonRepeatingcharter(string &s)
{

    vector<int> freq(26, 0);

    for (auto c : s)
    {
        freq[c]++;
    }

    char res = '$';
    for (auto c : s)
    {
        if (freq[c] == 1)
        {
            res = c;
            break;
        }
    }

    return res;
}

int firstUniqChar(string s)
{

    int n = s.size();
    vector<int> vis(26, -1);

    for (int i = 0; i < n; i++)
    {

        int index = s[i] - 'a';

        if (vis[index] == -1)
        {

            // first seen
            vis[index] = i;
        }
        else
        {

            // second visit
            vis[index] = -2;
        }
    }

    int idx = -1;
    int minindex = INT_MAX;
    for (int i = 0; i < 26; i++)
    {
        if (vis[i] >= 0 && (vis[i] < minindex))
        {
            minindex = vis[i];
            idx = vis[i];
        }
    }

    return idx;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "First non-repeating character (method 1): " << nonRepeatingChar(s) << endl;
    cout << "First non-repeating character (method 2): " << nonRepeatingcharter(s) << endl;
    int idx = firstUniqChar(s);
    if (idx != -1)
        cout << "Index of first unique character: " << idx << " (" << s[idx] << ")" << endl;
    else
        cout << "No unique character found." << endl;

    return 0;
}