#include <iostream>
#include <cmath>

int main(){
  double base;
  double perpendicular;
  double hypotenuse;

  std::cout << "Enter base's length: \n";
  std::cin >> base;

  std::cout << "Enter perpendicular's length\n";
  std::cin >> perpendicular;

  hypotenuse = sqrt(base*base + perpendicular*perpendicular);
  
  std::cout << "The hypotenuse is of length " << hypotenuse << "cm" << std::endl;

  return 0;
}