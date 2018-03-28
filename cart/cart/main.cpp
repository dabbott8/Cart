#include <iostream>
using namespace std;


int Checkout()
{
	double dblItemPrice = 0.0;
	int intNumberofITems = 0;
	double dblItemTotalCost = 0.0;
	double dblTotalBill = 0.0;
	const double dblShipping = 10.00;

	cout << "Shipping is free if total bill is above $200." << endl;


	cout << "Enter cost of item: $" << endl;
	cin >> dblItemPrice;

	cout << "Enter number of items $" << endl;
	cin >> intNumberofITems;

	dblItemTotalCost = dblItemPrice * intNumberofITems;

	if (dblItemTotalCost >= 200)
	{
		cout << "Total cost is $" << dblItemTotalCost << " with free shipping" << endl;
	}
	else if (dblItemTotalCost < 200)
	{
		dblTotalBill = dblItemTotalCost + (intNumberofITems * dblShipping);
		cout << "Total cost is $" << dblItemTotalCost << " with $" << dblShipping
			<< " charge per item, making the total bill $" << dblTotalBill << endl;
	}

	return dblTotalBill;
}

int main()
{
	Checkout();
	system("pause");
	return 0;
}
