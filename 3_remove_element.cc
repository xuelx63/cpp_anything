#include <iostream>
#include <vector>

class Solution {
    public: 
        int removeElement (std::vector<int>& nums, int val) {
            visualize(nums);
            int slowidx = 0;
            for (int fastidx = 0; fastidx < nums.size(); fastidx++) {
                if (nums[fastidx] != val) {
                    nums[slowidx++] = nums[fastidx];
                }
            }
            return slowidx; 
        }

        int removeElement_v2(std::vector<int>& nums, int val) {
            visualize(nums);
            int slowIndex = 0;
            for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++) {
                if (val != nums[fastIndex]) {
                    nums[slowIndex++] = nums[fastIndex];
                }
            }
            return slowIndex;
    }
};


void visualize (std::vector<int>& nums) {
    std::cout << "nums:" << " ";
    for (int i=0; i<nums.size(); i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}


int main () {
    std::vector<int> nums = {1, 2, 2, 3, 4, 5};
    int val = 2;
    Solution solution;
    int res = solution.removeElement(nums, val);
    int res2 = solution.removeElement_v2(nums, val);
    std::cout << "result: " << res << std::endl;
    std::cout << "result_v2: " << res2 << std::endl;
    return 0;
}