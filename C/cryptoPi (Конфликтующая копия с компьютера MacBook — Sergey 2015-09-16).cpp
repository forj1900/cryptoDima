#include <iostream>
#include <math.h> 
//#include <conio.h>


using namespace std;
int main(int argc, char *argv[]) {

double MyPi = ;	
double RefPi = 3.1415926535897932384626433832795;
long n = 10;
double res = 1.0390230;

printf("res= %.7f", res+res);


for (int i = 2; i<=n; i++)
{
res = 4.0/(1.0+2.0*i);
printf("res=%.5f\n", res);

MyPi = MyPi + res;
   {
		printf("n = %d \n", i);
		printf("n/2 = %d \n", i%2);
		printf("вычесленное MyPi = %1.50f \n", MyPi);
		printf("Настоящее Pi = %.50f \n", RefPi);
		printf("разница между ними = %4.50f \n\n", RefPi-MyPi);
	}
}

printf("вычесленное Pi = %4.50f \n", MyPi);
printf("Настоящее Pi = %4.50f \n", RefPi);
printf("разница между ними = %4.50f \n", RefPi-MyPi);


}