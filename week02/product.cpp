#include "product.h"

Product::Product(string name, double unitPrice)
: name(name), unitPrice(unitPrice)
{
}
Product::~Product()
{
} 
double Product::getPrice() const
{
  return unitPrice;
}