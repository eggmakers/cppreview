#include "iostream"
#include "string"
#include <random>
#include <fstream>
#include "Manager.h"
using namespace std;

Manager::Manager(int id, string name, int dId)
{
    this->m_Id = id;
    this->m_name = name;
    this->m_deptId = dId;
}

void Manager::show_info()
{
    cout << "Manager number:" << this->m_Id
         << "\tManager name:" << this->m_name
         << "\tpost:" << this->get_dept_name()
         << "\tJob responsibility:Complete the tasks assigned by the boss,and send the task to the staff" << endl;
};

string Manager::get_dept_name()
{
    return string("Manager");
}

Manager::~Manager()
{
}