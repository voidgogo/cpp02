#include "invoice.h"

//Invoice::Invoice(int invoiceNumber, Company company)  // aggregation
//: invoiceNumber(invoiceNumber), invoiceTotal(0.0), company(company)
//{  
//}
Invoice::Invoice(int invoiceNumber, string name, string phone)  // composition
	: invoiceNumber(invoiceNumber), invoiceTotal(0.0), company(name, phone)
{
}
Invoice::~Invoice() 
{
}
void Invoice::add(int quantity, Product product)
{
  invoiceTotal += quantity * product.getPrice();
}
void Invoice::print() const
{
	company.print();
	cout << "청구 번호: " << invoiceNumber << endl;
	cout << "청구 금액: " << invoiceTotal << endl;
}
//void Invoice::print(Company company) const
//{
//	company.print();
//   cout << "청구 번호: " << invoiceNumber << endl;
//   cout << "청구 금액: " << invoiceTotal << endl;
//}