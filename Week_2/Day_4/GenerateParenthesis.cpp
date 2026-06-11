class Solution {
public:
    vector<string> res;

    void dfs(string s, int o, int c, int n) {

        if(s.size() == 2 * n) {
            res.push_back(s);
            return;
        }

        if(o < n) {
            dfs(s + "(", o + 1, c, n);
        }

        if(c < o) {
            dfs(s + ")", o, c + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {

        dfs("", 0, 0, n);
        return res;
    }
};
