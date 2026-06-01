class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indexMap;

        for (int i = 0; i < nums.size(); i++) {
            int needed = target - nums[i];

            if (indexMap.find(needed) != indexMap.end()) {
                return {indexMap[needed], i};
            }

            indexMap[nums[i]] = i;
        }

        return {};
    }
};
