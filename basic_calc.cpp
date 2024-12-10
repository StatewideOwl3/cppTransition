#include <iostream>
#include <cmath>

int main(){
  char op;
  double num1;
  double num2;
  double result;

  std::cout << "************CALCULATOR**********\n";
  std::cout << "A->Addition, S->Subtraction, M->Multiplication, D->Division\n";
  
  std::cout << "Enter op_code ie letter: ";
  std::cin >> op;

  std::cout << "Enter Num1 and Num2: ";
  std::cin >> num1 >> num2;

  switch(op){
    case 'A':
      result = num1+num2;
      break;

    case 'S':
      result = num1-num2;
      break;

    case 'M':
      result = num1*num2;
      break;

    case 'D':
      result = num1/num2;
      break;

    default:
      std::cout << "Invalid op code!\n";
      break;

  }

  std::cout << "Result: " << result << std::endl;

return 0;
}