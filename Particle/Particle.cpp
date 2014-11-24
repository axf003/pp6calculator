// Particle.cpp
#include "../ThreeVec/ThreeVec.hpp"
#include "../FourVec/FourVec.hpp"
#include "PP6Math.hpp"
#include "../Particle/Particle.hpp"


#include <iostream>
#include <limits>
#include <cmath>
#include <cstdlib>


//constructors
Particle::Particle(const int PDGCode, const double Mass)
  : m_PDG_code(PDGCode),m_mass(Mass)
  {}

/*Particle::Particle(const int PDGCode, const double Mass, const ThreeVector& Momentum)
  : m_PDG_code(PDGCode),m_mass(Mass),m_momentum(Momentum)
  {}*/

Particle::Particle(const int PDGCode, const double Mass, const double px, const double py, const double pz)
  : m_PDG_code(PDGCode),m_mass(Mass),m_momentum(0,px,py,pz)
{}

Particle::Particle(const Particle& other)
: m_PDG_code(other.m_PDG_code),m_mass(other.m_mass),m_momentum(other.m_momentum)
{}

Particle* createParticle() {
  return new Particle;
}

void destroyParticle(Particle *&p) {
  if(p) {
    delete p;
    p = 0;
  }
  }

double Particle::GetEnergy() {
  //  FourVector v4 = GetFourMomentum();
  //  ThreeVector v3 = v4.GetThreeVector();
  double E = sqrt( (m_mass)*(m_mass) + (m_momentum.GetX())*(m_momentum.GetX()) + (m_momentum.GetY())*(m_momentum.GetY()) + (m_momentum.GetZ())*(m_momentum.GetZ()) );
  return E;
}

FourVector Particle::GetFourMomentum() {
  FourVector v(GetEnergy(),m_momentum.GetX(),m_momentum.GetY(),m_momentum.GetZ());
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
  return sqrt( (m_momentum.GetX())*(m_momentum.GetX()) + (m_momentum.GetY())*(m_momentum.GetY()) + (m_momentum.GetZ())*(m_momentum.GetZ()) );
}

ThreeVector Particle::GetThreeMomentum() {
  ThreeVector v(m_momentum.GetX(),m_momentum.GetY(),m_momentum.GetZ());
  return v;
}

void Particle::SetMass(double mass) {
  m_mass = mass;
}

void Particle::SetThreeMomentum(double px, double py, double pz) {
  m_momentum.SetX(px);
  m_momentum.SetY(py);
  m_momentum.SetZ(pz);
}

void Particle::SetThreeMomentum(ThreeVector& v) {
  m_momentum.SetX(v.GetX());
  m_momentum.SetY(v.GetY());
  m_momentum.SetZ(v.GetZ());
}

void Particle::SetPDGCode(int PDGCode) {
  m_PDG_code = PDGCode;
}

Particle& Particle::operator=(const Particle& rhs) {
  if(&rhs != this) {
    m_mass = rhs.m_mass;
    m_momentum = rhs.m_momentum;
    m_PDG_code = rhs.m_PDG_code;
  }
  return *this;
}

