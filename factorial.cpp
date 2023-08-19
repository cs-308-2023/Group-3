#include "functions.h"
// factorial function
int factorial(int n){
	if(n<0){
		cout<<"Factorial not defined for negative number"<<endl;
	}
	else{
	    if(n!=1){
		return(n * factorial(n-1));
	    }
	    else return 1;
	}
}
