#include <iostream>
#include <vector>
#include <string>
#include "medicine.hpp"


class inventory {
private:
	std::vector<medicine> med;
public:
	void addMed();
	void display();
	void displayAll();
	void updateMed();
};

void inventory::addMed() {
	std::cout << "Enter Medicine name:-";
	std::string name;
	std::cin >> name;
	std::cout << "Enter Medicine Price:-";
	int price;
	std::cin >> price;
	std::cout << "Enter Medicine Quantity:-";
	int quantity;
	std::cin >> quantity;
	medicine m(name,price,quantity);
	med.push_back(m);
}

void inventory::display()
{
	std::cout << "Enter Medicine name:-";
	std::string name;
	for (int i = 0; i < med.size(); i++) {
		if (name == med[i].getName())
		{
			std::cout << "Medicine Name:-" << med[i].getName() << std::endl;
			std::cout << "Medicine Price:-" << med[i].getPrice() << std::endl;
			std::cout << "Medicine Quantity:-" << med[i].getQuantity() << std::endl;
			return;
		}
	}
	std::cout << "name not found";
}

void inventory::displayAll()
{
	for (int i = 0; i < med.size(); i++)
	{
		std::cout << "Medicine Name:-" << med[i].getName() << std::endl;
		std::cout << "Medicine Price:-" << med[i].getPrice() << std::endl;
		std::cout << "Medicine Quantity:-" << med[i].getQuantity() << std::endl;
	}
}
void inventory::updateMed()
{ 
	std::cout<<"Enter medicine name to update:-";
	std::string name;
	std::cin>>name;
	for(int i =0; i<med.size();i++)
	{
		if(med[i].getName() == name)
		{
			std::cout<<"Enter new name:-";
			std::string newName;
			std::cin>>newName;
			med[i].setName(newName);
			std::cout<<"Enter new price:-";
			int newPrice;
			std::cin>>newPrice;
			med[i].setPrice(newPrice);
			std::cout<<"Enter new quantity:-";
			int newQuantity;
			std::cin>>newQuantity;
			med[i].setQuantity(newQuantity);
		}
		else
		{
			std::cout<<"Medicine not found";
		}
	}
}

void controlPanel() {
	bool running=true;
	while(running)
	{
		int choice = 0;
		std::cout << "--------------------------------------------------------------------------------\n";
		std::cout << "1.Add Medicine\n";
		std::cout << "2.Update  Medicine\n";
		std::cout << "3.View Medicine\n";
		std::cout << "4.ViewAll Medicine\n";
		std::cout << "5.Delete Medicine\n";
		std::cout << "6.Exit Medicine\n";
		std::cout << "--------------------------------------------------------------------------------\n";
		std::cout << "Enter your choice:-";
		std::cin >> choice;
		inventory inv;
		switch (choice)
		{
		case 1:
			inv.addMed();
			break;
		case 2:
			inv.updateMed();
			break;

		case 3:	
			inv.display();
			break;
		case 4:
			inv.displayAll();
			break;
		case 5:
			//inv.deleteMed();
			break;
		case 6:
			running = false;
			break;
		default:
			std::cout << "Invalid Input";
			break;
		}
	}

}

void main() {

	controlPanel();
	
}

