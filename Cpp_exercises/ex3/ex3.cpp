#include <iostream>
#include <limits>
#include <cmath>



int main () {


  double a,b,c;
  char op;

  ///////////// Input 1st number
  std::cout << "Input a number: " << std::endl;
  std::cin >> a;
  while (!std::cin){
    std::cout << "Incorrect user input! Please input a number:" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cin >> a;
  }

  ///////////// Input 2nd number
  std::cout << "Input another number: " << std::endl;
  std::cin >> b;
  while (!std::cin){
    std::cout << "Incorrect user input! Please input a number:" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cin >> a;
  }


  std::cout << "Input an operation: \n a = addition \n s = subtraction \n m = multiplication \n d = division \n q = quit program! \n This will be done in the order " << a << "(operator)" << b << ".  What would you like to do? \n" << std::endl;
  std::cin >> op; // operator input
  while (std::cin){
    std::cout << "Input an operation: \n a = addition \n s = subtraction \n m = multiplication \n d = division \n q = quit program! \n What would you like to do? \n" << std::endl;
    //////// Functions ////////
    if (op == 'a'){ // add
      c = a+b;
      std::cout << "Your answer is = " << c << std::endl;
      break;
    }
    else if (op == 's'){ // sub
      c = a-b;
      std::cout << "Your answer is = " << c << std::endl;
      break;
    }
    else if (op == 'm'){ // mult
      c = a*b;
      std::cout << "Your answer is = " << c << std::endl;
      break;
    }
    else if (op == 'd'){ // div
      c = a/b;
      std::cout << "Your answer is = " << c << std::endl;
      break;
    }
    else if (op == 'q') return 0; // checks for quitting
    else {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
  }

  
return 0;
}
