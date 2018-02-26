#include <iostream>
#include <math.h> 
//#include <conio.h>
//the program stop working with n = 10000000000


using namespace std;
int main(int argc, char *argv[]) {

double MyPi = 0;	
double RefPi = 3.1415926535897932384626433832795;
long n = 10000000000;
double res;

for (int i = 0; i<n; i++)
{

	if (i%2 == 0) 
    	{
		res = 4.0/(1.0+2.0*i);
		}
	else 
		{
		res = -4.0/(1.0+2.0*i);	
		}
	MyPi = MyPi + res;

//if (i%10 == 0)	
/*   
	{
		printf("n = %d \n", i);
		printf("n/2 = %d \n", i%2);
		printf("вычесленное Pi = %4.50f \n", MyPi);
		printf("Настоящее Pi = %4.50f \n", RefPi);
		printf("разница между ними = %4.50f \n\n", RefPi-MyPi);
	}
*/
}

printf("вычесленное     Pi = %4.50f \n", MyPi);
printf("Настоящее       Pi = %4.50f \n", RefPi);
printf("разница между ними = %4.50f \n", RefPi-MyPi);


}