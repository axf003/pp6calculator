#include "PP6Math.hpp"
#include "../FileReader/FileReader.hpp"
#include "../FourVec/FourVec.hpp"
#include "../ThreeVec/ThreeVec.hpp"
#include "../Particle/Particle.hpp"


#include <iostream>
#include <limits>
#include <cmath>
#include <cstdlib>



/////////////////////// FUNCTION DEFINITIONS /////////////////////////////////////


int day1(){ // Functions developed on day 1

  char choice;
  std::cout << "\nWhat would you like to do?\n 1 = do a basic sum (addition, subtraction, multiplication or division) \n 2 = calculate the intercept of a line \n 3 = solve a quadratic equation \n 4 = calculate the size of a 3-vector \n 5 = calculate the size of a 4-vector \n 6 = calculate the invariant mass of two particles \n q = quit program and return to the command line" << std::endl;
  std::cin >> choice;

  while (true){
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

    else if (choice == 'q') { // checks for quitting
      std::cout << "\nI hope to see you soon\n" << std::endl;
      return 0;
    }
    else {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    std::cout << "\nPlease select a function:\n 1 = do a basic sum (addition, subtraction, multiplication or division) \n 2 = calculate the intercept of a line \n 3 = solve a quadratic equation \n 4 = calculate the size of a 3-vector \n 5 = calculate the size of a 4-vector \n 6 = calculate the invariant mass of two particles \n q = quit program and return to the command line" << std::endl;
    std::cin >> choice; // operator input
  }

  return 0;
}



int day2(){ // Functions developed on day 2

  char choice;
  std::cout << "\nPlease select a function:\n 1 = swap the values of two numbers \n 2 = impliment a bubble sort on an n-element array \n 3 = Generate some random particles \n 4 = Read in data on some muons and calculate the highest invariant masses possible \n q = quit program and return to the command line\n" << std::endl;
  std::cin >> choice;

  while (true){
    //////// Functions ////////
    if (choice == '1') {
      sort();
      break;
    }
    else if (choice == '2') {
      arrayfn();
      break;
    }
    else if (choice == '3') {
      RandomParticles();
      break;
    }
    else if (choice == '4') {
      readingfiles();
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
    std::cout << "\nPlease select a function:\n 1 = swap the values of two numbers \n 2 = impliment a bubble sort on an n-element array \n 3 = Generate some random particles \n 4 = Read in data on some muons and calculate the highest invariant masses possible \n q = quit program and return to the command line\n" << std::endl;
    std::cin >> choice; // operator input
  }

  return 0;
}


int day3(){ // Functions developed on day 2

  char choice;
  std::cout << "\nPlease select a function:\n 1 = Apply a lorentz boost to a 4-vector \n 2 = Apply a lorentz boost to a 4-vector using new class style and calculate the space-time interval\n 3 = Add/Subtract two four-vectors together \n q = quit program and return to the command line\n" << std::endl;
  std::cin >> choice;

  while (true){
    //////// Functions ////////
    if (choice == '1') {
      zboost();
      break;
    }

    if (choice == '2') {
      LorentzFourVec();
      break;
    }

    /*    if (choice == '3') {
      PMOneVector();
      break;
      }*/

    else if (choice == 'q') { // checks for quitting
      std::cout << "\nI hope to see you soon\n" << std::endl;
      return 0;
    }
    else {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    std::cout << "\nPlease select a function:\n 1 = Apply a lorentz boost to a 4-vector \n 2 = Apply a lorentz boost to a 4-vector using new struct style and calculate the space-time interval\n 3 = Add/Subtract two four-vectors together \n q = quit program and return to the command line\n" << std::endl;
    std::cin >> choice; // operator input
  }

  return 0;
}







/////////////////////// INPUT CHECKS ////////////////////////////////////////////

void input(double& inputvar) { // checks if an input was a double
  std::cin >> inputvar;
  while (!std::cin){
    std::cout << "Incorrect user input! Please input a number:" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cin >> inputvar;
  }
}
void intinput(int& intinputvar) { // checks if an input was an integer
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

  while (true){ // Which standard mathematical operation has the user chosen?
    //////// Functions ////////
    if (op == 'a') break;
    else if (op == 's') break;
    else if (op == 'm') break;
    else if (op == 'd') break;
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
  if (op == 'a') { // Perform the operations
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
    if (division(a,b,answer)==true) std::cout << a << " / " << b << " = " << *answer << std::endl;
  }
  else {
    std::cout << "Sorry, something has gone wrong. Please try again." << std::endl;
  }
  delete answer; // delete the answer pointer
}


///////////////////////////////////////////////////////////////////
////////////////////// INTERCEPT /////////////////////////////////////////////

void intercept() {
  double c, m,*intercept;
  intercept = new double;
  std::cout << "Welcome to the line intercept calculator. This program will consider the straight line:\n y=mx+c.\nPlease input a gradient for your line: " << std::endl;
  input(m); // input gradient
  std::cout << "Now please input a y-intercept for your line: " << std::endl;
  input(c); // ipinpuintercept
  if (division(c,m,intercept)==true) std::cout << "The x-intercept of the line y=" << m << "x+" << c << " is " << *intercept << std::endl;
  delete intercept;
}


///////////////////////////////////////////////////////////////////
//////////////////// QUADRATIC EQUATION SOLVER ///////////////////////////////////////////////

void QEsolver() {
  double a,b,c,numerator1,numerator2,denominator,squareroot,*root1,*root2; // a b and c arethe quadratic variables
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
  double a,b,c;
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

double threevectorcalc(double x, double y, double z) { // calculates the size of a thre vector
  return sqrt(x*x+y*y+z*z);
}


///////////////////////////////////////////////////////////////////
/////////////////// FOUR VECTOR FUNCTION ////////////////////////////////////////////////

void fourvector() {
  double a,b,c,d;
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

double fourvectorcalc(double t, double x, double y, double z) { // calculates the size of a four vector
  return fabs(sqrt(t*t-x*x-y*y-z*z));
}


///////////////////////////////////////////////////////////////////
///////////////////// INVARIANT MASS //////////////////////////////////////////////

void invmass() {
  double E1,px1,py1,pz1,E2,px2,py2,pz2,p1,p2,mass; // 1's and 2's refer to particle 1 and 2
  while (true) {
    std::cout << "\nWelcome to the invariant mass of two particles mode! \nWe will start by inputting your first particle's four momentum in the form:\n (E,px,py,pz)\nPlease input the energy (GeV) of your first particle:\n";
    std::cin >> E1;
    while (!std::cin || E1 <= 0){ // Energy must be positive
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
    if (E1<p1) { // Energy must be greater than momentum
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
    mass = fourvectorcalc((E1+E2),(px1+px2),(py1+py2),(pz1+pz2));
    std::cout << "\nThe invariant mass of the two particles with 4-momenta of [" << E1 << "," << px1 << "," << py1 << "," << pz1 << "] and [" << E2 << "," << px2 << "," << py2 << "," << pz2 << "] is " << mass << "GeV" << std::endl;
    break;
  }
}


///////////////////////////////////////////////////////////////////
//////////////////// SORT FUNCTION ///////////////////////////////////////////////

void sort() { // user can input two numbers that they want to input to the swap function
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

void swap(double& tempA, double& tempB) { // swaps two numbers
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
  double array[10000]; // use 10000 to to create a large array that will always be bigger than 'int size' as cannot input a variable into an array
  double *p_array = array;
  double index[10000];
  double *p_index = index;
  for (int i=0; i<size; i++) {
    std::cout << "Please input element number " << i << " of your " << size << " array elements\n";
    input(array[i]);
    index[i] = i;
  }

  double dummyarray[10000];
  //  for(int i=0; i<size;i++)dummyarray[i]=0;
  double *p_dummyarray = dummyarray;
  bubblesort(p_array,p_index,p_dummyarray,size);
  std::cout << "\nYour array has now been ordered to [";
  for (int i=0;i<size;i++) {
    std::cout << p_array[i];
    if (i+1<size) std::cout << ",";
  }
  std::cout << "]\n";
}


///////////////////////////////////////////////////////////////////
////////////////// BUBBLE SORT ALGORITHM /////////////////////////////////////////////////

void bubblesort(double *array,double *index1,double *index2,int size) { // cycles through and swaps vaalue i with i+1 if  i+1 is larger
  int n_changes;
 
  while(n_changes!=0) {
    n_changes = 0;
    for (int i=0;i<size-1;i++) {
      if (array[i] < array[i+1]) {
	swap(array[i],array[i+1]);
	swap(index1[i],index1[i+1]); // index keeps track of the ordering of the new array relative to the old one
	swap(index2[i],index2[i+1]);
	n_changes++;
      }
    }
  }


  /*  std::cout << "\nEnergy ordering is [";
  for (int i=0;i<size;i++) {
    std::cout << array[i];
    if (i+1<size) std::cout << " , ";
  }  
  std::cout << "]\n";*/


  /*  std::cout << "\nIndex ordering is [";
  for (int i=0;i<size;i++) {
    std::cout << index[i];
    if (i+1<size) std::cout << ",";
  }  
  std::cout << "]\n";*/
}


/////////////////////////////////////////////////////////////////////
//////////////////////////// RANDOM ENERGIES AND MOMENTA ////////////////////////

void RandomParticles() {
  double nparticles = 100.0; // how many particles?
  double Etotal = 0, Ebar = 0;
  double arraypx[100];
  double arraypy[100];
  double arraypz[100];
  double arrayE[100];
  double *p_arrayE = arrayE;
  double mom=0;

  double index[10000];
  double *p_index = index;

  double mass = rand()%100; // generate random mass
  std::cout << "\nRandom mass determined to be: " << mass << "GeV\n";

  for(int i=0; i< nparticles ; i++){ // loop to fill momenta
    index[i] = i;
    arraypx[i] = rand()%100; // create random momenta
    arraypy[i] = rand()%100;
    arraypz[i] = rand()%100;
    mom = threevectorcalc(arraypx[i],arraypy[i],arraypz[i]);
    arrayE[i] = sqrt(mom*mom + mass*mass);
    Etotal += arrayE[i];
    std::cout << "\nParticle created with four vector [" <<  arrayE[i] << "," <<  arraypx[i] << "," <<  arraypy[i] << "," <<  arraypz[i] << "]";
  }
  Ebar = Etotal/nparticles;
  std::cout << "\n The mean energy of the random particles is " << Ebar << " GeV and the standard deviation is " << stddev(p_arrayE,nparticles,Ebar) << "GeV.\n";
  
  double dummyarray[10000]; // needed to fill arguments of bubble sort function
  double *p_dummyarray=dummyarray;
  bubblesort(p_arrayE,p_index,p_dummyarray,nparticles);
}
///////////////
/////// STANDARD DEVIATION FN
double stddev(double *array, double N, double mean) {
  double var = 0;
  double invN = 1/N; // makes program quicker thhan repeating long division multiple times
  for(int i=0; i<N; i++) {
    var += invN*(array[i]-mean)*(array[i]-mean);
  }
  return sqrt(var);
}
//////////////////////////////////////////////////////////////////////


void readingfiles() { // Function that reads in particles data file and finds muons
  int numberp=0; // p refers to positive muons
  int numberm=0; // m refers to mu minus
  double muonmass = 0.1056583715, mom=0;
  double arraypxm[1000]; // for mu-
  double arraypym[1000];
  double arraypzm[1000];
  double arrayEm[1000];
  double arraypxp[1000]; // for mu+
  double arraypyp[1000];
  double arraypzp[1000];
  double arrayEp[1000];
  double arrayNm[1000]; // event number
  double arrayNp[1000]; // event number
  Particle arrayp[1000]; // plus
  Particle arraym[1000];// minus

  double arrayInvM[1000];
  double arrayInvMindexp[1000];
  double arrayInvMindexm[1000];

  double *p_arrayInvM = arrayInvM;
  double *p_arrayInvMindexp = arrayInvMindexp;
  double *p_arrayInvMindexm = arrayInvMindexm;


  // Open the file to be read
  FileReader f("observedparticles.dat"); // file must be in build directory
  // Only process if the file is open/valid

  if (f.isValid()) {
    // Loop until out of lines
    while (f.nextLine()) {
      if (f.getFieldAsString(6) =="run4.dat" && f.getFieldAsString(2)=="mu+"){
     	Particle p(-13,muonmass,f.getFieldAsDouble(3),arraypxp[numberp],arraypxp[numberp]);
	//	arraypxp[numberp] = f.getFieldAsDouble(3);
	//	arraypyp[numberp] = f.getFieldAsDouble(4);
	//	arraypzp[numberp] = f.getFieldAsDouble(5);
      	arrayNp[numberp] = f.getFieldAsInt(1);
	//	mom = threevectorcalc(arraypxp[numberp],arraypyp[numberp],arraypzp[numberp]);
	//	arrayEp[numberp] = sqrt(mom*mom+muonmass*muonmass);
	numberp++;
      }
      if (f.getFieldAsString(6) =="run4.dat" && f.getFieldAsString(2)=="mu-"){
     	Particle p(13,muonmass,arraypxm[numberm],arraypxm[numberm],arraypxp[numberp]);
	arraypxm[numberm] = f.getFieldAsDouble(3); // reads in various parts of txt file
	arraypym[numberm] = f.getFieldAsDouble(4);
	arraypzm[numberm] = f.getFieldAsDouble(5);
       	arrayNm[numberm] = f.getFieldAsInt(1);
	mom = threevectorcalc(arraypxm[numberm],arraypym[numberm],arraypzm[numberm]);
	arrayEm[numberm] = sqrt(mom*mom+muonmass*muonmass);
	numberm++;
      }

      if (f.inputFailed()){
	break; 
      }
    }
  }
  int nmasses = 0;
  for(int i=0;i<numberp;i++){
    for(int j=0;j<numberm;j++){
      arrayInvM[nmasses] = (fourvectorcalc((arrayEp[i]+arrayEm[j]),(arraypxp[i]+arraypxm[j]),(arraypyp[i]+arraypym[j]),(arraypzp[i]+arraypzm[j])));
      arrayInvMindexp[nmasses]=arrayNp[i];
      arrayInvMindexm[nmasses]=arrayNm[j]; // need both of these as may be a different number of mu + and - that meet the criteria
      nmasses++;
    }
  }
  //  std::cout << nmasses;
  bubblesort(p_arrayInvM,p_arrayInvMindexp,p_arrayInvMindexm,nmasses);

  std::cout << "Your top 10 invariant masses are:\n";
  for(int i=0;i<10;i++){
    std::cout << p_arrayInvM[i] << "GeV, made using mu+ event number " << p_arrayInvMindexp[i] << " and mu- event number " <<  p_arrayInvMindexm[i] << "\n";
  }
}


/////////////////////////////////////////////////////////////////
/////////////////// Z-BOOST ////////////////

void zboost(){
  double x=0,y=0,z=0,t=0,B=0,z1=0,t1=0;
  std::cout << "\nFirst we will input your four-vector in the form (t,x,y,z). First input t:\n";
  input(t);
  std::cout << "\nand now x:\n";
  input(x);
  std::cout << "\nand now y:\n";
  input(y);
  std::cout << "\nand now z:\n";
  input(z);
  std::cout << "\nInput a z-velocity in verms of B (where Beta=v/c):\n";
  input(B);
  
  zboostcalc(z,t,B,z1,t1);

  std::cout << "\nYour original 4-vector was (" << t << "," << x << "," << y << "," << z << ") and when boosted in the z direction with a beta of " << B << " the new vector is (" << t1 << "," << x << "," << y << "," << z1 << ").\n";
}

void zboostcalc(double z, double t, double B, double& z1, double& t1){
  double gamma = 1/(1-B*B);
  z1 = -B*gamma*t + gamma*z;
  t1 = gamma*t - B*gamma*z;
}

/////////////////////////////////////////////////////////
/////////////// INTERVAL AND BOOST OF A FOUR_VEC

void LorentzFourVec() {
  double x=0,y=0,z=0,t=0;
  std::cout << "\nInput t:\n";
  input(t);
  std::cout << "\nInput x:\n";
  input(x);
  std::cout << "\nInput y:\n";
  input(y);
  std::cout << "\nInput z:\n";
  input(z);
  FourVector v(t,x,y,z);
  double B=0;
  std::cout << "\nInput velocity Beta:\n";
  input(B);
  v.boost(B);
  std::cout << "\nThe spacetime interval is:\n" << v.interval() << std::endl;
}



///////////////////////////////////////////////////////////////////
///////////////////////////////// OPERATOR FUNCTIONS //////////////////////////

double addition(double a,double b){
  return a+b;
}
double subtraction(double a,double b){
  return a-b;
}
void multiplication(double a,double b, double *answer){ // use pointers
  *answer = a*b;
}
bool division(double a,double b, double *answer){
  if (b==0) { // check for dividing by zero
    std::cout << "\nDiv by zero!\n";
    return false;
  }
  else {
    *answer = a/b;
    return true;
  }
}
