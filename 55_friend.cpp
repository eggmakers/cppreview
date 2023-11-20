#include "iostream"
#include "string"
#include <random>
using namespace std;

class Building
{
    friend void goodGay(Building *building); // 全部函数做友元
    friend class GG;                         // 类做友元

private:
    /* data */
    string m_BedRoom;

public:
    void change();
    string m_SittingRoom;
    Building()
    {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }
};

class GG
{
    friend void Building::change(); // 成员函数做友元
    /* data */
    Building *building;

public:
    void visit();

    GG();
};

GG::GG()
{
    building = new Building;
}

void goodGay(Building *building)
{
    cout << building->m_SittingRoom << endl;
    cout << building->m_BedRoom << endl;
}

void Building::change()
{
    Building b;
    cout << "visiting" << b.m_BedRoom << endl;
}

void GG::visit()
{
    cout << "visiting" << building->m_BedRoom << endl;
}

void test01()
{
    Building b;
    goodGay(&b);
}

void test02()
{
    GG g;
    g.visit();
}

int main()
{
    test01();
    // test02();
    return 0;
}