#include "iostream"
#include "string"
#include <random>
using namespace std;

class Building
{
    friend void goodGay(Building *building); // ȫ����������Ԫ
    friend class GG;                         // ������Ԫ

private:
    /* data */
    string m_BedRoom;

public:
    void change();
    string m_SittingRoom;
    Building()
    {
        m_SittingRoom = "����";
        m_BedRoom = "����";
    }
};

class GG
{
    friend void Building::change(); // ��Ա��������Ԫ
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