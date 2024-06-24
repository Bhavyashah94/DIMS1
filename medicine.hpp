#pragma once
#include <string>
class medicine {
private:
	std::string _name;
	int _quantity;
	int _price;
public:
	medicine(std::string name, int price, int quantity);
	~medicine(){}
	void setName(const std::string& s);
	void setQuantity(int qty);
	void setPrice(int p);
	std::string getName();
	int getQuantity();
	int getPrice();
};