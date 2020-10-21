#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool IsPalindrom(string i) { 
    vector<char> r;
    for (auto ch : i) { 
        r.push_back(ch);
    }
    int leight = r.size();
    for (auto ch2 : r) { 
        if (ch2 != r[leight - 1]) return false; 
        leight--;
    }
    return true;
}
vector<string> PalindromFilter(vector<string> words, int minLength) { 
    vector<string> Output; 
    for (auto i : words) { 
        if (IsPalindrom(i) && i.size() >= minLength) { 
            Output.push_back(i); 
        }
    }
    return Output;
}

int main() 
{
    vector<string> words = { "sdfslk","dsksd","kddk","dd",";lwjlerjlwer" };
    int minLength = 3;
    int sh = 0;
    string a = "";
    for (string i : PalindromFilter(words, minLength)) {
        sh++;
        if (sh > 1) { a = ", "; }
        cout << a << i;
    }
    return 0;
}
