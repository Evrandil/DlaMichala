#include<iostream>


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


/*
int ZHex(std::string a)		// a - liczba zapisana w systemie binarnym
{
	int w = 0;
	for (int k = 1; a != 0; k *= 2) { w += a%10*k; a /= 10; }
	return w;
}

std::string DoHex(int a)		// a - liczba zapisana w systemie dziesietnym
{
	long w = 0;
	for (int k = 1; a != 0; k *= 10) { w += a%2*k; a /= 2; }
	return w;
}*/



int main(int argc, char** argv)
{
	std::cout << DoOct(83) << '\n';
	return 0;
}
