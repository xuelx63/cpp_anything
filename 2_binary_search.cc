#include <iostream>
#include <vector>

class Solution {
    public:
        int search(std::vector<int>& nums, int target) {
            int left = 0;
            int right = nums.size();
            while (left < right) {
                int middle = left + ((right - left) >> 1);
                std::cout << "middle: " << middle << std::endl;
                if (nums[middle] > target) {
                    right = middle;
                } else if (nums[middle] < target) {
                    left = middle + 1;
                } else {
                    return middle;
                }
            }
            return -1;
        }
};

int main() {
    std::vector<int> nums = {1, 2, 3, 5, 6};
    int target = 3;
    Solution solution;
    int res = solution.search(nums, target);

    if (res != -1) {
        std::cout << "Found: " << res << std::endl;
    } else {
        std::cout << "not Found" << std::endl;
    }

    return 0;
}