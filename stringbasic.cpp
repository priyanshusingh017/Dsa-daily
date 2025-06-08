#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Method to calculate length of a string
int getLength(const string& s) {
    int i = 0, cnt = 0;
    while (s[i]) {
        i++;
        cnt++;
    }
    return cnt;
}

// comparison ->

//using ==
bool areStringsSame(string s1, string s2) {
    return s1 == s2;
}

// using string comparison faction -> 
bool areStringsSame1(char s1[], char s2[]) {
    return strcmp(s1, s2) == 0;
}

// using length comparison -> 
bool areStringsEqual(string &s1, string &s2) {
  
    // Compare lengths first
    if (s1.length() != s2.length()) {
        return false;
    }

    // Compare character by character
    for (size_t i = 0; i < s1.length(); ++i) {
        if (s1[i] != s2[i]) {
            return false; 
        }
    }

    return true; 
}

// to find -> 
int findCharacterIndex(const string& s, char ch) {
    size_t idx = s.find(ch);

    if (idx != string::npos) { // string::npos means return empty 
        return idx;
    } else {
        return -1;
    }
}


// earse the character using the function method -> 
void customRemoveCharAtPosition(string &s, int pos) {
  
    if (pos < 0 || pos >= s.length()) {
        return; 
    }

    // Shift characters to the left from the position
    for (int i = pos; i < s.length() - 1; i++) {
        s[i] = s[i + 1]; 
    }

    s.resize(s.length() - 1);
}

// insert function -> 
string addStars(string s, vector<int>& stars)
{
    // Iterate through the vector of positions
    int k=0;
    for (int i = 0; i < stars.size(); i++) {
        // Insert a star at the specified position
        s.insert(stars[i]+ k++, "*");
    }
    return s;
}

// own build function to remove ->
void removeChar(string &s, char c) {

    int j = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != c) {
            s[j++] = s[i]; 
        }
    }
  
    // Resize string to remove the 
    // extra characters
    s.resize(j);   // according to the j count 
}



int main(){

    // Initializing a String
    string str = "hello world! ";
    // constructor ->
    string str1("Good Morning ");
    
    // printing the string ->
    cout<<"strings are : "<<endl;
    cout<<str1<<endl;
    cout<<str<<endl;

    // acessing through index -> s[i] or s.at[i]
    cout<<"3rd index in Hello world! is "<<str[3]<<endl;

    //length of string -> s.length or s.size()
    cout<<"length of good morning is : "<<str1.size()<<endl;
    cout << "using function to calculate length "<< getLength(str1) << endl;

    // concatenation -> s1 + s2 or s1.append(s2)
    string str2 = str1 + " " + str;
    string str3 = str1.append(str);
    cout<<"string after concatenation -> "<<str3<<endl;

    // comparison -> s1==s2 , s1!=s2 , s1<s2;
    string s1 = "GeeksforGeeks", s2 = "Geeks" , s3 = "geeks" ; 
    char s4[]="abc" , s5[] = "abc";


    // using ==
    if (areStringsSame(s2, s3)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;  
    }

    // using comparison operator ->
    if (areStringsSame1(s4, s5)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;  
    }

    // using own function -> 
    if (areStringsEqual(s2, s3)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;  
    }

    //find substring -> s.find("word")->
    string s = "geeksforgeeks";
    char ch = 'k';
    cout<<"first k charcter in geeksforgeeks on the length of : "<<s.find(ch)<<endl;
    cout<<findCharacterIndex(s, ch)<<endl;

    // Substring Extraction -> s.substr(ps , len)
    string st1 = "geeksforgeeks";
    cout<<"string (geeksforgeeks) at the postion of 3 and length is 4 : "<<st1.substr(3,4)<<endl;

    //earse character -> s.earse(pos , len)->
    string st2 ="geeksforgeeks";
    //cout<<"earse the character at index 3 of length 4 in geeksforgeeks : "<<st2.erase(3,4)<<endl;
    customRemoveCharAtPosition(st2 , 2); // remove at index 
    cout<<st2<<endl;


    //insert character -> s.insert(pos , "text")
    string st3 = "geeksgeeks";
    //cout<<"insert the *for* text at index 5 : "<<st3.insert(5 , "for")<<endl;
    string str5 = "geeksforgeeks";
    vector<int> chars = { 1, 5, 7, 9 };
    string ans = addStars(str5, chars);
    cout<<ans<<endl;

    // str.insert (pos , num , c) -> insert the character at position with occurance -> 
    string str4 ="gks";
    cout<<"insert the ee at postion 1 in gks : "<<str4.insert(1 , 2 ,'e')<<endl;

    // Remove all occurrences of a character in a string -> 
    string sta1 = "ababca";
    char c = 'a';
  
    // Remove all occurrences of 'c' from 's'
    sta1.erase(remove(sta1.begin(), sta1.end(), c), sta1.end());

    cout << sta1;

    string sr = "geeksforgeeks";
    removeChar(sr, 'g');
    cout << sr;
    cout<<endl;
     // sr -> 13 size but if s.resize is not there it print eeksforeeks along with last to ks -> eeksforeeks 
    // j count is after remove g -> 11 then it print 11 length of string only . 

    // isdigit -> 
    cout<<isdigit(3)<<endl;

    // isalpha -> 
    cout<<isalpha('a')<<endl;




    return 0;
}