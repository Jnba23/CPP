#include <iostream>
#include <string>

class fruit {
    public:
        enum type {
            banana,
            apple,
            strawberry,
        };
    type gettype() const;
    fruit(type x)
    {
        std::cout << "Constructor called !" << std::endl;
        kind = x;
    }
    private:
        type kind;       
} ;

fruit::type fruit::gettype() const
{
    return (kind);
}

int main()
{
    fruit a(fruit::apple);
    std::cout << "Is it an Apple ?" << std::endl;
    if (a.gettype() == fruit::apple)
        std::cout << "yes" << std::endl;
}