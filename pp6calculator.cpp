#include "PP6Math.hpp"

#include <iostream>
#include <limits>
#include <cmath>



/////////////////////// MAIN ////////////////////////////////////////
int main () {
  char choice;
  std::cout << "\nWelcome to the pp6 calculator. Pick a day's functions to use:\n1 = day 1's functions\n2 = day 2's functions\n'q' to quit program and return to the command line" << std::endl;
  std::cin >> choice;

  while (std::cin){
    //////// List of days ////////
    if (choice == '1') {
      day1();
      break;
    }
    else if (choice == '2') {
      day2();
      break;
    }
    else if (choice == 'q') { // checks for quitting
      std::cout << "\nI hope to see you soon\n" << std::endl;
      return 0;
    }
    else {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    std::cout <<"Press:\n'1' to access day 1's functions\n'2' to access day 2's functions\n'q' to quit program and return to the command line"<< std::endl;
    std::cin >> choice; // operator input
  }

}
///////////////////////////////////////////////////////////////////



