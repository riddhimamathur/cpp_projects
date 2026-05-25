#include <iostream>
using namespace std;

class rectangle {
    private:
    int length;
    int breadth;

    public:
    rectangle()
    {
        length = 10;
        breadth = 5;
    }

    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    rectangle(const rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    int displayArea() const
    {
        return length * breadth;
    }
};

int main()
{
    rectangle r1;
    rectangle r2(20, 5);
    cout << "Area of rectangle r2: " << r2.displayArea() << endl;

    rectangle r3(r2);
    cout << "Area of rectangle r3 (copy of r2): " << r3.displayArea() << endl;

    return 0;
}