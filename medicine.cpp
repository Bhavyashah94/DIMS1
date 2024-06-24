#include "medicine.hpp"
#include <iostream>
#include <string>

medicine::medicine(std::string name, int price, int quantity) 
{
	_name = name;
	_price = price;
	_quantity = quantity;
}

void medicine::setName(const std::string& n)
{
	_name = n;
}

void medicine::setQuantity(int qty)
{
	_quantity = qty;
}

void medicine::setPrice(int p)
{
	_price = p;
}

std::string medicine::getName()
{
	return _name;
}

int medicine::getQuantity()
{
	return _quantity;
}

int medicine::getPrice()
{
	return _price;
}