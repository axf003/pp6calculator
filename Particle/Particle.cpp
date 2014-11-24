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

double Particle::GetEnergy() {
  //  FourVector v4 = GetFourMomentum();
  //  ThreeVector v3 = v4.GetThreeVector();
  double E = sqrt( (m_mass)*(m_mass) + (m_momentum.m_x)*(m_momentum.m_x) + (m_momentum.m_Y)*(m_momentum.m_y) + (m_momentum.m_z)*(m_momentum.m_z) );
  return E;
}

FourVector& Particle::GetFourMomentum() {
  FourVector v(Particle::GetEnergy(),m_momentum.m_x,m_momentum.m_y,m_momentum.m_z);
  return v;
}

int Particle::GetPDGCode() {
  return m_PDG_code;
}

double Particle::GetMassGeV() {
  return m_mass;
}

double Particle::GetMagMomentum() {
  //  ThreeVector m = Particle::GetThreeMomentum();
  //  return m.ThreeVector::lengthcalc() const&;
  return sqrt( (m_momentum.m_x)*(m_momentum.m_x) + (m_momentum.m_Y)*(m_momentum.m_y) + (m_momentum.m_z)*(m_momentum.m_z) );
}

ThreeVector& Particle::GetThreeMomentum() {
  ThreeVector v(m_momentum.m_x,m_momentum.m_y,m_momentum.m_z);
  return v;
}

void Particle::SetMass(double mass) {
  m_mass = mass;
}

void Particle::SetThreeMomentum(double px, double py, double pz) {
  m_momentum.m_x = px;
  m_momentum.m_y = py;
  m_momentum.m_z = pz;
}

void Particle::SetThreeMomentum(ThreeVector& v) {
  m_momentum = v;
}

void Particle::SetPDGCode(int PDGCode) {
  m_PDG_code = PDGCode;
}

Particle& operator=(const Particle& rhs) {
  if(&rhs != this) {
    m_mass = rhs.m_mass;
    m_momentum = rhs.m_momentum;
    m_PDG_code = rhs.m_PDG_code;
  }
  return *this;
}

