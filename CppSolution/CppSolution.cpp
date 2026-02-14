#include "bits/stdc++.h";
#define ll long long
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <string, vector<string>> mp;
        for(string str : strs )
        {
            string temp = "" + str;
            sort(temp.begin(),temp.end());
            if(mp.contains(temp))mp[temp].push_back(str);
            else mp[temp]={str};
        }

        vector<vector<string>> ans;
        for(auto it : mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};




void printVector(vector<string> arr)
{
    for (auto i : arr) cout << i << " ";
}

int main()
{
    vector<string> in = { "act","pots","tops","cat","stop","hat" };

    Solution s;
    auto res =s.groupAnagrams(in);
    for (auto i : res) 
    {
        printVector(i);
        cout << '\n';
    }
        

}

