#include <iostream>
using namespace std;

void add(float y , float x) {
	float z = y + x;
	cout<<"el valor de x es igual a "<< x << "el valor de y es igual a " << y << "el valor de z es igual a " << z << endl;
}
enum Weekdays {
	Monday = 0,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday,
};
class pipo{
protected:
int a, b;
public:

    void set(int _altura,int _base) {
	a = _altura;
	b = _base;
	cout << "length is: " << a << " width is: " << b << endl;
}


};
class triangulo : public pipo {
public:
	void area2() {
		cout <<"area es: " << (a*b)/2 <<endl;
	}
};
	int main()
	{
		int pepe[5]{ 1,2,3,4,5 };

		Weekdays today;
		today = Friday;
		if (today == Friday) {
			cout << "The weekend is here !!!!" << endl;
		};
		triangulo tri;
		tri.set(1, 4);
		tri.area2();
}