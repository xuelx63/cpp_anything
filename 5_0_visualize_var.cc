#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main () {
    int a = 10;
    float k = 10.0;
    std::vector<int> nums = {1, 2, 3, 4, 5};
    cout << "type of a: " << typeid(a).name() << endl;  // type of a: i
    cout << "type of k: " << typeid(k).name() << endl;  // type of k: f
    cout << "type of nums: " << typeid(nums).name() << endl;  // type of nums: NSt3__16vectorIiNS_9allocatorIiEEEE
    // 结论：这种打印类型的方式没什么用
    return 0;
}