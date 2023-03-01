#include <iostream>
using namespace std;
void add(float y , float x) {
	float z = y + x;
	cout<<"el valor de x es igual a "<< x << "el valor de y es igual a " << y << "el valor de z es igual a " << z << endl;
}
//El enum sirve para crear una lista donde cada elemento esta asignado a un numero.
enum Weekdays {
	Monday = 0,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday,
};
//una clase puede tener varios tipos de proteccion (Protected,public,private)
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
//la erencia se hace al poner una nueva clase mas : la clase padre
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
		//se crea un objeto llamado tri que sale de triangulo
		triangulo tri;
		//con el .set se añade valores
		tri.set(1, 4);
		tri.area2();

		//punteros primero creas una variable junto a otra variable cual sera el puntero
		int a;
		//el * sirve para hacer que la variable puntero sea un puntero y el & del a sirve para ver su posicion de memoria tal cual esta imprimira la posicion de memoria
		int *puntero = &a;
		//tambien sirve para imprimir arrays 
		int *p=nullptr;
		int edad[6] = {1,2,3,4,5,6};
		p = edad;
		cout<< *p <<endl;
		
}