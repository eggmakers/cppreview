#pragma once
#include <iostream>
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"
#include <fstream>
using namespace std;

#define FILENAME "empFile.txt"

class WorkerManager
{
private:
    /* data */
    int m_EmpNum;

public:
    void init_Emp();

    int get_EmpNum();

    Worker **m_EmpArray;

    bool m_FileIsEmpty;

    WorkerManager();

    void sort_employee();

    void clear_employee();

    void del_employee();

    void modify_employee();

    void find_employee();

    int IsExit(int id);

    void show_menu();

    void show_employee();

    void exit_system();

    void add_employee();

    void read_emploee();

    void save();

    ~WorkerManager();
};
