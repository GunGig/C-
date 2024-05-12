#include <iostream>

int main() {
    int num;
    // 读取一个四位数
    std::cin >> num;

    // 计算千位、百位、十位和个位上的数字
    int thousands = num / 1000;               // 千位
    int hundreds = (num % 1000) / 100;        // 百位

    //（1234%1000）=234。 234/100=2
    int tens = (num % 100) / 10;              // 十位
    int ones = num % 10;                      // 个位
//取余 (num % 1000)：这个操作去除了 num 的千位数，留下了后三位数字（百位、十位和个位）。
//例如，如果 num 是 4567，那么 num % 1000 结果为 567。

// 整除 (/ 100)：之后，将上一步得到的结果整除以 100，可以得到百位上的数字。
// 继续上面的例子，567 除以 100 等于 5，这就是百位上的数字。

    
    // 输出各个位上的数字
    std::cout << thousands << " " << hundreds << " " << tens << " " << ones << std::endl;

    return 0;
}
