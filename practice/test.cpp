#include <iostream>
#include <cstdint>
#include <bitset>


// template <size_t dp>
// constexpr int32_t doubletofixed(double d){
//    return (int32_t(d * double(1 << dp) + (d >=  0 ? 0.5 :  -0.5)));
// } 

   int main(){
      int i = (1 << 24  )- 1;
      float y = i;
      std::cout << "i = " << i << std::endl;
      for (int j = 0; j < 1000000; j++){
         y += 1.0;
         i += 1;
         std::bitset<32> bin_y(y);
         std::bitset<32> bin_i(i);
         std::string s = bin_i.to_string();
         std::string d = bin_y   .to_string();
         // std::cout << "i = " << i << " float y = " << y << '\n';
         printf("i = %s, y = %s\n", s.c_str(), d.c_str());
      }
      return (0);
   }
