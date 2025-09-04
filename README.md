%%2025년도 2학기 C++ 프로그래밍 수업 원격 리포지토리



classDiagram

&nbsp;   class Company {

&nbsp;       -string name

&nbsp;       -string telephone

&nbsp;       +Company(string name, string telephone)

&nbsp;       +print() const void

&nbsp;   }

&nbsp;   

&nbsp;   class Product {

&nbsp;       -string name

&nbsp;       -double unitPrice

&nbsp;       +Product(string name, double unitPrice)

&nbsp;       +~Product()

&nbsp;       +getPrice() const double

&nbsp;   }

&nbsp;   

&nbsp;   class Invoice {

&nbsp;       -int invoiceNumber

&nbsp;       -double invoiceTotal

&nbsp;       -Company company

&nbsp;       +Invoice(int invoiceNumber, string name, string phone)

&nbsp;       +~Invoice()

&nbsp;       +add(int quantity, Product product) void

&nbsp;       +print() const void

&nbsp;   }

&nbsp;   

&nbsp;   Invoice \*-- Company : composition (has-a)

&nbsp;   Invoice ..> Product : dependency (use-a)    

