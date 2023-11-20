#include "iostream"
#include "string"
#include <random>
#include <fstream>
#include "employee.h"
using namespace std;

Employee::Employee(int id, string name, int dId)
{
    this->m_Id = id;
    this->m_name = name;
    this->m_deptId = dId;
}

void Employee::show_info()
{
    cout << "Employee number:" << this->m_Id
         << "\tEmployee name:" << this->m_name
         << "\tpost:" << this->get_dept_name()
         << "\tJob responsibility:Complete the tasks assigned by the manager" << endl;
};

string Employee::get_dept_name()
{
    return string("Employee");
}

Employee::~Employee()
{
}