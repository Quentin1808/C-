#include <iostream>

int fibonacciIteratif(int nbI){
  int terme1;
  int terme2;
  int resultat;

  if(nbI == 0){

    return 0;
    
  }else{
    
    if (nbI == 1){
      return 1;
      
    }else{

      if(nbI == 2){
	return 2;
      }else{
	int nbren=1, i, som=0;

	for (int i = 0; i < nbI; i++){
	  nbren += som;
	  som = nbren - som;
	}
	return som;
      }
    }
  }
}



int fibonacciRecursif(int nbI){

  if (nbI == 0){
    return 0;
  }else{
    if(nbI == 1){
      return 1;
    }else{
      return fibonacciRecursif(nbI - 2) + fibonacciRecursif(nbI - 1);
    }
  }

}
