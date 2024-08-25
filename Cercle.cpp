#include <iostream>
#include"Cercle.h"
#include <cmath>

    
    double perimetre() 
    {
        return 2 * PI * rayon;
    }

    
    double surface() 
    {
        return PI * std::pow(rayon, 2);
    }

  
    void afficher() 
    {
        std::cout << "Cercle: Rayon = " << rayon << ", Centre = (" << x << ", " << y << ")" << std::endl;
        std::cout << "Périmètre = " << perimetre() << ", Surface = " << surface() << std::endl;
    }
};

