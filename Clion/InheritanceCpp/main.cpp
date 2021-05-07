#include <iostream>

using namespace std;

// Multilevel Inheritance

class MyClass{//Base Class
public:
    void myFunction(){
        cout << "" << endl;
    }
};

class MyChild: public MyClass{

};

class DigerClass{

};

class MyGrandChild: public MyChild, public DigerClass{

};

int main() {
    MyGrandChild myObj;
    myObj.myFunction();
    return 0;
}


//Override ile overload farkı :

