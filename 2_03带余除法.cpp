#include <iostream>

int main() {
    int num1, num2;
    
    // 读取被除数和除数
    std::cin >> num1 >> num2;
    
    // 计算整数商和余数
    int sang = num1 / num2;  // 整数商
    int yu = num1 % num2; // 余数
    
    // 输出整数商和余数
    std::cout << sang << " " << yu << std::endl;
    
    return 0;
}
