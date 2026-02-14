#include "bits/stdc++.h";
#define ll long long
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.contains(target - nums[i]))
                return {mp[target - nums[i]] ,i};
            else mp[nums[i]]=i;
        }
        return {};
    }
};




void printVector(vector<int> arr)
{
    for (int i : arr) cout << i << " ";
}

int main()
{
    vector<int> in = { 4,5,6 };

    Solution s;
    printVector(s.twoSum(in, 10));
}

