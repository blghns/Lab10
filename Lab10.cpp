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

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;
	int h = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int m = 0;
	int n = 0;
	int o = 0;
	int p = 0;
	int q = 0;
	int r = 0;
	int s = 0;
	int t = 0;
	int u = 0;
	int v = 0;
	int w = 0;
	int x = 0;
	int y = 0;
	int z = 0;

	char charVar;
	while(inStream >> charVar){
		if(charVar == 'a' || charVar == 'A')
			a++;
		else if(charVar == 'b' || charVar == 'B')
			b++;
		else if(charVar == 'c' || charVar == 'C')
			c++;
		else if(charVar == 'd' || charVar == 'D')
			d++;
		else if(charVar == 'e' || charVar == 'E')
			e++;
		else if(charVar == 'f' || charVar == 'F')
			f++;
		else if(charVar == 'g' || charVar == 'G')
			g++;
		else if(charVar == 'h' || charVar == 'H')
			h++;
		else if(charVar == 'i' || charVar == 'I')
			i++;
		else if(charVar == 'j' || charVar == 'J')
			j++;
		else if(charVar == 'k' || charVar == 'K')
			k++;
		else if(charVar == 'l' || charVar == 'L')
			l++;
		else if(charVar == 'm' || charVar == 'M')
			m++;
		else if(charVar == 'n' || charVar == 'N')
			n++;
		else if(charVar == 'o' || charVar == 'O')
			o++;
		else if(charVar == 'p' || charVar == 'P')
			p++;
		else if(charVar == 'q' || charVar == 'Q')
			q++;
		else if(charVar == 'r' || charVar == 'R')
			r++;
		else if(charVar == 's' || charVar == 'S')
			s++;
		else if(charVar == 't' || charVar == 'T')
			t++;
		else if(charVar == 'u' || charVar == 'U')
			u++;
		else if(charVar == 'v' || charVar == 'V')
			v++;
		else if(charVar == 'w' || charVar == 'W')
			w++;
		else if(charVar == 'x' || charVar == 'X')
			x++;
		else if(charVar == 'y' || charVar == 'Y')
			y++;
		else if(charVar == 'z' || charVar == 'Z')
			z++;
	}

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;
	cout << "d: " << d << endl;
	cout << "e: " << e << endl;
	cout << "f: " << f << endl;
	cout << "g: " << g << endl;
	cout << "h: " << h << endl;
	cout << "i: " << i << endl;
	cout << "j: " << j << endl;
	cout << "k: " << k << endl;
	cout << "l: " << l << endl;
	cout << "m: " << m << endl;
	cout << "n: " << n << endl;
	cout << "o: " << o << endl;
	cout << "p: " << p << endl;
	cout << "q: " << q << endl;
	cout << "r: " << r << endl;
	cout << "s: " << s << endl;
	cout << "t: " << t << endl;
	cout << "u: " << u << endl;
	cout << "v: " << v << endl;
	cout << "w: " << w << endl;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "z: " << z << endl;

	outStream << "a: " << a << endl;
	outStream << "b: " << b << endl;
	outStream << "c: " << c << endl;
	outStream << "d: " << d << endl;
	outStream << "e: " << e << endl;
	outStream << "f: " << f << endl;
	outStream << "g: " << g << endl;
	outStream << "h: " << h << endl;
	outStream << "i: " << i << endl;
	outStream << "j: " << j << endl;
	outStream << "k: " << k << endl;
	outStream << "l: " << l << endl;
	outStream << "m: " << m << endl;
	outStream << "n: " << n << endl;
	outStream << "o: " << o << endl;
	outStream << "p: " << p << endl;
	outStream << "q: " << q << endl;
	outStream << "r: " << r << endl;
	outStream << "s: " << s << endl;
	outStream << "t: " << t << endl;
	outStream << "u: " << u << endl;
	outStream << "v: " << v << endl;
	outStream << "w: " << w << endl;
	outStream << "x: " << x << endl;
	outStream << "y: " << y << endl;
	outStream << "z: " << z << endl;

	inStream.close();
	outStream.close();


	cout << "Written in the output.txt file." << endl;
	system("PAUSE");
	return 0;
}
