using ll = long long;
class Solution {
public:
    bool checkDivisibility(int n)
    {
        int org = n;
        ll sum = 0, prod = 1;
        while(n > 0)
        {
            int dig = n % 10;
            sum += dig;
            prod *= dig;
            n = n/10;
        }
        return (org % (sum+prod) == 0 ? true : false);
    }
};