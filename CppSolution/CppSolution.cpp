#include "bits/stdc++.h";
#define ll long long
using namespace std;

class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for (string str : strs)
        {
            res += str + '.';
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string temp = "";
        for (char c : s)
        {
            if (c == '.') 
            {
                res.push_back(temp);
                temp = "";
            }
            else
            {
                temp += c;
            }       
        }
        return res;
    }
};



int main()
{
  
    Solution s;
    

}

