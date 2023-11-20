#include "iostream"
#include "string"
#include <random>
using namespace std;

class Point
{

private:
    float x;
    float y;

public:
    void set_point_param(float m_x, float m_y);
    float get_x();
    float get_y();
};

class Circle
{

private:
    float radius;
    float center_x;
    float center_y;

public:
    Point P;
    void set_circle_param(float x, float y, float r);
    void contrast_position();
};

void Point::set_point_param(float m_x, float m_y)
{
    x = m_x;
    y = m_y;
}

float Point::get_x()
{
    return x;
}

float Point::get_y()
{
    return y;
}

void Circle::set_circle_param(float x, float y, float r)
{
    center_x = x;
    center_y = y;
    radius = r;
}

void Circle::contrast_position()
{
    if (pow((P.get_x() - center_x), 2) + pow((P.get_y() - center_y), 2) == pow(radius, 2))
        cout << "The point is on the circle" << endl;
    else if (pow(P.get_x(), 2) + pow(P.get_y(), 2) > pow(radius, 2))
        cout << "The point is outside the circle" << endl;
    else
        cout << "The point is inside the circle" << endl;
}

int main()
{
    Circle C1;
    C1.P.set_point_param(10.f, 20.f);
    C1.set_circle_param(20.f, 10.f, 10.f);
    C1.contrast_position();

    return 0;
}