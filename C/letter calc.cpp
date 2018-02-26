# include <iostream>
# include <cstdlib>
# include <cstdio>

using namespace std;
int main(int argc, char *argv[]) {
	
	char s [200] = "what are fuch you are going to split beatween thuse lines\n";
	int countL[26];
	char c;
	char leters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'w', 'v', 'x', 'y', 'z'};
	
freopen ("input.txt", "r", stdin);

//заполняем массив нулями	
	for (int i = 0; i<=26; i++) {
		countL[i]=0;
		
	}

//выводим текст, в котором будем считать буквы
	
//	std::cout << "enter something:" << s << "\n";

//считаем буквы
	
	std::cin >> c;
	while (c != EOF)
	{
		
	}
	
	for (int i = 0; i<sizeof(s); i++){
		
		for (int j = 0; j < 26; j++){
			if ( s[i] == leters[j])
				{
					countL[j]++;
				}
		}//enf for j
	}
	
	
//выводим результат
	for (int i = 0; i<=26; i++) {
		if (countL[i] != 0) 
		{
			std::cout << "кол-во " << leters[i]  << "=" << countL[i] << ", ";
		if ((i != 0) &  (i % 4 == 0)) 
			{std::cout << "\n";}
		}
	}
	
}


//	std::cin >> s;
/*
	std::cout << "sizeof(countL) = " << "\t" << sizeof(countL) << "\n";
	std::cout << "sizeof(int) = " << "\t"  << sizeof(int) << "\n";
	std::cout << "sizeof(countL)*sizeof(int) = " << "\t"  << sizeof(countL)*sizeof(int) << "\n";
*/

