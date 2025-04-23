class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>u;
        map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(int i=1;i<=2000;i++)
        {
            if(!mp[i])
            {
                u.push_back(i);
                mp[i]++;
            }
        }
        return u[k-1];
    }
};