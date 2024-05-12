//
// Created by 小林 on 12/5/2024.
//
#include <iostream>
#include <iomanip> // 包含头文件来使用 setw 函数

using namespace std;

int main() {
    int num1, num2, num3;

    // 读取输入的三个整数
    cin >> num1 >> num2 >> num3;

    // 输出格式化后的整数，每个整数占8个字符的宽度，右对齐
    cout << right << setw(8) << num1 << " "
         << right << setw(8) << num2 << " "
         << right << setw(8) << num3 << endl;

    return 0;
}
