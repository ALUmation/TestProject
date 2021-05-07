#include <iostream>

using namespace std;

class Box {
public:
    double length;
    double breadth;
    double height;
};

class Car{
public:
    string brand;
    string model;
    int year;

    Car(){ // parametresiz
        model = "Model Yok";
        brand = "Marka Yok";
        year = 1900;
    }

    Car(string x, string y, int z){ // parametreli cons
        brand = x;
        model = y;
        year = z;
    }


};


int main() {
    Box Box1;
    Box Box2;
    double volume = 0.0;

    Box1.height = 5.0;
    Box1.length = 6.0;
    Box1.breadth = 7.0;

    Box2.height = 10.0;
    Box2.length = 12.0;
    Box2.breadth = 13.0;

    //referans --> pointer cpp de.
    Box1 = Box2;  //Referanslar Eşitlenir (JAVADA)

/*
    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Vol Box 1 :" << volume << endl;

    volume = Box2.height * Box2.length * Box2.breadth;
    cout << "Vol Box 2 :" << volume << endl;
*/
    Car carObj("BMW","XS",1990); // instance = örnekleme
    Car carObj2("aslan","motor",10);

    Car araba = *new Car();
    Car *araba2 = new Car;
    Car araba3 = Car("buda","boyle oldu",10);

    cout << araba.brand << endl;
    cout << araba2->model << endl;
    cout << araba3.model << endl;

    Car car; // consructor tanımlanırsa derleyici defaultu devre dışı bırakır .



    cout << carObj.brand << " " << carObj.model << " " << carObj.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;



    return (EXIT_SUCCESS);
}
