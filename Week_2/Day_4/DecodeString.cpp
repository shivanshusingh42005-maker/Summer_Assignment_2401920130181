class Solution {
public:
    string decodeString(string s) {

        stack<int> nums;
        stack<string> words;

        string ans = "";
        int n = 0;

        for(char ch : s) {

            if(isdigit(ch)) {
                n = n * 10 + (ch - '0');
            }
            else if(ch == '[') {

                nums.push(n);
                words.push(ans);

                n = 0;
                ans = "";
            }
            else if(ch == ']') {

                int k = nums.top();
                nums.pop();

                string temp = words.top();
                words.pop();

                while(k--) {
                    temp += ans;
                }

                ans = temp;
            }
            else {
                ans += ch;
            }
        }

        return ans;
    }
};
