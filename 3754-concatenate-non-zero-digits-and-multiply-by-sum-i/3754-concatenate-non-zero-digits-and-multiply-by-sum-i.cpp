class Solution {
public:
    long long sumAndMultiply(int num)
    {
        int n = 0;
        while(num  > 0)
        {
            int dig = num % 10;
            if(dig != 0)
            n = n*10 + dig;

            num = num/10;
        }
        int sum = 0;
        int rev = 0, dum = n;
        while(dum > 0)
        {
            rev = rev*10 + (dum%10);
            dum = dum/10;
        }

        int dup = n;
        while(dup > 0)
        {
            sum += dup % 10;
            dup = dup / 10;
        }
        return (long long)rev*sum;
    }
};