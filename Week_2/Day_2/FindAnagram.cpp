class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if(s.size() < p.size()) {
            return ans;
        }

        vector<int> pCount(26, 0);
        vector<int> winCount(26, 0);

        
        for(int i = 0; i < p.size(); i++) {
            pCount[p[i] - 'a']++;
            winCount[s[i] - 'a']++;
        }

        
        if(pCount == winCount) {
            ans.push_back(0);
        }

        for(int i = p.size(); i < s.size(); i++) {

            winCount[s[i] - 'a']++;


            winCount[s[i - p.size()] - 'a']--;

            if(pCount == winCount) {
                ans.push_back(i - p.size() + 1);
            }
        }

        return ans;
    }
};
