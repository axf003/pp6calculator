#include <iostream>
#include <limits>

int main () {


  double a,b,c,op;
  std::cout << "Input a number: " << std::endl;
  std::cin >> a; // number 1 input
  std::cout << "Input an operation: \n 1 = addition \n 2 = subtraction \n 3 = multiplication \n 4 = division" << std::endl;
  std::cin >> op; // operator input
  if (!std::cin || op < 1 || op > 4){
    std::cout << "Incorrect user input! \n 1 = addition \n 2 = subtraction \n 3 = multiplication \n 4 = division \n Please try again:" << std::endl;
    //   std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    //    std::cin.clear();
    std::cin >> op;
  }
  if (!std::cin || op < 1 || op > 4) return 0;
  std::cout << "Input another number: " << std::endl;
  std::cin >> b; // number 2 input

  //////// Functions
  if (op == 1){ // add
    c = a+b;
    std::cout << "Your answer is = " << c << std::endl;
  }
  if (op == 2){ // sub
    c = a-b;
    std::cout << "Your answer is = " << c << std::endl;
  }
  if (op == 3){ // mult
    c = a*b;
    std::cout << "Your answer is = " << c << std::endl;
  }
  if (op == 4){ // div
    c = a/b;
    std::cout << "Your answer is = " << c << std::endl;
  }

 
return 0;
}
