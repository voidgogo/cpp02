#include "invoice.h"
#include "company.h"

int main()
{
	//Company company1("이케아", "123-456-7890");

	Product product1("Table", 150.00);
	Product product2("Chair", 80.00);

	Invoice invoice(1001, "이케아", "123-456-7890");  // aggregation X
	//Invoice invoice(1001, company1);  // aggregation O
	invoice.add(1, product1);  // use-a
	invoice.add(6, product2);  // use-a
	//invoice.print(company1);  // use-a
	invoice.print();

	return 0;
}