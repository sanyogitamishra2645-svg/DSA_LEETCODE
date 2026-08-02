class Solution {
public:
    int countPairs(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size() - 1;
        int pairs = 0;

        while (left < right) {

            if (nums[left] + nums[right] < target) {

                pairs += (right - left);

                left++;
            }
            else {

                right--;
            }
        }

        return pairs;
    }
};