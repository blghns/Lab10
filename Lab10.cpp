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
	inStream.open("Twain.txt");
	outStream.open("output.txt");

	int alphabet[26];
	for (int i = 0; i < 26; i++)
	{
		alphabet[i] = 0;
	}

	char a;
	while(inStream >> a){
		if(a == 'a' || a == 'A')
			alphabet[0]++;
		else if(a == 'b' || a == 'B')
			alphabet[1]++;
		else if(a == 'c' || a == 'C')
			alphabet[2]++;
		else if(a == 'd' || a == 'D')
			alphabet[3]++;
		else if(a == 'e' || a == 'E')
			alphabet[4]++;
		else if(a == 'f' || a == 'F')
			alphabet[5]++;
		else if(a == 'g' || a == 'G')
			alphabet[6]++;
		else if(a == 'h' || a == 'H')
			alphabet[7]++;
		else if(a == 'i' || a == 'I')
			alphabet[8]++;
		else if(a == 'j' || a == 'J')
			alphabet[9]++;
		else if(a == 'k' || a == 'K')
			alphabet[10]++;
		else if(a == 'l' || a == 'L')
			alphabet[11]++;
		else if(a == 'm' || a == 'M')
			alphabet[12]++;
		else if(a == 'n' || a == 'N')
			alphabet[13]++;
		else if(a == 'o' || a == 'O')
			alphabet[14]++;
		else if(a == 'p' || a == 'P')
			alphabet[15]++;
		else if(a == 'q' || a == 'Q')
			alphabet[16]++;
		else if(a == 'r' || a == 'R')
			alphabet[17]++;
		else if(a == 's' || a == 'S')
			alphabet[18]++;
		else if(a == 't' || a == 'T')
			alphabet[19]++;
		else if(a == 'u' || a == 'U')
			alphabet[20]++;
		else if(a == 'v' || a == 'V')
			alphabet[21]++;
		else if(a == 'w' || a == 'W')
			alphabet[22]++;
		else if(a == 'x' || a == 'X')
			alphabet[23]++;
		else if(a == 'y' || a == 'Y')
			alphabet[24]++;
		else if(a == 'z' || a == 'Z')
			alphabet[25]++;
	}

	outStream << "a: " << alphabet[0] << endl;
	outStream << "b: " << alphabet[1] << endl;
	outStream << "c: " << alphabet[2] << endl;
	outStream << "d: " << alphabet[3] << endl;
	outStream << "e: " << alphabet[4] << endl;
	outStream << "f: " << alphabet[5] << endl;
	outStream << "g: " << alphabet[6] << endl;
	outStream << "h: " << alphabet[7] << endl;
	outStream << "i: " << alphabet[8] << endl;
	outStream << "j: " << alphabet[9] << endl;
	outStream << "k: " << alphabet[10] << endl;
	outStream << "l: " << alphabet[11] << endl;
	outStream << "m: " << alphabet[12] << endl;
	outStream << "n: " << alphabet[13] << endl;
	outStream << "o: " << alphabet[14] << endl;
	outStream << "p: " << alphabet[15] << endl;
	outStream << "q: " << alphabet[16] << endl;
	outStream << "r: " << alphabet[17] << endl;
	outStream << "s: " << alphabet[18] << endl;
	outStream << "t: " << alphabet[19] << endl;
	outStream << "u: " << alphabet[20] << endl;
	outStream << "v: " << alphabet[21] << endl;
	outStream << "w: " << alphabet[22] << endl;
	outStream << "x: " << alphabet[23] << endl;
	outStream << "y: " << alphabet[24] << endl;
	outStream << "z: " << alphabet[25] << endl;

	inStream.close();
	outStream.close();

	return 0;
}
