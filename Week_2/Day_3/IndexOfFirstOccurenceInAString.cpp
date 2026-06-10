class Solution {
public:
    int strStr(string s, string t) {

        if (t.empty()) return 0;

        for (int i = 0; i + t.size() <= s.size(); i++) {

            int k = 0;

            while (k < t.size() && s[i + k] == t[k]) {
                k++;
            }

            if (k == t.size()) {
                return i;
            }
        }

        return -1;
    }
};
