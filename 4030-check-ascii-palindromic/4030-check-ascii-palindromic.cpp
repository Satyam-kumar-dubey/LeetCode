class Solution {
public:

    string binary (int val)
    {
        string temp;
        for(int i=7; i>=0; i--)
        {
            temp += ((val >> i) & 1);
        }
        return temp;
    }
    bool pal (string s)
    {
        int i = 0, j = s.size()-1;
        while(i <= j)
        {
            if(s[i] != s[j])
            return false;

            i++;
            j--;
        }
        return true;
    }
    bool isPalindromic(string s)
    {
        string bin;
        for(char c : s)
        {
            int val = (int)c;
            string temp = binary(val);
            bin += temp;
        }
        return pal(bin);
    }

};