class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int j = 0;

        // move non-zero elements
        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }

        // put zeros at the end
        while(j < nums.size()) {
            nums[j] = 0;
            j++;
        }
    }
};
