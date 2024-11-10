#include <iostream>
#include <cstdlib>
#include <limits>

void calculator();
void calculator2();
void fourOperandCalculator();

double inputNumber(const std::string& prompt) {
    double num;
    std::cout << prompt;
    while (!(std::cin >> num)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "输入错误，请重新输入。" << prompt;
    }
    return num;
}

int main() {
    int jzys;
    std::cout << "你要运行几则运算：1.二则运算 2.三则运算 3.四则运算";
    std::cin >> jzys;

    if (jzys == 1) {
        calculator();
    }
    else if (jzys == 2) {
        calculator2();
    }
    else if (jzys == 3) {
        fourOperandCalculator();
    }

    system("pause");
    return 0;
}

void calculator() {
    double num1 = inputNumber("输入第一个数：");
    double num2 = inputNumber("输入第二个数：");

    int fs;
    fs = 0;
    std::cout << "请选择计算方式：1.加 2.减 3.乘 4.除（输入数字即可）";
    std::cin >> fs;

    if (fs == 1) {
        std::cout << num1 + num2;
    }
    else if (fs == 2) {
        std::cout << num1 - num2;
    }
    else if (fs == 3) {
        std::cout << num1 * num2;
    }
    else if (fs == 4) {
        if (num2 != 0) {
            std::cout << num1 / num2;
        }
        else {
            std::cout << "除数不能为零，请重新输入。";
        }
    }
    else {
        std::cout << "无效的选择，请重新输入。";
    }
}

void calculator2() {
    double num1, num2, num3;

    num1 = inputNumber("输入第一个数：");
    num2 = inputNumber("输入第二个数：");
    num3 = inputNumber("输入第三个数：");

    int fs;
    fs = 0;
    std::cout << "请选择计算方式：1.三数相加 2.三数相减（依次减） 3.三数相乘 4.三数相除（依次除）（输入数字即可）";
    std::cin >> fs;

    if (fs == 1) {
        std::cout << num1 + num2 + num3;
    }
    else if (fs == 2) {
        std::cout << (num1 - num2) - num3;
    }
    else if (fs == 3) {
        std::cout << num1 * num2 * num3;
    }
    else if (fs == 4) {
        if (num2 != 0 && num3 != 0) {
            double temp = num1 / num2;
            std::cout << temp / num3;
        }
        else {
            std::cout << "除数不能为零，请重新输入。";
        }
    }
    else {
        std::cout << "无效的选择，请重新输入。";
    }
}

void fourOperandCalculator() {
    double num1, num2, num3, num4;

    num1 = inputNumber("输入第一个数：");
    num2 = inputNumber("输入第二个数：");
    num3 = inputNumber("输入第三个数：");
    num4 = inputNumber("输入第四个数：");

    int fs;
    fs = 0;
    std::cout << "请选择计算方式：1.四数相加 2.四数相减（依次减） 3.四数相乘 4.四数相除（依次除）（输入数字即可）";
    std::cin >> fs;

    if (fs == 1) {
        std::cout << num1 + num2 + num3 + num4;
    }
    else if (fs == 2) {
        std::cout << (num1 - num2) - num3 - num4;
    }
    else if (fs == 3) {
        std::cout << num1 * num2 * num3 * num4;
    }
    else if (fs == 4) {
        if (num2 != 0 && num3 != 0 && num4 != 0) {
            double temp1 = num1 / num2;
            double temp2 = temp1 / num3;
            std::cout << temp2 / num4;
        }
        else {
            std::cout << "除数不能为零，请重新输入。";
        }
    }
    else {
        std::cout << "无效的选择，请重新输入。";
    }
}