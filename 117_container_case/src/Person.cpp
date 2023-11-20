#include "Person.h"

Person::Person(string name, int score)
{
    m_Name = name;
    m_Score = score;
}

Person::~Person()
{
}

string Person::getName()
{
    return m_Name;
}

int Person::getScore()
{
    return m_Score;
}

void Person::setScore(int score)
{
    score = m_Score;
}