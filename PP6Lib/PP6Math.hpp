#ifndef PP6CALCULATOR_PP6MATH_HH
#define PP6CALCULATOR_PP6MATH_HH

//////////////////////////// FUNCTION DECLARATIONS ////////////////////
int day1(); // different functions to access work done on different days
int day2();
int day3();

void simplesums(); // main functions
void intercept();
void QEsolver();
void threevector();
double threevectorcalc(double x, double y, double z);
void fourvector();
double fourvectorcalc(double t, double x, double y, double z);
void invmass();
void sort();
void swap(double& tempA,double& tempB);
void input(double& inputvar);
void intinput(int& inputvar);
void arrayfn();
void bubblesort(double *array,double *index1,double *index2, int size);
void RandomParticles();
double stddev(double *array,double N,double mean);
void readingfiles();
void zboost();
void zboostcalc(double z, double t, double B, double& z1, double& t1);
void LorentzFourVec();

double addition(double a,double b); // simple maths functions
double subtraction(double a,double b);
void multiplication(double a,double b,double *answer);
bool division(double a,double b, double *answer);

#endif // PP6CLACULATOR_PP6MATH_HH
