// Particle.cpp
#include "../ThreeVec/ThreeVec.hpp"
#include "../FourVec/FourVec.hpp"
#include "PP6Math.hpp"

#include <iostream>
#include <limits>
#include <cmath>
#include <cstdlib>


//constructors
Particle::Particle(const int PDGCode, const double Mass)
  : m_mass(Mass),m_PDG_code(PDGCode)
{}

Particle::Particle(const int PDGCode, const double Mass, const ThreeVector& Momentum)
: m_mass(Mass),m_PDG_code(PDGCode),m_momentum(Momentum)
{}

Particle::Particle(const int PDGCode, const double Mass, const double px, const double py, const double pz)
  : m_mass(Mass),m_PDG_code(PDGCode),m_momentum.m_x(px),m_momentum.m_y(py),m_momentum.m_z(pz)
{}

Particle::Particle(const Particle& other)
: m_mass(other.m_mass),m_PDG_code(other.m_PDG_code),m_momentum(other.m_momentum)
{}

Particle* createParticle() {
  return new Particle;
}

void destroyParticle(Particle *&p) {
  if(p) {
    delete v;p
    p = 0;
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


Particle& operator=(const Particle& rhs) {
  if(&rhs != this) {
    m_mass = rhs.m_mass;
    m_momentum = rhs.m_momentum;
    m_PDG_code = rhs.m_PDG_code;
  }
}


ThreeVector& ThreeVector::operator=(const ThreeVector& rhs) {
  if(&rhs != this) {
    m_x = rhs.m_x;
    m_y = rhs.m_y;
    m_z = rhs.m_z;
  }
  return *this;
}
