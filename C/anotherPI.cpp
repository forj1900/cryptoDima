#include <iostream>
#include <math.h> 


using namespace std;
int main(int argc, char *argv[]) {
	//Пи = 2 * (Arcsin (SQRT (1 - х ^ 2))) + ABS (Arcsin (х)).

	double MyPi = 0;	
	double RefPi = 3.1415926535897932384626433832795;
	double x = 0.9;

MyPi = 2 * (asin(sqrt(1 - pow(x,2) )) + fabs(asin (x)));


	printf("вычесленное Pi = %4.50f \n", MyPi);
	printf("Настоящее Pi = %4.50f \n", RefPi);
	printf("разница между ними = %4.50f \n", RefPi-MyPi);


	
	
}