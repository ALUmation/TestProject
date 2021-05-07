#include <iostream>

using namespace std;

class Box {
public:
    double getVolume(void) {
        return length * breadth * height;
    }
    void setLength(double len) {
        length = len;
    }
    void setBreadth(double bre){
        breadth = bre;
    }
    void setHeight(double hei){
        height = hei;
    }

    // Operator + operator to add tow Bow objects.
    Box operator+(const Box &b) {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }

private:
    double length;
    double breadth;
    double height;
};

int main (void)
{
    Box box1;
    Box box2;
    Box box3;
    double vol = 0.0;

    //Box 1 spec
    box1.setLength(5.0);
    box1.setBreadth(6.0);
    box1.setHeight(7.0);

    //box2 spec
    box2.setLength(10.0);
    box2.setBreadth(12.0);
    box2.setHeight(13.0);

    vol = box1.getVolume();
    cout << "box1 vol : " << vol << endl;

    vol = box2.getVolume();
    cout << "box2 vol : " << vol << endl;

    box3 = box1 + box2;

    vol = box3.getVolume();
    cout << "box3 vol : " << vol << endl;












    return (EXIT_SUCCESS);
}