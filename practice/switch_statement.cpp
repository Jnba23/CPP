#include <iostream>

int main()
{
    int fst_num, scd_num;
    int add, mutliply, divide, substract, op;

    add = 1;
    mutliply = 2;
    substract = 3;
    divide = 4;
    std::cout << "Enter first number :" << std::endl;
    std::cin >> fst_num;
    std::cout << "Enter second number :" << std::endl;
    std::cin >> scd_num;
    std::cout << "Which operation would you like to apply :" << std::endl;
    std::cout << "1 for Addition, " << "2 for multiplication, " << "3 for Substraction," << "4 for Division" << std::endl;
    std::cin >> op;
    switch (op)
    {
        case 1:
            std::cout << fst_num + scd_num << std::endl;
            break ;
        case 2:
            std::cout << fst_num * scd_num << std::endl;
            break ;
        case 3:
            std::cout << fst_num - scd_num << std::endl;
            break ;
        case 4:
            std::cout << fst_num / scd_num << std::endl;
            break ;
        default:
            std::cout << "No op matches !" << std::endl;
            break ;
    }
}