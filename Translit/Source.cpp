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
	char Ru[] = { "a a a ���� ������, � ������ ���� ��� ����� Privet kak dela chto delaesh' Ja Schuka" };
	char arr_Ru[4][33] = 
	{ { '�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�'},
	{ '�', '�', '�', '�', '�', '�', '�', '�', '�', '�','�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', '�','�', '�', '�', '�', '�' },
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
				text += "�";
				i += 1;
				break;
			}
			if (Ru[i] == 'j' && Ru[i + 1] == 'a')
			{
				text += "�";
				i += 1;
				break;
			}
			if (Ru[i] == 'c' && Ru[i + 1] == 'h')
			{
				text += "�";
				i += 1;
				break;
			}
			if (Ru[i] == 'J' && Ru[i + 1] == 'u')
			{
				text += "�";
				i += 1;
				break;
			}
			if (Ru[i] == 'j' && Ru[i + 1] == 'u')
			{
				text += "�";
				i += 1;
				break;
			}
			if (Ru[i] == 'E' && Ru[i + 1] == 'h')
			{
				text += "�";
				i += 1;
				break;
			}
			if (Ru[i] == 'e' && Ru[i + 1] == 'h')
			{
				text += "�";
				i += 1;
				break;
			}
			if (Ru[i] == 'S' && Ru[i + 1] == 'h')
			{
				text += "�";
				i += 1;
				break;
			}
			if (Ru[i] == 's' && Ru[i + 1] == 'h')
			{
				text += "�";
				i += 1;
				break;
			}
			if (Ru[i] == 'K' && Ru[i + 1] == 'h')
			{
				text += "�";
				i += 1;
				break;
			}
			if (Ru[i] == 'k' && Ru[i + 1] == 'h')
			{
				text += "�";
				i += 1;
				break;
			}

			if (Ru[i] == 'S' && Ru[i + 1] == 'c' && Ru[i + 2] == 'h')
			{
				text += "�";
				i += 2;
				break;
			}
			if (Ru[i] == 's' && Ru[i + 1] == 'c' && Ru[i + 2] == 'h')
			{
				text += "�";
				i += 2;
				break;
			}

			if (Ru[i] == ' ')
			{
				break;

			}
			if (Ru[i] == '�')
			{
				text += "sh";
				break;
			}
			if (Ru[i] == '�')
			{
				text += "Sh";
				break;
			}
			if (Ru[i] == '�')
			{
				text += "ch";
				break;
			}
			if (Ru[i] == '�')
			{
				text += "Ch";
				break;
			}
			if (Ru[i] == '�')
			{
				text += "Sch";
				break;
			}
			if (Ru[i] == '�')
			{
				text += "sch";
				break;
			}
			
			
		   if (Ru[i] == '�')
			{
				text += "zh";
				break;
			}
			if (Ru[i] == '�')
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