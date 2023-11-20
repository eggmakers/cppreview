#include "iostream"
#include "string"
#include <random>
#include <fstream>
#include "WorkerManager.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"
using namespace std;

void test()
{
    Worker *worker = NULL;
    worker = new Employee(1, "hale", 1);
    worker->show_info();
    delete worker;

    worker = new Manager(2, "john", 2);
    worker->show_info();
    delete worker;

    worker = new Boss(2, "Tom", 3);
    worker->show_info();
    delete worker;
}

int main()
{
    // test();
    WorkerManager wm;
    int choice = 0;
    while (true)
    {
        wm.show_menu();
        cout << "Please select your choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            wm.add_employee();
            break;
        case 2:
            wm.show_employee();
            /* code */
            break;
        case 3:
            wm.del_employee();
            /* code */
            break;
        case 4:
            wm.modify_employee();
            /* code */
            break;
        case 5:
            wm.find_employee();
            /* code */
            break;
        case 6:
            wm.sort_employee();
            /* code */
            break;
        case 7:
            /* code */
            break;

        default:
            wm.exit_system();
            break;
        }
    }

    return 0;
}