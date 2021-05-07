#include <iostream>

using namespace std;

class Shape {
protected:
    int width, height;
public:
    Shape(int a = 0, int b = 0) {
        width = a;
        height = b;
    }

    //pure virtual function Abstract class demek
    //virtual int zeroAlan() = 0;
    /**
     * 1 sanal üyeye sahip classtan başka yerde kullanılınca override edilemsi
     * zorunludur.   gerçekleştirilmek zorundadır.
     * @return
     */

    virtual int area() {
        cout << "Parent Class Area : " << endl;
        return 0;
    }
};

class Rectangle: public Shape {
public:
    Rectangle(int a = 0, int b = 0): Shape(a,b) { }

    int area() {
        cout << "Rectangle Class Area : " << endl;
        return (width * height);
    }
};

class Triangle: public Shape {
public:
    Triangle(int a = 0, int b = 0): Shape(a,b) { }

    int area() {
        cout << "Triangle Class Area : " << endl;
        return (width * height / 2);
    }
};

int main() {
    Shape *shape;

    Rectangle rec(10,7);
    Triangle tri(10,5);

    shape = &rec;
    shape -> area();

    shape = &tri;
    shape -> area();

    return 0;
}
