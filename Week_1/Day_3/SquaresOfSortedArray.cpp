class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();

        vector<int> v(n);

        int i = 0;
        int j = n - 1;
        int p = n - 1;

        while(i <= j) {

            if(nums[i] * nums[i] > nums[j] * nums[j]) {

                v[p] = nums[i] * nums[i];
                i++;
            }
            else {

                v[p] = nums[j] * nums[j];
                j--;
            }

            p--;
        }

        return v;
    }
};
