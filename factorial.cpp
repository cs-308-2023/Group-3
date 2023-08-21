#include "functions.h"
// factorial function
int factorial(int n){
	if(n<0){
		cout<<"Factorial is not defined for negative number"<<endl;
		return -1;
		
	}
	else{
	    if(n!=1){
		return(n * factorial(n-1));
	    }
	    else return 1;
	}
}
