#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> sortSquare (std::vector<int>& nums) {
        nums[0] = nums[0] * nums[0];
        for (int i=nums.size()-1; i>0; i--) {
            int curr = nums[i] * nums[i];
            if (nums[0] > curr) {
                nums[i] = nums[0];
                nums[0] = curr;
            } else {
                nums[i] = curr;
            }
        }
        return nums;
    }
};

int main () {
    Solution solution;
    std::vector<int> nums = {-4, 1, 2, 3};
    std::vector<int> res = solution.sortSquare(nums);
    std::cout << "result:" << " ";
    for (std::vector<int>::iterator it=res.begin(); it!=res.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}