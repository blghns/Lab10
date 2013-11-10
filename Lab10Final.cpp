//Bilgehan Saglik Comp128
//Wentworth Institute of Technology
//Lab10
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
	ifstream inStream;
	ofstream outStream;
	char charVar;

	inStream.open("Twain.txt");
	outStream.open("output.txt");

	int alphabet[26];
	for (int i = 0; i < 26; i++)
	{
		alphabet[i] = 0;
	}

	
	while(inStream >> charVar){
		for (int i = 0; i < 26; i++)
		{
			if(charVar == i+65 || charVar == i+97)
				alphabet[i]++;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		charVar = i + 97;
		outStream << charVar << ": " << alphabet[i] << endl;
	}

	inStream.close();
	outStream.close();

	return 0;
}
