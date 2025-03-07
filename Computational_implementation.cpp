#include "Computational_implementation.h"
#include <sstream>  // 添加此行以解决 E0070 和 C2079 错误

void Computational()
{
    M_Computational_implementation computational_implementation;
    do {
        std::cout << "Enter an expression (e.g., 5+3): ";
        std::string input;
        std::getline(std::cin, input);  // 读取整行输入

        // 执行运算
        switch (computational_implementation.operation[0]) {
        case '+':
            std::cout << computational_implementation.num1 + computational_implementation.num2 << std::endl;
            break;
        case '-':
            std::cout << computational_implementation.num1 - computational_implementation.num2 << std::endl;
            break;
        case '*':
            std::cout << computational_implementation.num1 * computational_implementation.num2 << std::endl;
            break;
        case '/':
            if (computational_implementation.num2 != 0) {
                std::cout << computational_implementation.num1 / computational_implementation.num2 << std::endl;
            } else {
                std::cout << "Division by zero error, The error is sent to the Error.txt and the program is automatically repairing" << std::endl;
                computational_implementation.Error = false;
                continue;
            }
            break;
        default:
            std::cout << "Invalid operation, The error is sent to the Error.txt and the program is automatically repairing" << std::endl;
            computational_implementation.Error = false;
            continue;
        }

        // 询问是否继续
        std::cout << "Do you want to try again?(Yes/No): ";
        std::cin >> computational_implementation.Option;
        std::cin.ignore();  // 清除输入缓冲区中的换行符
        if (computational_implementation.Option == "Yes") {
            continue;
        }
        else if (computational_implementation.Option == "No") {
            break;
        }
        else {
            std::cout << "Invalid input, The error is sent to the Error.txt and the program is automatically repairing" << std::endl;
            computational_implementation.Error = false;
        }

    } while (computational_implementation.Option != "No");
}