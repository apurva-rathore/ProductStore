#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

class Product
{
	private:
		int id;
		string title;
		double price;
		string description;
		int likes;		
	public:
		Product();
		Product(int id, string title,double price,string description,int likes);
		int GetId();
		void SetId(int id);
		string GetTitle();
	    void SetTitle(string title);
	    double GetPrice();
	    void SetPrice(double price);
	    string GetDescription();
		void SetDescription(string description);
		int GetLikes();
		void SetLikes(int likes);
		~Product();
	protected:
};

#endif
