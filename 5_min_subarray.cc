#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl; 

class Solution {
public:
    int findSubArray (vector<int>& nums, int target) {
        int sum = 0;
        int i = 0;  // start
        int j = 0;  // end
        int minlen = INT32_MAX;
        
        for (j = 0; j < nums.size(); j++) {
            sum += nums[j];
            if (sum < target) {
                continue;
            }
            cout << "now i = " << i << ";j = " << j << ";sum = " << sum << endl;
            while (sum - nums[i] >= target) {
                sum -= nums[i];
                i++;
                cout << "update i = " << i << ";sum = " << sum << endl;
            }
            minlen = (j - i + 1) < minlen ? j - i + 1 : minlen;
            cout << "update minlen = " << minlen << endl;
        }
        if (sum < target) {
            return 0;
        } else {
            return minlen; 
        }
    }

    int findSubArray_v2 (vector<int>& nums, int target) {
        int sum = 0;
        int i = 0;  // start
        int j = 0;  // end
        int minlen = INT32_MAX;
        int n = nums.size();
        
        for (j = 0; j < n; j++) {
            sum += nums[j];
            while (sum >= target) {
                minlen = (j - i + 1) < minlen ? (j - i + 1) : minlen;
                sum -= nums[i];
                i++;
            }
        }
        return minlen == INT32_MAX ? 0 : minlen;
    }
    // 计算机的本质是循环
    // 1. 确认基本循环：条件+操作
    // 2. 确认目标变量在循环中的位置
};

void visualize (const std::vector<int>& nums) {
    std::cout << "nums:" << " ";
    for (int i=0; i<nums.size(); i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}

int main () {
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    visualize(nums);
    Solution solution;
    int res = solution.findSubArray(nums, target);
    cout << "result: " << res << endl;
}