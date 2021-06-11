#pragma once
#include <iostream>
template<typename T>
class PriceTag
{
public:
	PriceTag();
	PriceTag(const T, const double);
	PriceTag(const PriceTag<T>&);
	void setPrice(const double);
	void setProduct(const T);
	friend std::ostream& operator<<(std::ostream&, const PriceTag<T>&);
	friend std::istream& operator>>(std::istream&, PriceTag<T>&);	
	~PriceTag();

private:
	double price;
	T product;
};
template<typename T>
PriceTag<T>::PriceTag()
{
	product = NULL;
	price = 0;
}
template<typename T>
PriceTag<T>::~PriceTag()
{
	price = 0;
}
template<typename T>
PriceTag<T>::PriceTag(const T Prod, const double Price)
{
	product = Prod;
	price = Price;
}
template<typename T>
PriceTag<T>::PriceTag(const PriceTag<T>& other)
{
	setPrice(other.price);
	setProduct(other.product);
}	
template <typename T>
void PriceTag<T>:: setPrice(const double Price)
{
	price = Price;
}
template<typename T>
void PriceTag<T>::setProduct(const T Product)
{
	product = Product;
}
template<typename T>
std::ostream& operator<<(std::ostream& out, const PriceTag<T>& object)
{

}

template<typename T>
std::istream& operator>>(std::istream&, PriceTag<T>& object)
{

}