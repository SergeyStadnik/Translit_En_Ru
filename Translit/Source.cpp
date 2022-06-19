#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>
#include <fstream>
using namespace std;

void En_Ru_Translit(string* text,string* arr)
{


}


int main() {

	setlocale(0, "");
	srand(time(NULL));
	int coll = 4;
	int lenn = 33;
	string text;
	char Ru[] = { "Привет как дела, что делаешь" };
	char arr_Ru[4][33] = 
	{ { 'А','Б','В','Г','Д','Е','Ё','Ж','З','И','Й','К','Л','М','Н','О','П','Р','С','Т','У','Ф','Х','Ц','Ч','Ш','Щ','Ъ','Ы','Ь','Э','Ю','Я'},
	{ 'а', 'б', 'в', 'г', 'д', 'е', 'ё', 'ж', 'з', 'и','й', 'к', 'л', 'м', 'н', 'о', 'п', 'р', 'с', 'т', 'у', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ъ','ы', 'ь', 'э', 'ю', 'я' },
	{ 'A', 'B', 'V', 'G', 'D', 'E', 'Jo', 'Zh', 'Z', 'I','Jj', 'K', 'L', 'M', 'N', 'O', 'P', 'R', 'S', 'T', 'U', 'F', 'Kh', 'C', 'Ch', 'Sh', 'Shh', '\"','Y', '\'', 'Eh', 'Ju', 'Ja' },
	{ 'a', 'b', 'v', 'g', 'd', 'e', 'jo', 'zh', 'z', 'i','jj', 'k', 'l', 'm', 'n', 'o', 'p', 'r', 's', 't', 'u', 'f', 'kh', 'c', 'ch', 'sh', 'shh', '\"','y', '\'', 'eh', 'ju', 'ja' } };


	for (size_t i = 0; i < size(Ru); i++)
	{   
		if (Ru[i] == ' ')
			text += Ru[i];
		
		for (size_t j = 0; j < 2; j++)
		{
			for (size_t k = 0; k < lenn; k++)
			{
				if (Ru[i] == arr_Ru[j][k] && j == 0 )
				{
					text += arr_Ru[2][k];
				}
				else if (Ru[i] == arr_Ru[j][k] && j == 1)
				{

					text += arr_Ru[3][k];
				}
				
					
			}
		}
	}

cout <<text<< endl;


	system("pause");
	return 0;
}