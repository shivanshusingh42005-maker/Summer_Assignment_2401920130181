class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int uniqueIndex = 0 ;

        for (int current = 1; current < nums.size(); current++) {

            if (nums[current] != nums[uniqueIndex]) {
                uniqueIndex++;
                nums[uniqueIndex] = nums[current];
            }
        }

        return uniqueIndex + 1;
    }
};
