#include <iostream>
// #include <cstdint>
// #include <bitset>


class Cent {
   private:
      int cents;
   public:
      Cent(int a){
         cents = a;
         std::cout << "constructor called !" << "\n";
      }
      Cent(const Cent& a){
         std::cout << "copy constructor called !" << "\n";
         cents = a.getcents();
      }
      ~Cent(){
         std::cout << "Destructor called !" << "\n";
      }
      Cent& operator=(const Cent& a1);
      friend Cent operator+(const Cent& a1, const Cent& a2);
      int   getcents() const;
      void   setcents(int i);
};

Cent& Cent::operator=(const Cent& a1){
   cents = a1.cents;
   return (*this);
}

Cent operator+(const Cent& a1, const Cent& a2){
   Cent b(0);
   b.cents = a1.getcents() + a2.getcents();
   return (b);
};

int   Cent::getcents() const{
   return (this->cents);
}

void Cent::setcents(int i){
   this->cents = i;
}

int main(){
   Cent a(60);
   Cent b(75);
   Cent c(a + b);
   std::cout << "1 - Total cents : " << c.getcents() << "\n";
   a.setcents(20);
   b.setcents(30);
   c = a + b;
   std::cout << "2 - Total cents : " << c.getcents() << "\n";
}
