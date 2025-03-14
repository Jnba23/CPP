#include <iostream>
#include <iomanip>
#include <string>

// class fruit {
//     public:
//         enum type {
//             banana,
//             apple,
//             strawberry,
//         };
//     type gettype() const;
//     fruit(type x)
//     {
//         std::cout << "Constructor called !" << std::endl;
//         kind = x;
//     }
//     private:
//         type kind;       
// } ;

// fruit::type fruit::gettype() const
// {
//     return (kind);
// }

// int main()
// {
//     fruit a(fruit::apple);
//     std::cout << "Is it an Apple ?" << std::endl;
//     if (a.gettype() == fruit::apple)
//         std::cout << "yes" << std::endl;
// }

int main(){
    std::cout << std::fixed << '\n';
    std::cout << 123.456 << '\n';
    std::cout << std::setprecision(4) << 123.456 << '\n';
    std::cout << std::setprecision(5) << 123.456 << '\n';
    std::cout << std::setprecision(6) << 123.456 << '\n';
    std::cout << std::setprecision(7) << 123.456 << '\n';

    std::cout << std::scientific << '\n';
    std::cout << std::setprecision(3) << 123.456 << '\n';
    std::cout << std::setprecision(4) << 123.456 << '\n';
    std::cout << std::setprecision(5) << 123.456 << '\n';
    std::cout << std::setprecision(6) << 123.456 << '\n';
    std::cout << std::setprecision(7) << 123.456 << '\n';
}