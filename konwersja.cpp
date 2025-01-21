#include<string>
#include<iostream>



std::string Konwersja(std::string a, const short& PodstawaBazowa, const short& PodstawaDocelowa)
{
	std::string w;
	short reszta;				// reszta - zmienna w której będzie składana jeszcze niewykorzystana część liczby którą konwertujemy

	return w;
}



int main(int argc, char** argv)
{
	std::string a;
	short PodstawaBazowa, PodstawaDocelowa;
	std::cout << "Podaj liczbę\n";
	std::cin >> a;
	std::cout << "\nW jakim systemie liczbowym jest ta liczba zapisana?\n";
	std::cin >> PodstawaBazowa;
	if (PodstawaBazowa > 36)
	{
		std::cout << "\n\nZa duża podstawa!\n";
		return 1;
	}
	std::cout << "\nW jakim ma zostać zapisana?\n";
	std::cin >> PodstawaDocelowa;
	if (PodstawaDocelowa > 36)
	{
		std::cout << "\n\nZa duża podstawa!\n";
		return 1;
	}
	std::cout << Konwersja(a, PodstawaBazowa, PodstawaDocelowa) << '\n';
	return 0;
}
