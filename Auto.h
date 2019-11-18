#pragma once
#include "iostream"
#include "string"
using namespace std;
class Auto
{
private:
	string Brand;
	string Color;
	string Country;
	int Size;
	int Prise;
	int Amount;
	int Weight;
	string getBrand();
	string getColor();
	string getCountry();
	int getSize();
	int getPrise();
	int getAmount();
	int getWeight();
public:
	void setBrand(string B);
	void setColor(string C);
	void setCountry(string Y);
	void setSize(int P);
	void setPrise(int S);
	void setAmount(int G);
	void setWeight(int p);
	void Input();
	void Print();
};