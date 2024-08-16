#include "/Users/hrek/SE/UT/include/array_.h"
#include "/Users/hrek/SE/UT/include/header.h"
#include "/Users/hrek/SE/UT/include/string_.h"
#include "/Users/hrek/SE/UT/include/temp_.h"


int tmp(int N){
    int x = -(N*N);
    for(int i = 1;i<3*N+1;i++){
        std::cout << x << std::endl;
        x = (x + 2*i -1);
      
    }
}
int g (int x, int y) {
  switch(x - y) {
  case 0:
    return x;
  case 4:
    y = y + 1;
    break;
  case 7:
    x = x - 1;
  case 9:
    return x*y;
  case 3:
    y = x + 9;
  default:
    return y - x;
  }
return y;
}


int main() {
    std::cout<<g(14,7);
}