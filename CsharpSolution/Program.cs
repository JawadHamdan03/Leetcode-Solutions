namespace CsharpSolution;

internal class Program
{
    static void printArr(int[]arr)
    {
        foreach (var item in arr)
        {
            Console.Write(item+" ");
        }
    }
    static void Main(string[] args)
    {
        int[] arr = { 3, 4, 5, 6 };
        Solution s = new Solution();
        printArr(s.TwoSum(arr, 7));
    }
}



public class Solution
{
    public int[] TwoSum(int[] nums, int target)
    {

        Dictionary<int, int> map= new Dictionary<int, int>();

        for (int i = 0; i < nums.Length; i++)
        {
            if (map.ContainsKey(target - nums[i])) return new int[] { map[target - nums[i]],i };
            map[nums[i]] = i;
        }
        return new int[] { };
    }
}
