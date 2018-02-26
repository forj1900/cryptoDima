# include <iostream>
# include <cstdlib>
# include <cstdio>

using namespace std;
int main(int argc, char *argv[]) {
	
const int arr_length = 52;

int totalCountL = 0;
	
int countL[arr_length];
char c;
char leters[arr_length] = {
'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'w', 'v', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'W', 'V', 'X', 'Y', 'Z'};
//заполняем массив нулями	
for (int i = 0; i < arr_length; i++) {countL[i]=0;}
freopen ("input.txt", "r", stdin);
freopen ("output.txt", "w", stdout);


//считаем буквы
	
//	std::cin >> c;
 c=getchar();
	
	while (c != EOF)
	{
		for (int j = 0; j < arr_length; j++)
		{
			if ( c == leters[j])
				{
				countL[j]++;
				totalCountL++;
				break;
				}
		}
		c=getchar();
	}

//выводим результат before sort
std::cout << "\n----unsorted----\n";

for (int i = 0; i<arr_length; i++) 
{
	if (countL[i] != 0) 
	{
		std::cout << leters[i]  << "=" << countL[i];
		if(i != arr_length-1) {std::cout << ", ";} else {std::cout << "."; };
	}	
}
std::cout << "\n----end unsorted----";


//сортируем and find max
int swap = 0;
char swapC;
int max;
max = countL[0];

for (int i = 0; i<arr_length; i++) 
{
	for (int j = i+1; j<arr_length; j++)
	{
		if (countL[j] > countL[i]) 
		{
			swap = countL[i];
			countL[i] = countL[j];
			countL[j] = swap;
			
			swapC = leters [i];
			leters[i] = leters[j];
			leters[j] = swapC;
		}	
	}
	if (max < countL[i]) max = countL[i];
}


//выводим результат
std::cout << "\n----sorted----\n";
std::cout << "max = " << max << "\n";


for (int i = 0; i<arr_length; i++) 
{
	if (countL[i] != 0) 
	{
		double f = (double (countL[i]) )/(double (max) );
		std::cout << leters[i]  << "=" << countL[i] << ", ";
		std::cout << "" << f;
		if(i != arr_length-1) {std::cout << ", ";} else {std::cout << "."; };
	}	
}
std::cout << "\n----end----";


}//main
