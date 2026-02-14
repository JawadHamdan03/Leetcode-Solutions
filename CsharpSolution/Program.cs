namespace CsharpSolution;

internal class Program
{
    static void Main(string[] args)
    {
        int[] arr = { 1, 2, 3, 4 };
        Solution s = new Solution();
        Console.WriteLine(s.hasDuplicate(arr));
    }
}



public class Solution
{
    public bool hasDuplicate(int[] nums)
    {
        HashSet<int> s= new HashSet<int>();

        foreach(int num in nums)
        {
            if (s.Contains(num)) return true;
            else s.Add(num);
        }
        return false;
    }
}
