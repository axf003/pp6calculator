#include "PP6Math.hpp"

#include <iostream>
#include <limits>
#include <cmath>


/////////////////////// FUNCTION DEFINITIONS /////////////////////////////////////

/////////////////////// INPUT CHECKS ////////////////////////////////////////////

void input(double& inputvar) {
  std::cin >> inputvar;
  while (!std::cin){
    std::cout << "Incorrect user input! Please input a number:" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cin >> inputvar;
  }
}


void intinput(int& intinputvar) {
  std::cin >> intinputvar;
  while (!std::cin){
    std::cout << "Incorrect user input! Please input a number:" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cin >> intinputvar;
  }
}

///////////////////////////////////////////////////////////////////






////////////////////////// SIMPLE SUMS /////////////////////////////////////////

void simplesums() {
  double a,b,*answer;
  answer = new double;
  char op;

  ///////////// Input 1st number //////////////
  std::cout << "Input a number: " << std::endl;
  input(a);


  std::cout << "\n Input an operation: \n a = addition \n s = subtraction \n m = multiplication \n d = division \n" << std::endl;
  std::cin >> op; // operator input
  while (std::cin){
    //////// Functions ////////
    if (op == 'a')  break;    
    else if (op == 's')  break;
    else if (op == 'm')  break;   
    else if (op == 'd')  break; 
    else {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    std::cout << "\n User error! Input an operation: \n a = addition \n s = subtraction \n m = multiplication \n d = division \n q = quit program! \n What would you like to do?" << std::endl;
    std::cin >> op; // operator input
  }

  ///////////// Input 2nd number /////////////
  std::cout << "Input another number: " << std::endl;
  input(b);

  if (op == 'a') {
    std::cout << a << " + " << b << " = " << addition(a,b) << std::endl; 
  }

  else if (op == 's') {
    std::cout << a << " - " << b << " = " << subtraction(a,b) << std::endl; 
  }

  else if (op == 'm') {
    multiplication(a,b,answer);
      std::cout << a << " x " << b << " = " << " : " << *answer << std::endl; 
  }

  else if (op == 'd') {
    if (division(a,b,answer)==true)    std::cout << a << " / " << b << " = " << *answer << std::endl; 
  }

  else {
    std::cout << "Sorry, something has gone wrong. Please try again." << std::endl;
  }
  delete answer;

}
///////////////////////////////////////////////////////////////////







////////////////////// INTERCEPT /////////////////////////////////////////////

void intercept() {
  double c, m,*intercept;
  intercept = new double;

  std::cout << "Welcome to the line intercept calculator. This program will consider the straight line:\n y=mx+c.\nPlease input a gradient for your line: " << std::endl;
 
  ///////////// Input gradient number //////////////
  input(m);

  ///////////// Input intercept number //////////////
  std::cout << "Now please input a y-intercept for your line: " << std::endl;
  input(c);
  if (division(c,m,intercept)==true)  std::cout << "The x-intercept of the line y=" << m << "x+" << c << " is " << *intercept << std::endl;

  delete intercept;
}

///////////////////////////////////////////////////////////////////







//////////////////// QUADRATIC EQUATION SOLVER ///////////////////////////////////////////////


void QEsolver() {

  double a,b,c,x,numerator1,numerator2,denominator,squareroot,*root1,*root2;
  root1 = new double;
  root2 = new double;

  std::cout << "Welcome to the quadratic equation solver. This program will consider a quadratic equation of the form: y = a(x^2) + b(x) + c.\nPlease input a value for a: " << std::endl;

  input(a);

  std::cout << "\nPlease input a value for b: " << std::endl;

  input(b);

  std::cout << "\nPlease input a value for c: " << std::endl;

  input(c);

  denominator = 2*a;
  squareroot = b*b - 4*a*c;
  if (squareroot < 0) {
    std::cout << "\nSorry, no real roots!\n";
  }
  else {
    numerator1 = (-1)*b + sqrt(squareroot);
    numerator2 = (-1)*b - sqrt(squareroot);
    if (division(numerator1,denominator,root1)==true && division(numerator2,denominator,root2)==true) {
      std::cout << "The roots for your equation (y = " << a << "(x^2) + " << b << "(x) + " << c << ") are " << *root1 << " and " << *root2 << ".\n";
    }
  }
  delete root1;
  delete root2;
}

///////////////////////////////////////////////////////////////////








//////////////////// THREE VECTOR FUNCTION ///////////////////////////////////////////////


void threevector() {
  double a,b,c,size;
  
  std::cout << "Welcome to the 3-vector mode! Please input the first of the three components:\n";
  
  input(a);
  
  std::cout << "Please input the second of the three components:\n";
  
  input(b);

  
  std::cout << "Please input the third of the three components:\n";

  input(c);

  threevectorcalc(a,b,c);

  std::cout << "The size of your vector (" << a << "," << b << "," << c << ") is " << threevectorcalc(a,b,c) << std::endl;

}
///////////////////////////////////////////////////////////////////

////////////////////// THREE VEC CALCULATION/////////////////////////////////////////////

double threevectorcalc(double x, double y, double z) {
  return sqrt(x*x+y*y+z*z);
}
///////////////////////////////////////////////////////////////////









/////////////////// FOUR VECTOR FUNCTION ////////////////////////////////////////////////


void fourvector() {
  double a,b,c,d,size;
  
  std::cout << "Welcome to the 4-vector mode! This function uses the (+,-,-,-) metric. Please input the first of the four components:\n";
  
  input(a);
  
  std::cout << "Please input the second of the four components:\n";
  
  input(b);

  
  std::cout << "Please input the third of the four components:\n";

  input(c);

  std::cout << "Please input the final component:\n";

  input(d);

  std::cout << "The length of your vector [" << a << "," << b << "," << c << "," << d << "] is " << fourvectorcalc(a,b,c,d) << std::endl;

}
///////////////////////////////////////////////////////////////////

//////////////// FOUR VEC CALCULATION///////////////////////////////////////////////////

double fourvectorcalc(double t, double x, double y, double z) {
  return fabs(sqrt(t*t-x*x-y*y-z*z));
}

///////////////////////////////////////////////////////////////////











///////////////////// INVARIANT MASS //////////////////////////////////////////////

void invmass() {
  double E1,px1,py1,pz1,E2,px2,py2,pz2,p1,p2,mass;
  
  while (std::cin) {
  std::cout << "\nWelcome to the invariant mass of two particles mode! \nWe will start by inputting your first particle's four momentum in the form:\n (E,px,py,pz)\nPlease input the energy (GeV) of your first particle:\n";
  std::cin >> E1;
  while (!std::cin || E1 <= 0){
    std::cout << "Incorrect user input! Please input a number greater than zero:" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cin >> E1;
  }
  
  
  std::cout << "Please input the x-momentum (GeV) of your first particle:\n";
  
  input(px1);

  std::cout << "Please input the y-momentum (GeV) of your first particle:\n";

  input(py1);

  std::cout << "Please input the z-momentum (GeV) of your first particle\n";

  input(pz1);

  std::cout << "\nVector 1 = [" << E1 << "," << px1 << "," << py1 << "," << pz1 << "]" << std::endl;



 p1 = sqrt(px1*px1+py1*py1+pz1*pz1);
  if (E1<p1) {
    std::cout << "\nYour particle's momentum is greater than it's energy... this seems a little suspicious. Why not try again?\n" << std::endl;
    continue;
  }


  //// ON TO SECOND PARTICLE




  std::cout << "\nWe will now input your second particle's four momentum in the form (E,px,py,pz).\nPlease input the energy (GeV) of your second particle:\n";
  std::cin >> E2;
  while (!std::cin || E2 <= 0){
    std::cout << "Incorrect user input! Please input a number greater than zero:" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cin >> E2;
  }
  
  
  std::cout << "Please input the x-momentum (GeV) of your second particle:\n";
  
  input(px2);
  
  std::cout << "Please input the y-momentum (GeV) of your second particle:\n";

  input(py2);

  std::cout << "Please input the z-momentum (GeV) of your second particle\n";

  input(pz2);

  std::cout << "Vector 2 = [" << E2 << "," << px2 << "," << py2 << "," << pz2 << "]\n" << std::endl;

  p2 = sqrt(px2*px2+py2*py2+pz2*pz2);
  if (E2<p2) {
    std::cout << "\nYour particle's momentum is greater than it's energy... this seems a little suspicious. Why not try again?\n" << std::endl;
    continue;
  }

  mass = (E1+E2)*(E1+E1) - ((px1+px2)*(px1+px2)+(py1+py2)*(py1+py2)+(pz1+pz2)*(pz1+pz2));

    std::cout << "\nThe invariant mass of the two particles with 4-momenta of [" << E1 << "," << px1 << "," << py1 << "," << pz1 << "] and [" << E2 << "," << px2 << "," << py2 << "," << pz2 << "] is " << mass << "GeV" << std::endl;

    break;
  }
}

///////////////////////////////////////////////////////////////////









//////////////////// SORT FUNCTION ///////////////////////////////////////////////

void sort() {
  double number1, number2;

  std::cout << "Please input the first of your two numbers\n";
  input(number1);

  std::cout << "Please input the second of your two numbers\n";
  input(number2);

  std::cout << "The value of number1 was " << number1 << " and the value of number2 was " << number2 << ".\n";

  swap(number1,number2);
  std::cout << "\nYour numbers have now changed.\n\nThe value of number1 is now " << number1 << " and the value of number2 is now " << number2 << ".\n";
}
///////////////////////////////////////////////////////////////////











////////////////////// SWAP FUNCTION /////////////////////////////////////////////

void swap(double& tempA, double& tempB) {
  double x;
  x = tempA;
  tempA = tempB;
  tempB = x;
}
///////////////////////////////////////////////////////////////////










///////////////////// ARRAY SORTING FUNCTION //////////////////////////////////////////////

void arrayfn() {
  std::cout << "\nHow many elements would you like in your array?\n";
  int size;
  intinput(size);

 
  double array[size];
  double *p_array = array;

  for (int i=0; i<size; i++) {
    std::cout << "Please input element number " << i << " of your " << size << " array elements\n";
    input(array[i]);
  }

  bubblesort(p_array,size);
  
  std::cout << "\nYour array has now been ordered to [";
  for (int i=0;i<size;i++) {
    std::cout << p_array[i];
    if (i+1<size) std::cout << ",";
  }
  std::cout << "]\n";
}
///////////////////////////////////////////////////////////////////

////////////////// BUBBLE SORT ALGORITHM /////////////////////////////////////////////////

void bubblesort(double *array,int size) {
  int n_changes;
  while(n_changes!=0) {
    n_changes = 0;
    for (int i=0;i<size-1;i++) {
      if (array[i] < array[i+1]) {
	swap(array[i],array[i+1]);
	n_changes++;
      }
    }
  }
}

///////////////////////////////////////////////////////////////////






///////////////////////////////// OPERATOR FUNCTIONS //////////////////////////
double addition(double a,double b){
  return a+b;
}

double subtraction(double a,double b){
  return a-b;
}

void multiplication(double a,double b, double *answer){
  *answer = a*b;
}

bool  division(double a,double b, double *answer){
  if (b==0) {
    std::cout << "\nDiv by zero!\n";
    return false;
  }
  else {
    *answer = a/b;
    return true;
  }
}
