#ifndef PARTICLE_HPP
#define PARTICLE_HPP
#include "../ThreeVec/ThreeVec.hpp"
#include "../FourVec/FourVec.hpp"

class Particle {
public:
  //constructors
  Particle() {m_mass=0;m_momentum=0;m_PDG_code=0;}
  Particle(const int PDGCode, const double Mass);
  Particle(const int PDGCode, const double Mass, const ThreeVector& Momentum);
  Particle(const int PDGCode, const double Mass, const double px, const double py, const double pz);
  Particle(const Particle& other);

  // public functions
  Particle& operator=(const Particle& rhs);

  double getEnergy();
  FourVector& GetFourMomentum();
  double GetMagMomentum();
  double GetMassGeV();
  double GetPDGCode();
  ThreeVector& GetThreeMomentum();

  
  void SetMass(double mass);
  void SetPDGCode(int PDGCode);
  void SetThreeMomentum(ThreeVector& v);
  void SetThreeMomentum(double px, double py, double pz);

private:
  // member variables
  double m_mass;
  FourVector m_momentum;
  int m_PDG_code;

};

#endif // FOURVEC_HPP
