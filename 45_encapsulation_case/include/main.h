#pragma once
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