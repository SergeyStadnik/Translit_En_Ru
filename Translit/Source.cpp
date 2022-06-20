#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>
#include <fstream>
using namespace std;

void En_Ru_Translit(string* text,char* arr[],char* arr2[4][33])
{


}


int main() {

	setlocale(0, "");
	srand(time(NULL));
	int coll = 4;
	int lenn = 33;
	string text;
	char Ru[] = { "a a a Жить хорошо, а хорошо жить еще лучше Privet kak dela chto delaesh' Ja Schuka" };
	char arr_Ru[4][33] = 
	{ { 'А','Б','В','Г','Д','Е','Ё','Ж','З','И','Й','К','Л','М','Н','О','П','Р','С','Т','У','Ф','Х','Ц','Ч','Ш','Щ','Ъ','Ы','Ь','Э','Ю','Я'},
	{ 'а', 'б', 'в', 'г', 'д', 'е', 'ё', 'ж', 'з', 'и','й', 'к', 'л', 'м', 'н', 'о', 'п', 'р', 'с', 'т', 'у', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ъ','ы', 'ь', 'э', 'ю', 'я' },
	{ 'A', 'B', 'V', 'G', 'D', 'E', 'Y', 'Zh', 'Z', 'I','Jj', 'K', 'L', 'M', 'N', 'O', 'P', 'R', 'S', 'T', 'U', 'F', 'H', 'C', '//', '// ', '//', '\"','Y', '//', ' //', '//', '//' },
	{ 'a', 'b', 'v', 'g', 'd', 'e', 'y', 'zh', 'z', 'i','jj', 'k', 'l', 'm', 'n', 'o', 'p', 'r', 's', 't', 'u', 'f', 'h', 'c', '//', '// ', '//', '\"','y', '\'', '// ', '//', '//' } };


	for (size_t i = 0; i < size(Ru); i++)
	{
		if (Ru[i] == ' ')
		{
			text += Ru[i];

		}


		for (size_t j = 0; j < 4; j++)
		{
			if (Ru[i] == 'J' && Ru[i + 1] == 'a')
			{
				text += "Я";
				i += 1;
				break;
			}
			if (Ru[i] == 'j' && Ru[i + 1] == 'a')
			{
				text += "я";
				i += 1;
				break;
			}
			if (Ru[i] == 'c' && Ru[i + 1] == 'h')
			{
				text += "ч";
				i += 1;
				break;
			}
			if (Ru[i] == 'J' && Ru[i + 1] == 'u')
			{
				text += "Ю";
				i += 1;
				break;
			}
			if (Ru[i] == 'j' && Ru[i + 1] == 'u')
			{
				text += "ю";
				i += 1;
				break;
			}
			if (Ru[i] == 'E' && Ru[i + 1] == 'h')
			{
				text += "Э";
				i += 1;
				break;
			}
			if (Ru[i] == 'e' && Ru[i + 1] == 'h')
			{
				text += "э";
				i += 1;
				break;
			}
			if (Ru[i] == 'S' && Ru[i + 1] == 'h')
			{
				text += "Ш";
				i += 1;
				break;
			}
			if (Ru[i] == 's' && Ru[i + 1] == 'h')
			{
				text += "ш";
				i += 1;
				break;
			}
			if (Ru[i] == 'K' && Ru[i + 1] == 'h')
			{
				text += "Х";
				i += 1;
				break;
			}
			if (Ru[i] == 'k' && Ru[i + 1] == 'h')
			{
				text += "х";
				i += 1;
				break;
			}

			if (Ru[i] == 'S' && Ru[i + 1] == 'c' && Ru[i + 2] == 'h')
			{
				text += "Щ";
				i += 2;
				break;
			}
			if (Ru[i] == 's' && Ru[i + 1] == 'c' && Ru[i + 2] == 'h')
			{
				text += "щ";
				i += 2;
				break;
			}

			if (Ru[i] == ' ')
			{
				break;

			}
			if (Ru[i] == 'ш')
			{
				text += "sh";
				break;
			}
			if (Ru[i] == 'Ш')
			{
				text += "Sh";
				break;
			}
			if (Ru[i] == 'ч')
			{
				text += "ch";
				break;
			}
			if (Ru[i] == 'Ч')
			{
				text += "Ch";
				break;
			}
			if (Ru[i] == 'Щ')
			{
				text += "Sch";
				break;
			}
			if (Ru[i] == 'щ')
			{
				text += "sch";
				break;
			}
			
			
		   if (Ru[i] == 'ж')
			{
				text += "zh";
				break;
			}
			if (Ru[i] == 'Ж')
			{
				text += "Zh";
				break;
			}

			for (size_t k = 0; k < lenn; k++)
			{

				if (Ru[i] == arr_Ru[j][k] && j == 0)
				{
					text += arr_Ru[2][k];
					break;
				}
				else if (Ru[i] == arr_Ru[j][k] && j == 1)
				{

					text += arr_Ru[3][k];
					break;
				}
				if (Ru[i] == arr_Ru[j][k] && j == 2)
				{
					text += arr_Ru[0][k];
					break;
				}
				else if (Ru[i] == arr_Ru[j][k] && j == 3)
				{

					text += arr_Ru[1][k];
					break;
				}

			}
		}

	}
cout <<text<< endl;


	system("pause");
	return 0;
	
}