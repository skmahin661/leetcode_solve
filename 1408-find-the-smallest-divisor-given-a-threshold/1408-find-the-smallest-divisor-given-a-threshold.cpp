class Solution {
public:
    int smallestDivisor(vector<int>&v, int d) {
        int be = 1, en = 1e6;
        int mid = (be+en)/2;
        int ans;
        while(be<=en)
        {
            int sum=0;
            for(int i=0;i<v.size();i++)
            {
                sum += (v[i] + mid - 1) / mid;
            }
            if(sum<=d)
            {
                ans = mid;
                en = mid-1;
            }
            else
            {
                be = mid+1;
            }
            mid = (be+en)/2;
        }
        return ans;
    }
};