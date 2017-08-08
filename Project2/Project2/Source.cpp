#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <math.h>

class base
{
protected:
	double getArea();
	double getPeri();
	void setArea(double area);
	void setPeri(double peri);
	double peri;
	double area;
};
double base::getArea() {
	return this->area;
}
double base::getPeri() {
	return this->peri;
}
void base::setArea(double area) {
	this->area = area;
}
void base::setPeri(double peri) {
	this->peri = peri;
}
class circulo : public base
{
public:
	circulo(double area, double peri, double radio);
	circulo(double radio);
	circulo();
	double getRadio();
	void setRadio(double radio);

private:
	double radio;
};
 circulo::circulo(double area, double peri, double radio) {
	this->area = area;
	this->peri = peri;
	this->radio = radio;
}
circulo::circulo(double radio) {
	this->area = radio*radio*M_PI;
	this->peri = radio * 2 * M_PI;
	this->radio = radio;
}
circulo::circulo() {
	this->radio = 1;
	this->area = M_PI;
	this->peri = 2 * M_PI;
}
double circulo::getRadio() {
	return this->radio;
}
void circulo::setRadio(double radio) {
	this->radio = radio;
}
int main()
{
	std::cout << "Hello, world!\n";
}