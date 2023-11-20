#include "iostream"
#include "string"
#include <random>
using namespace std;

class Cube
{

private:
    int m_L, m_W, m_H;

public:
    void get_param(int L, int W, int H)
    {
        m_L = L;
        m_W = W;
        m_H = H;
    }
    int Area();
    int Volume();
    void compare_between_two(Cube c1);
};

void compare_between_two_g(Cube c1, Cube c2)
{
    if (c1.Area() == c2.Area() && c1.Volume() == c2.Volume())
        cout << "Two cubes equal" << endl;
    else
        cout << "The two cubes are not equal" << endl;
}

int Cube::Area()
{
    return m_H * m_L + m_W * m_H + m_L * m_W;
}

int Cube::Volume()
{
    return m_H * m_L * m_W;
}

void Cube::compare_between_two(Cube c1)
{
    if (c1.Area() == Area() && c1.Volume() == Volume())
        cout << "Two cubes equal" << endl;
    else
        cout << "The two cubes are not equal" << endl;
}

int main()
{
    Cube c1;
    c1.get_param(10, 10, 20);
    cout << c1.Area() << endl;
    cout << c1.Volume() << endl;

    Cube c2;
    c2.get_param(10, 20, 20);
    cout << c2.Area() << endl;
    cout << c2.Volume() << endl;

    c2.compare_between_two(c1);
    compare_between_two_g(c1, c2);
    return 0;
}