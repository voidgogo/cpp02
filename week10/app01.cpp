#include <iostream>
using namespace std;

class Complex {
private:
	int real;
	int imaginary;
public:
	Complex() : real(0), imaginary(0) {
	}
	Complex(int real, int imaginary) : real(real), imaginary(imaginary) {

	}
	
	void setReal(int real) {
		//real = real;
		this->real = real;
	}
	int getReal() const {
		return real;
	}
	void setImaginary(int imaginary) {
		this->imaginary = imaginary;
	}
	int getimaginary() const {
		return imaginary;
	}

	// member function (method)
	//Complex operator+(const Complex& right) {
	//	int r = this->real + right.real;
	//	int i = this->imaginary + right.imaginary;
	//	return Complex(r, i);
	//	//return Complex(r, this->imaginary);  // 가능하나 수학적으로 문제가 됨
	//}
	Complex operator++(int) {  // 후위연산
		Complex previous(this->real, this->imaginary);
		this->real = this->real + 1;
		return previous;
	}
	Complex operator++() {  // 전위연산
		this->real++;
		return Complex(this->real, this->imaginary);
	}

	// member function (method)
	friend ostream& operator<<(ostream& o, const Complex& right) {
		//o << right.getReal() << "+" << right.getimaginary() << "i";
		o << right.real << "+" << right.imaginary << "i";
		return o;
	}
};

// non member function
Complex operator+(const Complex& left, const Complex& right) {
	int r = left.getReal() + right.getReal();
	int i = left.getimaginary() + right.getimaginary();
	return Complex(r, i);
}

istream& operator>>(istream& i, Complex& right) {
	int real, imag;

	cout << "Input real value : ";
	i >> real;
	right.setReal(real);

	cout << "Input imaginary value : ";
	i >> imag;
	right.setImaginary(imag);

	return i;
}

Complex operator+(int left, const Complex& right) {
	return Complex(left + right.getReal(), right.getimaginary());
}

int main() {
	Complex c1(10, 7);
	int x = 5;
	cout << c1;
	cout << '\n';
	Complex c2 = (x + c1);
	cout << c2;  // 15+7i

	return 0;
}