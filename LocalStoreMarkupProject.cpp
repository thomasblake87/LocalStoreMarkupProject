#include <iostream>

using namespace std;

int main()
{
	float OGPrice;
	float markupPercent;
	float salesTax;
	float markupPrice;

	cout << "This program takes the minimum price sold, markup price, and sales tax, and gives you the final sale price." << endl;

	OGPrice = 99.00;
	markupPercent = 0.6;
	salesTax = 0.0525;

	markupPrice = (OGPrice * 0.6) + OGPrice;

	cout << "The original price is: $" << OGPrice << endl;
	cout << "After the markup of " << (markupPercent * 100) << "% , the stores selling price will be: $" << markupPrice << endl;
	cout << "The sales tax has a rate of: " << (salesTax * 100) << "%" <<
		", and the sales tax applied to the stores selling price adds $" << (salesTax * markupPrice) << endl;
	cout << "The final price of the item will be: $" << ((markupPrice * salesTax) + markupPrice) << endl;

}