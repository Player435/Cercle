#include<iostream>
#include "Cercle"
#include<string>
int main() 
{
    Cercle c1;
    c1.afficher();

    Cercle c2(5, 2, 3);
    c2.afficher();
    c1.setRayon(3);
    c1.setX(1);
    c1.setY(1);
    c1.afficher();

    return 0;
}
