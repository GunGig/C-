#include <iostream>
#include <string> // 引入string库来处理字符串

int main() {
    std::string num;
    // 读取五位正整数
    std::cin >> num;

    // 检查输入数字是否符合条件（末位不为0，且为五位数）
    if (num.length() == 5 && num[4] != '0') {
        // 逆序输出数字
        for (int i = num.length() - 1; i >= 0; --i) {
            std::cout << num[i];
        }
        std::cout << std::endl;
    } else {
        std::cout << "输入的数字必须是末位不为0的五位正整数" << std::endl;
    }

    return 0;
}
