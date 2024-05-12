#include <iostream>

int main() {
    int num;
    // 读取一个四位数
    std::cin >> num;

    // 计算千位、百位、十位和个位上的数字
    int thousands = num / 1000;               // 千位
    int hundreds = (num % 1000) / 100;        // 百位
    int tens = (num % 100) / 10;              // 十位
    int ones = num % 10;                      // 个位

    // 输出各个位上的数字
    std::cout << thousands << " " << hundreds << " " << tens << " " << ones << std::endl;

    return 0;
}
