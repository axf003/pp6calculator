#include <iostream>
#include <limits>
#include <cmath>

void simplesums();
void intercept();
void QEsolver();

double addition(double a,double b);
double subtraction(double a,double b);
double multiplication(double a,double b);
double division(double a,double b);














int main () {

  char choice;

  std::cout << "\n \nHello, my name is Cassie (short for Casio). What would you like to do?\nPlease select one of my many functionalities:\n 1 = do a basic sum (addition, subtraction, multiplication or division) \n 2 = calculate the intercept of a line \n 3 = solve a quadratic equation \n q = quit program and return to the boring command line" << std::endl;

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

    else if (choice == 'q') {  // checks for quitting
      std::cout << "\nI hope to see you soon\n" << std::endl;
      return 0;
    }
 
    else {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    std::cout << "\nPlease select one of my many functionalities:\n 1 = do a basic sum (addition, subtraction, multiplication or division) \n 2 = calculate the intercept of a line \n q = quit program and return to the boring command line" << std::endl;
    std::cin >> choice; // operator input
  }

}














void simplesums() {
  double a,b;
  char op;

  ///////////// Input 1st number //////////////
  std::cout << "Input a number: " << std::endl;
  std::cin >> a;
  while (!std::cin){
    std::cout << "Incorrect user input! Please input a number:" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cin >> a;
  }


  std::cout << "\n Input an operation: \n a = addition \n s = subtraction \n m = multiplication \n d = division \n q = quit program!" << std::endl;
  std::cin >> op; // operator input
  while (std::cin){
    //////// Functions ////////
    if (op == 'a')  break;    
    else if (op == 's')  break;
    else if (op == 'm')  break;   
    else if (op == 'd')  break;
    
    else if (op == 'q') {  // checks for quitting
      std::cout << "\nGoodbye\n" << std::endl;
      break;
    }
 
    else {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    std::cout << "\n Input an operation: \n a = addition \n s = subtraction \n m = multiplication \n d = division \n q = quit program! \n What would you like to do?" << std::endl;
    std::cin >> op; // operator input
  }

  ///////////// Input 2nd number /////////////
  std::cout << "Input another number: " << std::endl;
  std::cin >> b;
  while (!std::cin){
    std::cout << "Incorrect user input! Please input a number:" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cin >> b;
  }

  if (op == 'a') {
    std::cout << a << " + " << b << " = " << addition(a,b) << std::endl; 
  }

  else if (op == 's') {
    std::cout << a << " - " << b << " = " << subtraction(a,b) << std::endl; 
  }

  else if (op == 'm') {
    std::cout << a << " x " << b << " = " << multiplication(a,b) << std::endl; 
  }

  else if (op == 'd') {
    std::cout << a << " / " << b << " = " << division(a,b) << std::endl; 
  }

  else {
    std::cout << "Sorry, something has gone wrong. Please try again." << std::endl;
  }

}






void intercept() {
  double c, m;

  std::cout << "Welcome to the line intercept calculator. This program will consider the straight line:\n y=mx+c.\nPlease input a gradient for your line: " << std::endl;
 
  ///////////// Input gradient number //////////////
  std::cin >> m;
  while (!std::cin){
    std::cout << "Incorrect user input! Please input a number:" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cin >> m;
  }

  ///////////// Input intercept number //////////////
  std::cout << "Now please input a y-intercept for your line: " << std::endl;
  std::cin >> c;
  while (!std::cin){
    std::cout << "Incorrect user input! Please input a number:" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cin >> c;
  }

  std::cout << "The x-intercept of the line y=" << m << "x+" << c << " is " << division(c,m) << std::endl;

}







void QEsolver() {

  double a,b,c,x,numerator1,numerator2,denominator,squareroot,root1,root2;

  std::cout << "Welcome to the quadratic equation solver. This program will consider a quadratic equation of the form: y = a(x^2) + b(x) + c.\nPlease input a value for a: " << std::endl;

  std::cin >> a; // input a
  while (!std::cin){
    std::cout << "Incorrect user input! Please input a number:" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cin >> a;
  }

std::cout << "\nPlease input a value for b: " << std::endl;

 std::cin >> b; // input b
  while (!std::cin){
    std::cout << "Incorrect user input! Please input a number:" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cin >> b;
  }

std::cout << "\nPlease input a value for c: " << std::endl;

 std::cin >> c; // input c
  while (!std::cin){
    std::cout << "Incorrect user input! Please input a number:" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cin >> c;
  }

  denominator = 2*a;
  squareroot = b*b - 4*a*c;
  if (squareroot < 0) {
    std::cout << "\nSorry, no real roots!\n";
  }
  else {
    numerator1 = (-1)*b + sqrt(squareroot);
    numerator2 = (-1)*b - sqrt(squareroot);
    root1 = division(numerator1,denominator);
    root2 = division(numerator2,denominator);
    std::cout << "The roots for your equation (y = " << a << "(x^2) + " << b << "(x) + " << c << ") are " << root1 << " and " << root2 << ".\n";
  }

}







///////// Operator functions //////////
double addition(double a,double b){
  return a+b;
}

double subtraction(double a,double b){
  return a-b;
}

double multiplication(double a,double b){
  return a*b;
}

double division(double a,double b){
  return a/b;
}





