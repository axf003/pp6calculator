#ifndef THREEVEC_HPP
#define THREEVEC_HPP

class ThreeVector {
public:
  //constructors
  ThreeVector() {m_x=0;m_y=0;m_z=0;}
  ThreeVector(const double x, const double y, const double z);
  ThreeVector(const ThreeVector& other);

  // public functions
  double length() const;

  ThreeVector& operator+=(const ThreeVector& rhs);
  ThreeVector& operator-=(const ThreeVector& rhs);
  ThreeVector& operator*=(const ThreeVector& rhs);
  ThreeVector& operator/=(const ThreeVector& rhs);
  ThreeVector& operator=(const ThreeVector& rhs);

  double GetX();
  double GetY();
  double GetZ();
  
  void SetX(double X);
  void SetY(double Y);
  void SetZ(double Z);

private:
  // member variables
  double m_x;
  double m_y;
  double m_z;
  double m_length;

  double lengthcalc() const;
};

ThreeVector operator+(const ThreeVector lhs, const ThreeVector rhs);



#endif // FOURVEC_HPP
