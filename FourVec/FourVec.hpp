#ifndef FOURVEC_HPP
#define FOURVEC_HPP

class FourVector {
public:
  //constructors
  FourVector() {m_t=0;m_x=0;m_y=0;m_z=0;}
  FourVector(const double t, const double x, const double y, const double z);
  FourVector(const FourVector& other);

  // public functions
  double interval() const;
  void boost(double B);
  //  void setFourVec(double t,double x,double y,double z);
  void PMequals(char PlusorMinus);

  
private:
  // member variables
  double m_t;
  double m_x;
  double m_y;
  double m_z;
  double m_interval;

  double intervalcalc() const;
};

#endif // FOURVEC_HPP
