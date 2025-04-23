class Solution {
public:
    int myAtoi(string s) {
        string x = "";
        int flag = 0, dlag = 0, mlag = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ' && !flag) {
                continue;
            }
            if (s[i] == '-' && !flag && !dlag && !mlag) {
                dlag = 1;
                flag++;
                continue;
            }
            if (s[i] == '+' && !flag && !dlag && !mlag) {
                mlag = 1;
                flag++;
                continue;
            }
            if (!isdigit(s[i])) {
                break;
            }
            x += s[i];
            flag++;
        }

        long long sk = 0;
        for (int i = 0; i < x.size(); i++) {
            int d = x[i] - '0';
            sk = sk * 10 + d;
            if (!dlag && sk > INT_MAX) return INT_MAX;
            if (dlag && -sk < INT_MIN) return INT_MIN;
        }

        return dlag ? -sk : sk;
    }
};
