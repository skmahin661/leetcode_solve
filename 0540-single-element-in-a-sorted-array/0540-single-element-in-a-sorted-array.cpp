class Solution {
public:
    int singleNonDuplicate(vector<int>& v) {
        int ans = 0;
        for (int i = 0; i < v.size(); i++) {
            ans ^= v[i];
        }
        return ans;
    }
};