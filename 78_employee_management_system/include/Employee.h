#pragma once
#include "iostream"
#include "string"
#include <random>
#include <fstream>
#include "Worker.h"
using namespace std;

class Employee : public Worker
{
private:
    /* data */
public:
    Employee(int id, string name, int dId);

    virtual void show_info();

    virtual string get_dept_name();

    ~Employee();
};
