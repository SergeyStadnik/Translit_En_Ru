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
	{ { "À","Á","Â","Ã","Ä","Å","¨","Æ","Ç","È","É","Ê","Ë","Ì","Í","Î","Ï","Ð","Ñ","Ò","Ó","Ô","Õ","Ö","×","Ø","Ù","Ú","Û","Ü","Ý","Þ","ß" },
	{ "à", "á", "â", "ã", "ä", "å", "¸", "æ", "ç", "è","é", "ê", "ë", "ì", "í", "î", "ï", "ð", "ñ", "ò", "ó", "ô", "õ", "ö", "÷", "ø", "ù", "ú","û", "ü", "ý", "þ", "ÿ" },
	{ "A", "B", "V", "G", "D", "E", "Jo", "Zh", "Z", "I","Jj", "K", "L", "M", "N", "O", "P", "R", "S", "T", "U", "F", "Kh", "C", "Ch", "Sh", "Shh", "\"","Y", "\'", "Eh", "Ju", "Ja" },
	{ "a", "b", "v", "g", "d", "e", "jo", "zh", "z", "i","jj", "k", "l", "m", "n", "o", "p", "r", "s", "t", "u", "f", "kh", "c", "ch", "sh", "shh", "\"","y", "\'", "eh", "ju", "ja" } };
	system("pause");
	return 0;
}