#include <iostream>
#include "Person.h"
#include <ctime>

void showScore(vector<Person> &v);
void printDeque(const deque<int> &d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void printVector(vector<Person> &v)
{
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "name: " << (*it).getName() << " Score" << (*it).getScore() << endl;
    }
    cout << endl;
}

void createPerson(vector<Person> &v)
{
    string nameSeed = "ABCDF";
    for (int i = 0; i < 5; i++)
    {
        string name = "";
        name += nameSeed[i];

        int score = 0;

        Person p(name, score);

        v.push_back(p);
    }
    printVector(v);
}

void setScore(vector<Person> &v)
{
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        deque<int> d;
        for (int i = 0; i < 10; i++)
        {
            int score = rand() % 41 + 60;
            d.push_back(score);
        }
        cout << (*it).getName() << " score" << endl;
        for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
        {
            cout << *dit << " ";
        }
        cout << endl;

        sort(d.begin(), d.end());

        d.pop_back();
        d.pop_front();

        int sum = 0;
        for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
        {
            sum += *dit;
        }

        int avg = sum / d.size();
        it->setScore(avg);
        cout << it->getScore() << endl;
    }
    // showScore(v);
}

void showScore(vector<Person> &v)
{
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "name: " << it->getName() << " Score: " << it->getScore() << endl;
    }
}

void test01()
{
    vector<Person> v;
    createPerson(v);
    setScore(v);
}

int main()
{
    srand((unsigned int)time(NULL));
    test01();
    return 0;
}
