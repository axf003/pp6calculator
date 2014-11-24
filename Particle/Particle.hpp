#ifndef PARTICLE_HPP
#define PARTICLE_HPP
#include "../ThreeVec/ThreeVec.hpp"
#include "../FourVec/FourVec.hpp"

class Particle {
public:
  //constructors
   Particle() {m_PDG_code=0;m_mass=0;SetThreeMomentum(0.0,0.0,0.0);}
  // Particle() {m_PDG_code=0;m_mass=0;m_px=0;m_py=0;m_pz=0;}
  Particle(const int PDGCode, const double Mass);
  //  Particle(const int PDGCode, const double Mass, const ThreeVector& Momentum);
  Particle(const int PDGCode, const double Mass, const double px, const double py, const double pz);
  Particle(const Particle& other);

  // public functions

  Particle& operator=(const Particle& rhs);

  double GetEnergy();//
  FourVector GetFourMomentum();//
  double GetMagMomentum();//
  double GetMassGeV();//
  int GetPDGCode();//
  ThreeVector GetThreeMomentum();//

  
  void SetMass(double mass);//
  void SetPDGCode(int PDGCode);//
  void SetThreeMomentum(ThreeVector& v);//
  void SetThreeMomentum(double px, double py, double pz);//
 
private:
  // member variables
  int m_PDG_code;
  double m_mass;
  FourVector m_momentum;
  //  double m_px;
  //  double m_py;
  //  double m_pz;

};



#endif // PARTICLE_HPP
