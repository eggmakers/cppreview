#include "iostream"
#include "string"
#include <random>
#include <fstream>
#include "Boss.h"
using namespace std;

Boss::Boss(int id, string name, int dId)
{
    this->m_Id = id;
    this->m_name = name;
    this->m_deptId = dId;
}

void Boss::show_info()
{
    cout << "Boss number:" << this->m_Id
         << "\tBoss name:" << this->m_name
         << "\tpost:" << this->get_dept_name()
         << "\tJob responsibility:Manage public affairs" << endl;
};

string Boss::get_dept_name()
{
    return string("Boss");
}

Boss::~Boss()
{
}