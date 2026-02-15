#include "bits/stdc++.h";
#define ll long long
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        map<int, int> mp;
        for (int num : nums)
        {
            if (mp.contains(num)) mp[num]++;
            else mp[num] = 1;
        }
        vector<pair<int, int>> temp;
        for (auto it : mp)
        {
            temp.push_back(it);
        }

        sort(temp.begin(), temp.end(), [](pair<int, int> a, pair<int, int> b) {return a.second > b.second; });
        vector<int> res;
        for (int i = 0; i < k; i++)
        {
            res.push_back(temp[i].first);
        }
        return res;
    }
};





void printVector(vector<int> arr)
{
    for (auto i : arr) cout << i << " ";
}

int main()
{
    vector<int> in = { 1,2,2,3,3,3 };

    Solution s;
    auto res =s.topKFrequent(in,2);
    printVector(res);
        

}

