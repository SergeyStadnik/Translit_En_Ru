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
	string arr_Ru[4][33] = 
	{ { "�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�","�" },
	{ "�", "�", "�", "�", "�", "�", "�", "�", "�", "�","�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�","�", "�", "�", "�", "�" },
	{ "A", "B", "V", "G", "D", "E", "Jo", "Zh", "Z", "I","Jj", "K", "L", "M", "N", "O", "P", "R", "S", "T", "U", "F", "Kh", "C", "Ch", "Sh", "Shh", "\"","Y", "\'", "Eh", "Ju", "Ja" },
	{ "a", "b", "v", "g", "d", "e", "jo", "zh", "z", "i","jj", "k", "l", "m", "n", "o", "p", "r", "s", "t", "u", "f", "kh", "c", "ch", "sh", "shh", "\"","y", "\'", "eh", "ju", "ja" } };
	system("pause");
	return 0;
}