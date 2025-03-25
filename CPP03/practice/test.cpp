#include <iostream>

class B{
    protected:
        int a;
    public:
        B(int n): a{n}{};
        B(const B& b){*this = b;};
        B& operator=(const B& b){a = b.a; return (*this);};
        int compute() const{return (3 * a);};
        ~B(){};
};

class D : public B{
    public:
        D(int n): B(n){};
        D(const D& d): B(d){};
        D& operator=(const D& d){B::operator=(d); return (*this);};
        int compute() const{return 5 * a;};
        ~D(){};
};

int main(){
    D d1(6);
    B* b1 = &d1;
    std::cout << "Through pointer " << b1->compute() << '\n';
    std::cout << "Direct call " << d1.compute() << '\n';
}