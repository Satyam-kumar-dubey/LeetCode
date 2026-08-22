using ll = long long;
class Solution {
public:
    bool checkDivisibility(int n)
    {
        int n1 = n, org = n;
        ll sum = 0;
        while(n > 0)
        {
            sum += n%10;
            n = n/10;
        }
        ll prod = 1;
        while(n1 > 0)
        {
            prod *= n1 % 10;
            n1 = n1 / 10;
        }
        return (org % (sum+prod) == 0 ? true : false);
    }
};