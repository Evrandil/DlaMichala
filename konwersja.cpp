#include<string>
#include<iostream>



std::string Konwersja(std::string a, const short& PodstawaBazowa, const short& PodstawaDocelowa)
{
	std::string w;
	long dcm = 0;							// zmienna na zapis liczby a w systemie dziesiętnym
	int pot = 1;							// potęga na której jesteśmy
	for (int k = a.size()-1; k+1 != 0; k--)
	{
		if (a[k] <= '9') dcm += (a[k] - '0') * pot;
		else if (a[k] <= 'Z') dcm += (a[k] - 'A' + 10) * pot;
		else dcm += (a[k] - 'a' + 10) * pot;
		pot *= PodstawaBazowa;
	} pot = 1;							// reset potęgi, od teraz to będzie potęga w liczbie docelowej
	while (pot * PodstawaDocelowa <= dcm) pot *= 16;
	while (pot != 0)
	{
		if (dcm/pot < 10) w.push_back(dcm/pot + '0');
		else w.push_back(dcm/pot + 'a' - 10);
		dcm %= pot;
		pot /= PodstawaDocelowa;
	}
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
