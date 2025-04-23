class Solution {
public:
    int maxDepth(string s) {
        long long cnt=0;
        long long mx = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                cnt++;
            }
            else if(s[i]==')')
            {
                mx = max(cnt,mx);
                cnt--;
                cnt = max(0ll,cnt);
            }
        }
        return mx;
    }
};