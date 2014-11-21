// FourVec.cpp
#include "FourVec.hpp"
#include "../ThreeVec/ThreeVec.hpp"
#include "PP6Math.hpp"
#include "../ThreeVec/ThreeVec.hpp"


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

double FourVector::GetT() {
  return m_t;
}

double FourVector::GetX() {
  return m_x;
}

double FourVector::GetY() {
  return m_y;
}

double FourVector::GetZ() {
  return m_z;
}

ThreeVector FourVector::GetThreeVector() {
  ThreeVector v(m_x,m_y,m_z);
  return v;
}

void FourVector::SetT(double T) {
  m_t=T;
}

void FourVector::SetX(double X) {
  m_x=X;
}

void FourVector::SetY(double Y) {
  m_y=Y;
}

void FourVector::SetZ(double Z) {
  m_z=Z;
}

void FourVector::SetThreeVector(ThreeVector& v){
  m_x=v.GetX();
  m_y=v.GetY();
  m_z=v.GetZ();
}

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

FourVector& FourVector::operator+=(const FourVector& rhs) {
  m_t += rhs.m_t;
  m_x += rhs.m_x;
  m_y += rhs.m_y;
  m_z += rhs.m_z;
  return *this;
}

FourVector& FourVector::operator-=(const FourVector& rhs) {
  m_t -= rhs.m_t;
  m_x -= rhs.m_x;
  m_y -= rhs.m_y;
  m_z -= rhs.m_z;
  return *this;
}

FourVector& FourVector::operator*=(const FourVector& rhs) {
  m_t *= rhs.m_t;
  m_x *= rhs.m_x;
  m_y *= rhs.m_y;
  m_z *= rhs.m_z;
  return *this;
}

FourVector& FourVector::operator/=(const FourVector& rhs) {
  m_t /= rhs.m_t;
  m_x /= rhs.m_x;
  m_y /= rhs.m_y;
  m_z /= rhs.m_z;
  return *this;
}

FourVector& FourVector::operator=(const FourVector& rhs) {
  if(&rhs != this) {
    m_t = rhs.m_t;
    m_x = rhs.m_x;
    m_y = rhs.m_y;
    m_z = rhs.m_z;
  }
  return *this;
}

FourVector operator+(const FourVector lhs, const FourVector rhs) {
  FourVector temp(lhs);
  temp+=rhs;
  return temp;
}

