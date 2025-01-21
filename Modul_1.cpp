#include<iostream>
#include<string>


int ZBinarnego(long a)		// a - liczba zapisana w systemie binarnym
{
	int w = 0;
	for (int k = 1; a != 0; k *= 2) { w += a%10*k; a /= 10; }
	return w;
}

long DoBinarnego(int a)		// a - liczba zapisana w systemie dziesietnym
{
	long w = 0;
	for (int k = 1; a != 0; k *= 10) { w += a%2*k; a /= 2; }
	return w;
}



int ZOct(int a)		// a - liczba zapisana w systemie osemkowym
{
	int w = 0;
	for (int k = 1; a != 0; k *= 8) { w += a%10*k; a /= 10; }
	return w;
}

int DoOct(int a)		// a - liczba zapisana w systemie dziesietnym
{
	int w = 0;
	for (int k = 1; a != 0; k *= 10) { w += a%8*k; a /= 8; }
	return w;
}



int ZHex(std::string a)		// a - liczba zapisana w systemie szesnastkowym
{
	int pot = 1, w = 0;	// pot - potega 16 z ktora mamy do czynienia w konkretnej iteracji
	for (int k = a.size()-1; k+1 != 0; k--)
	{
		if (a[k] >= '0' && a[k] <= '9') w += (a[k] - '0') * pot;
		else if (a[k] >= 'a') w += (a[k] - 'a' + 10) * pot;
		else w += (a[k] - 'A' + 10) * pot;
		pot *= 16;
	}
	return w;
}


std::string DoHex(int a)		// a - liczba zapisana w systemie dziesietnym
{
}




int main(int argc, char** argv)
{
	std::cout << ZHex("3e") << '\n';
	return 0;
}
