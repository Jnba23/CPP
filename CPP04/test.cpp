#include <iostream>
#include <string>
#include <vector>

class A{
    private:
        std::string* s;
    public:
        A(std::string a){
            s = new std::string(a);
        }
        A(const A& a){
            if (this != &a)
                *this = a;
        }
        A& operator=(const A& a){
            if (s)
                delete s;
            s = new std::string(*(a.s));
            return (*this);
        }
        ~A(){
            delete s;
        }
        std::string* getS() const;
};

std::string* A::getS() const{
    return (s);
}

int main(){
    A a("Allo");
    {
        A b("Hello");
        b = a;
    }
    std::cout << *(a.getS()) << '\n';
    
} 