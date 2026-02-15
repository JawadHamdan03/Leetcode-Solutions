
Solution s = new Solution();
var printArr = (int[] arr) => {
    foreach (var item in arr)
    {
        Console.Write(item + " ");
    }
};

int[] arr = { 1, 2, 2, 3, 3, 3 };
var res = s.TopKFrequent(arr, 2);

printArr(res);


public class Solution
{
    public int[] TopKFrequent(int[] nums, int k)
    {
        Dictionary<int, int> mp = new Dictionary<int, int>();

        foreach (int num in nums)
        {
            if (mp.ContainsKey(num)) mp[num]++;
            else mp[num] = 1;
        }

        List<KeyValuePair<int, int>> temp= new List<KeyValuePair<int, int>>();
        foreach (var it in mp)
            temp.Add(it);

        temp.Sort((KeyValuePair<int, int> a, KeyValuePair<int, int> b) => b.Value.CompareTo(a.Value));
        List<int> res = new List<int>();

        for(int i =0; i < k; i++)
        {
            res.Add(temp[i].Key);
        }

        return res.ToArray();
    }
}
