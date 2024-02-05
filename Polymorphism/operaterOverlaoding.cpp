#include<iostream>
using namespace std;

class Hello
{
public:
    int x;
    int y;

    Hello(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void operator +()
    {
        x = -x;
        y = -y;
    }
};

int main()
{
    Hello m1(24, 42);
    cout << "Original values: x = " << m1.x << ", y = " << m1.y << endl;

    +m1;

    cout << "New values after using unary + operator: x = " << m1.x << ", y = " << m1.y << endl;

    return 0;
}
