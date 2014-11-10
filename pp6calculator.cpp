#include "PP6Math.hpp"

#include <iostream>
#include <limits>
#include <cmath>


/////////////////////// MAIN ////////////////////////////////////////

int main () {

  char choice;

  std::cout << "\n \nHello, my name is Cassie (short for Casio). What would you like to do?\nPlease select one of my many functions:\n 1 = do a basic sum (addition, subtraction, multiplication or division) \n 2 = calculate the intercept of a line \n 3 = solve a quadratic equation \n 4 = calculate the size of a 3-vector \n 5 = calculate the size of a 4-vector \n 6 = calculate the invariant mass of two particles \n 7 = swap the values of two numbers \n 8 = impliment a bubble sort on a 5 element array \n q = quit program and return to the command line" << std::endl;

  std::cin >> choice;

  while (std::cin){
    //////// Functions ////////
    if (choice == '1') {
      simplesums();
      break;
    }    
    else if (choice == '2') {
      intercept();
      break;
    }

    else if (choice == '3') {
      QEsolver();
      break;
    }

    else if (choice == '4') {
      threevector();
      break;
    }

    else if (choice == '5') {
      fourvector();
      break;
    }

    else if (choice == '6') {
      invmass();
      break;
    }

    else if (choice == '7') {
       sort();
       break;
    }

    else if (choice == '8') {
      arrayfn();
      break;
    }

    else if (choice == 'q') {  // checks for quitting
      std::cout << "\nI hope to see you soon\n" << std::endl;
      return 0;
    }
 
    else {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    std::cout << "\nPlease select one of my many functions:\n 1 = do a basic sum (addition, subtraction, multiplication or division) \n 2 = calculate the intercept of a line \n 3 = solve a quadratic equation \n 4 = calculate the size of a 3-vector \n 5 = calculate the size of a 4-vector \n 6 = calculate the invariant mass of two particles \n 7 = swap the values of two numbers \n 8 = impliment a bubble sort on a 5 element array \n q = quit program and return to the command line" << std::endl;
    std::cin >> choice; // operator input
  }

}

///////////////////////////////////////////////////////////////////





