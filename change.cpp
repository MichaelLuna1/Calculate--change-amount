#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	ofstream fout;
	double priceItem, amountInserted, Quarters, Dimes, Nickels, Pennies, change;
	char input;
	fout.open("vending_machine.txt");
	
	do
	{
	cout << "Enter Price of Item: ";
	cin >> priceItem;
	cout << "Enter Amount Given: ";	 
	cin >> amountInserted;
	
	 	if (amountInserted < priceItem )
	 	{
	 		cout << "Not enough money inserted " << endl;
		}
		else if(amountInserted == priceItem)
		{
			cout << "No change Given. " << endl;
			fout << "********************" << endl;
			fout << "Price: $" << setw(11) << priceItem << endl;
			fout << "Money inserted: $" << amountInserted << endl;
			fout << "********************" << endl;
		}
		else if(amountInserted > priceItem)
		{
			change = amountInserted - priceItem;
			Quarters = 0;
			
			while(change >= 0.25)
			{
				Quarters++;
				change = change - 0.25;
			}
			cout << "Quarters: " << Quarters << endl;
			Dimes = 0;
			
			while(change >= 0.10)
			{
			Dimes++;
			change = change - 0.10;
			}
			cout << "Dimes: " << Dimes << endl;
			Nickels = 0;
			
			while(change >=  0.05)
			{
				Nickels++;
				change = change - 0.05;
			}
			cout << "Nickels: " << Nickels << endl;
			Pennies = 0;
			
			while(change >= 0.01)
			{
				Pennies++;
				change = change - 0.01;
			}
			cout << "Pennies: " << Pennies << endl;
			
			fout << "********************" << endl;
			fout << endl;
			fout << "Price: $ " << priceItem << endl;
			fout << "Money inserted: $ " << amountInserted << endl; 
			fout << "Quarters: " << Quarters << endl;
			fout << "Dimes: " << Dimes << endl;
			fout << "Nickels: " << Nickels << endl;
			fout << "Pennies: " << Pennies << endl;
			fout << "********************" << endl;
			fout << endl;
		}
		
		cout << "Do you have another entry (Y/N): ";
			cin >> input ;
	}
	
	while(input == 'y' || input == 'Y');
	
			fout.close();
			return 0;
			
}	 
