#include <iostream>

class Cercle
{
private:
    double rayon;
    double x;
    double y;

public:
    Cercle();
    Cercle(double r, double x, double y);

    double getRayon() 
    {
        return rayon;
    }
    void setRayon(double r) {
        rayon = r;
    }

    
    double getX() 
    {
        return x;
    }

    void setX(double x); 
  
    double getY() 
    {
        return y;
    }

    void setY(double y) 

};
