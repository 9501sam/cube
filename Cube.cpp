#include <iostream>

class Cube {
public:
    Cube(double l = 1.0) {
        setLength(l);
    }

    void setLength(double l) {
        if(1.0 <= l && l <= 20.0) {
            length = l;
        }else{
            length = 1.0;
        }
    }

    double getLength() {
        return length;
    }

    double getPerimeter() {
        return 12 * getLength();
    }

    double getVolume() {
        return getLength() * getLength() * getLength();
    }

private:
    double length;
};
