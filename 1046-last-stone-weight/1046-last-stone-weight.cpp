class Solution {
public:
    int lastStoneWeight(vector<int>& arr)
    {
        priority_queue<int>p(arr.begin(),arr.end());

        while(p.size() > 1)
        {
            int f = p.top();
            p.pop();
            int s = p.top();
            p.pop();

            if(f != s)
            p.push(f-s);
        }
        return (p.empty() ? 0 : p.top());
    }
};