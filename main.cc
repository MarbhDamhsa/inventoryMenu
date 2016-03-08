#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> inventory;
bool invOpen = true;

int main()
{
	while(invOpen)
	{
		int i = 1;
		int choice;
		int slot = 0;
		string entry = "";
		
		cout << "Inventory options: \n";
		cout << "1. See inventory \n";
		cout << "2. Add to inventory \n";
		cout << "3. Remove from inventory \n";
		cout << "4. Close inventory \n";
		cout << "Please select an option (1-4): ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				for( const auto &slot : inventory ) 
				{
					cout << "Slot# " << i << ": " << slot << "\n";
					i++;
				}
				break;
			case 2:
				cout << "What do you want to add to the inventory? \n" << endl;
				cin >> entry;
				inventory.push_back(entry);
				cout << entry << " added!\n";
				break;
			case 3:
				cout << "Which inventory slot do you want to drop?\n" << endl;
				cin >> slot;
				inventory.erase(inventory.begin() + slot);
				cout << "Removed!\n";
				break;
			case 4:
				cout << "Closing inventory!\n";
				invOpen = false;
				break;
			default:
				cout << "Invalid choice! Please try again\n";
				continue;
		}//switch

	}//while
	return 0;
}//main
