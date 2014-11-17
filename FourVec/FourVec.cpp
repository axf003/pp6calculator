// FourVec.cpp
#include "FourVec.hpp"
#include "PP6Math.hpp"

#include <iostream>
#include <limits>
#include <cmath>
#include <cstdlib>


FourVector::FourVector(const double t, const double x, const double y, const double z)
  : m_t(t),m_x(x),m_y(y),m_z(z)
{m_interval=intervalcalc();}

FourVector::FourVector(const FourVector& other)
  : m_t(other.m_t), m_x(other.m_x), m_y(other.m_y), m_z(other.m_z)
{}

FourVector* createFourVec() {
  return new FourVector;
}

void destroyFourVec(FourVector *&v) {
  if(v) {
    delete v;
    v = 0;
  }
}

/*void FourVector::setFourVec(double t,double x,double y,double z){
    m_t = t;
    m_x = x;
    m_y = y;
    m_z = z;
    }*/

void FourVector::boost(double B) {
  double gamma = 1/(1-B*B);
  double originalz = m_z;
  double originalt = m_t;
  m_z = gamma*(-B*originalt + originalz);
  m_t = gamma*(originalt - B*originalz);
  std::cout << "\nNew boosted four-vec is (" << m_t << "," << m_x << "," << m_y << "," << m_z << ")\n";
}

double FourVector::intervalcalc() const {
  //  std::cout << "test B";
  return (m_t*m_t - m_x*m_x - m_y*m_y - m_z*m_z);
}

double FourVector::interval() const {
  //  std::cout << "test A";
  return m_interval;
}

void FourVector::PMequals(char PlusorMinus) {
  double t=0,x=0,y=0,z=0;

  if (PlusorMinus == 'p'){
  std::cout << "We will now input the second vector, of form (t,x,y,z), that we want to add\nInput t:\n";
  }
  if (PlusorMinus == 'm'){
  std::cout << "We will now input the second vector, of form (t,x,y,z), that we want to subtract\nInput t:\n";
  }
  input(t);
  std::cout << "\nInput x:\n";
  input(x);
  std::cout << "\nInput y:\n";
  input(y);
  std::cout << "\nInput z:\n";
  input(z);
  FourVector vadd(t,x,y,z);

  FourVector vanswer(0,0,0,0);

  if (PlusorMinus == 'p'){
  vanswer.m_t = m_t + vadd.m_t;
  vanswer.m_x = m_x + vadd.m_x;
  vanswer.m_y = m_y + vadd.m_y;
  vanswer.m_z = m_z + vadd.m_z;
  }
  else if (PlusorMinus == 'm'){
  vanswer.m_t = m_t - vadd.m_t;
  vanswer.m_x = m_x - vadd.m_x;
  vanswer.m_y = m_y - vadd.m_y;
  vanswer.m_z = m_z - vadd.m_z;
  }
  
  std::cout << "\nAnswer four-vec is (" << vanswer.m_t << "," << vanswer.m_x << "," << vanswer.m_y << "," << vanswer.m_z << ")\n";
}
