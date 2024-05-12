#include <iostream>

int main() {
    int num1, num2;
    
    // 读取被除数和除数
    std::cin >> num1 >> num2;
    
    // 计算整数商和余数
    int sang = num1 / num2;  // 整数商
    int yu = num1 % num2; // 余数
// 取余 (num % 1000)：这个操作去除了 num 的千位数，留下了后三位数字（百位、十位和个位）。
// 例如，如果 num 是 4567，那么 num % 1000 结果为 567。

// 整除 (/ 100)：之后，将上一步得到的结果整除以 100，可以得到百位上的数字。
// 继续上面的例子，567 除以 100 等于 5，这就是百位上的数字。
    
    // 输出整数商和余数
    std::cout << sang << " " << yu << std::endl;
    
    return 0;
}
