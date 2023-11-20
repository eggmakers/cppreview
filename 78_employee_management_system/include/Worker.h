#pragma once
#include "iostream"
#include "string"
#include <random>
#include <fstream>
using namespace std;

class Worker
{
private:
    /* data */
public:
    virtual void show_info() = 0;
    virtual string get_dept_name() = 0;

    int m_Id;
    string m_name;
    int m_deptId;
};
