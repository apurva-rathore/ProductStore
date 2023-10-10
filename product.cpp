#include "product.h"
#include<string>
//Constructors
Product::Product()
{
	this->id=00;
	this->title="Not Found!";
	this->price=00;
	this->description="Not Found!";
	this->likes=0;
}

Product::Product(int id, string title,double price,string description,int likes){
	this->id=id;
	this->title=title;
	this->price=price;
	this->description=description;
	this->likes=likes;
}
//Destructor
Product::~Product()
{
}
//Getters
int Product::GetId()
{    
    return this->id;
}

string Product::GetTitle()
{  
       return this->title;
}

double Product::GetPrice()
{
	return this->price;
}

string Product::GetDescription()
{
	return this->description;
}

int Product::GetLikes()
{
	return this->likes;
}
//Setters
void Product::SetTitle(string title)
{
	this->title=title;
}

void Product::SetPrice(double price)
{
	this->price=price;
}

void Product::SetDescription(string description)
{
	this->description=description;
}

void Product::SetLikes(int likes)
{
	this->likes=likes;
}
