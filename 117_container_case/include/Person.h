#pragma once
#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <deque>
using namespace std;

class Person
{
private:
    string m_Name;
    int m_Score;

public:
    string getName();
    int getScore();
    void setScore(int score);
    Person(string name, int score);
    ~Person();
};
