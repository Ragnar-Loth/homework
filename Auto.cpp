
#include "Auto.h"

string Auto::getBrand()
{
	return Brand;
}
string Auto::getColor()
{
	return Color;
}
string Auto::getCountry()
{
	return Country;
}
int Auto::getSize()
{
	return Size;
}
int Auto::getPrise()
{
	return Prise;
}
int Auto::getAmount()
{
	return Amount;
}
int Auto::getWeight()
{
	return Weight;
}

void Auto::setBrand(string B)
{
	Brand = B;
}
void Auto::setColor(string C)
{
	Color = C;
}
void Auto::setCountry(string Y)
{
	Country = Y;
}
void Auto::setSize(int P)
{
	Size = P;
}
void Auto::setPrise(int S)
{
	Prise = S;
}
void Auto::setAmount(int G)
{
	Amount = G;
}
void Auto::setWeight(int P)
{
	Weight = P;
}
void Auto::Input()
{
	cout << "Brand =" << '\n';
	cin >> Brand;
	setBrand(Brand);
	cout << "Color =" << '\n';
	cin >> Color;
	setColor(Color);
	cout << "Country =" << '\n';
	cin >> Country;
	setCountry(Country);
	cout << "Size =" << '\n';
	cin >> Size;
	setSize(Size);
	cout << "Prise =" << '\n';
	cin >> Prise;
	setPrise(Prise);
	cout << "Amount =" << '\n';
	cin >> Amount;
	setAmount(Amount);
	cout << "Weight =" << '\n';
	cin >> Weight;
	setWeight(Weight);

}
void Auto::Print()
{
	cout << "The Brand - " << Brand << '\n';
	cout << "The Color - " << Color << '\n';
	cout << "The Country - " << Country << '\n';
	cout << "The  Size - " << Size << '\n';
	cout << "The Prise - " << Prise << '\n';
	cout << "The Amount -" << Amount << '\n';
	cout << "The Weight -" << Weight << '\n';
}