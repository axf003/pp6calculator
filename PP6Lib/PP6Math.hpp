#ifndef PP6CALCULATOR_PP6MATH_HH
#define PP6CALCULATOR_PP6MATH_HH

//////////////////////////// FUNCTION DECLARATIONS ////////////////////
int day1();
int day2();

void simplesums();
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
void bubblesort(double *array, int size);

double addition(double a,double b);
double subtraction(double a,double b);
void multiplication(double a,double b,double *answer);
bool division(double a,double b, double *answer);
#endif // PP6CLACULATOR_PP6MATH_HH
