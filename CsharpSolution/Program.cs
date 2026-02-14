namespace CsharpSolution;

internal class Program
{
    static void Main(string[] args)
    {
        int[] arr = { 1, 2, 3, 4 };
        Solution s = new Solution();
        Console.WriteLine(s.IsAnagram("jam", "jar"));
    }
}



public class Solution
{
    public bool IsAnagram(string s, string t)
    {
        int[] countChars= new int[26];

        foreach (char c in s)
        {
            countChars[c - 'a']++;
        }
        foreach (char c in t)
        {
            countChars[c - 'a']--;
        }
        foreach (int i in countChars)
            if (i != 0) return false;        

        return true;
    }
}
