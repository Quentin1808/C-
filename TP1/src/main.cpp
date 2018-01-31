#include <iostream>
#include "fibonacci.hpp"

int main(){
  
      std::cout << fibonacciRecursif(7) << std::endl;
      std::cout << fibonacciIterratif(7) << std::endl;

      Vecteur3 v1{2, 3, 6};
      Vecteur3 v2{4, 12, 18};
      
      afficher(v1);
      v2.afficher();

      std::cout << "La norme de v1 vaut " << v1.norme() << std::endl;
      std::cout << "La somme de v1 et v2 vaut ";
      addition(v1, v2).afficher();
      std::cout << "Le produit scalaire de v1 et v2 vaut" << produitScalaire(v1, v2) << std::endl;


}
