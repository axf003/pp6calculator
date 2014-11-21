#ifndef FOURVEC_HPP
#define FOURVEC_HPP
#include "../ThreeVec/ThreeVec.hpp"

class FourVector {
public:
  //constructors
  FourVector() {m_t=0;m_x=0;m_y=0;m_z=0;}
  //  ThreeVector::ThreeVector() {m_x=0;m_y=0;m_z=0;}
  FourVector(const double t, const double x, const double y, const double z);
  FourVector(const FourVector& other);

  // public functions
  double interval() const;
  void boost(double B);

  FourVector& operator+=(const FourVector& rhs);
  FourVector& operator-=(const FourVector& rhs);
  FourVector& operator*=(const FourVector& rhs);
  FourVector& operator/=(const FourVector& rhs);
  FourVector& operator=(const FourVector& rhs);

  double GetT();
  double GetX();
  double GetY();
  double GetZ();
  ThreeVector GetThreeVector();
  
  void SetT(double T);
  void SetX(double X);
  void SetY(double Y);
  void SetZ(double Z);
  void SetThreeVector(ThreeVector& v);

private:
  // member variables
  double m_t;
  double m_x;
  double m_y;
  double m_z;
  double m_interval;
  //  ThreeVector v;

  double intervalcalc() const;
};

FourVector operator+(const FourVector lhs, const FourVector rhs);



#endif // FOURVEC_HPP
