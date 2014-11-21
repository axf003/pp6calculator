// ThreeVec.cpp
#include "ThreeVec.hpp"
#include "../PP6Lib/PP6Math.hpp"

#include <iostream>
#include <limits>
#include <cmath>
#include <cstdlib>


ThreeVector::ThreeVector(const double x, const double y, const double z)
  : m_x(x),m_y(y),m_z(z)
{m_length=lengthcalc();}

ThreeVector::ThreeVector(const ThreeVector& other)
  : m_x(other.m_x), m_y(other.m_y), m_z(other.m_z)
{}

ThreeVector* createThreeVec() {
  return new ThreeVector;
}

void destroyThreeVec(ThreeVector *&v) {
  if(v) {
    delete v;
    v = 0;
  }
}

double ThreeVector::GetX() {
  return m_x;
}

double ThreeVector::GetY() {
  return m_y;
}

double ThreeVector::GetZ() {
  return m_z;
}

void ThreeVector::SetX(double X) {
  m_x=X;
}

void ThreeVector::SetY(double Y) {
  m_y=Y;
}

void ThreeVector::SetZ(double Z) {
  m_z=Z;
}

double ThreeVector::lengthcalc() const {
  //  std::cout << "test B";
  return (m_x*m_x + m_y*m_y + m_z*m_z);
}

double ThreeVector::length() const {
  //  std::cout << "test A";
  return m_length;
}

ThreeVector& ThreeVector::operator+=(const ThreeVector& rhs) {
  m_x += rhs.m_x;
  m_y += rhs.m_y;
  m_z += rhs.m_z;
  return *this;
}

ThreeVector& ThreeVector::operator-=(const ThreeVector& rhs) {
  m_x -= rhs.m_x;
  m_y -= rhs.m_y;
  m_z -= rhs.m_z;
  return *this;
}

ThreeVector& ThreeVector::operator*=(const ThreeVector& rhs) {
  m_x *= rhs.m_x;
  m_y *= rhs.m_y;
  m_z *= rhs.m_z;
  return *this;
}

ThreeVector& ThreeVector::operator/=(const ThreeVector& rhs) {
  m_x /= rhs.m_x;
  m_y /= rhs.m_y;
  m_z /= rhs.m_z;
  return *this;
}

ThreeVector& ThreeVector::operator=(const ThreeVector& rhs) {
  if(&rhs != this) {
    m_x = rhs.m_x;
    m_y = rhs.m_y;
    m_z = rhs.m_z;
  }
  return *this;
}

ThreeVector operator+(const ThreeVector lhs, const ThreeVector rhs) {
  ThreeVector temp(lhs);
  temp+=rhs;
  return temp;
}
