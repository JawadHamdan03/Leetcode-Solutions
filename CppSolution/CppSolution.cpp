#include "bits/stdc++.h";
#define ll long long
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        for (int num : nums)
        {
            if (s.contains(num)) return true;
            else s.insert(num);
        }
        return false;
    }
};




int main()
{

    vector<int> in = { 1, 2, 3, 4 };

    Solution s;
    cout << s.hasDuplicate(in);
}

