#include <iostream>
#include "Cube.cpp"
using namespace std;

int main() {
    Cube a;
    Cube b(10.0);
    Cube c(-10.0);

    cout << "a: length = " << a.getLength() << "; ";
    cout << "perimeter = " << a.getPerimeter() << "; ";
    cout << "Volume = " << a.getVolume() << endl;

    cout << "b: length = " << b.getLength() << "; ";
    cout << "perimeter = " << b.getPerimeter() << "; ";
    cout << "Volume = " << b.getVolume() << endl;

    cout << "c: length = " << c.getLength() << "; ";
    cout << "perimeter = " << c.getPerimeter() << "; ";
    cout << "Volume = " << c.getVolume() << endl;
    return 0;
}
