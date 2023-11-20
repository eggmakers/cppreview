#include "WorkerManager.h"

WorkerManager::WorkerManager()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    if (!ifs.is_open())
    {
        cout << "File does not exist" << endl;
        this->m_EmpNum = 0;
        this->m_FileIsEmpty = true;
        this->m_EmpArray = NULL;
        ifs.close();
        return;
    }
    char ch;
    ifs >> ch;
    if (ifs.eof())
    {
        cout << "File empty!" << endl;
        this->m_EmpNum = 0;
        this->m_FileIsEmpty = true;
        this->m_EmpArray = NULL;
        ifs.close();
        return;
    }

    int num = this->get_EmpNum();
    cout << "The number of employee is " << num << endl;
    this->m_EmpNum = num;
    this->m_FileIsEmpty = false;
    this->m_EmpArray = new Worker *[this->m_EmpNum];
    this->init_Emp();

    // for test
    // for (int i = 0; i < this->m_EmpNum; i++)
    // {
    //     cout << "Employee number:" << this->m_EmpArray[i]->m_Id
    //          << "name:" << this->m_EmpArray[i]->m_name
    //          << "Dept number:" << this->m_EmpArray[i]->m_deptId << endl;
    // }
}

WorkerManager::~WorkerManager()
{
    if (this->m_EmpArray != NULL)
    {
        delete[] this->m_EmpArray;
        this->m_EmpArray = NULL;
    }
}

void WorkerManager::show_menu()
{
    cout << "*************************************************************" << endl;
    cout << "*********Welcome to the employee management system!**********" << endl;
    cout << "***************0.Exit the management system******************" << endl;
    cout << "***************1.Add employee information********************" << endl;
    cout << "***************2.Display employee information****************" << endl;
    cout << "***************3.Removal of departing staff******************" << endl;
    cout << "***************4.Modify employee information*****************" << endl;
    cout << "***************5.Find Employee Information*******************" << endl;
    cout << "***************6.Sort by number******************************" << endl;
    cout << "***************7.Clear all documents*************************" << endl;
    cout << "*************************************************************" << endl;
    cout << endl;
}

int WorkerManager::IsExit(int id)
{
    int index = -1;
    for (int i = 0; i < this->m_EmpNum; i++)
    {
        if (this->m_EmpArray[i]->m_Id == id)
        {
            index = i;

            break;
        }
    }
    return index;
}

void WorkerManager::del_employee()
{
    if (this->m_FileIsEmpty)
    {
        cout << "The file does not exist or the record is empty" << endl;
    }
    else
    {
        cout << "Please enter the employee number you want to delete" << endl;
        int id = 0;
        cin >> id;
        int index = this->IsExit(id);
        if (index != -1)
        {
            for (int i = index; i < this->m_EmpNum - 1; i++)
            {
                this->m_EmpArray[i] = this->m_EmpArray[i + 1];
            }
            this->m_EmpNum--;
            this->save();
            cout << "delete success" << endl;
        }
        else
            cout << "This person does not exist." << endl;
    }
}

void WorkerManager::find_employee()
{
    if (this->m_FileIsEmpty)
    {
        cout << "The file does not exist or the record is empty" << endl;
    }
    else
    {
        cout << "Please select the way to find" << endl;
        cout << "1.Search by employee number" << endl;
        cout << "2.Search by employee name" << endl;
        int select = 0;
        cin >> select;

        if (select == 1)
        {
            int id;
            cout << "please enter the number you want to check" << endl;
            cin >> id;

            int ret = IsExit(id);
            if (ret != -1)
            {
                cout << "The search was successful, and the employee's information is as follows:" << endl;
                this->m_EmpArray[ret]->show_info();
            }
            else
            {
                cout << "Without this person" << endl;
            }
        }
        else
        {
            string name;
            cout << "please enter the name you want to check" << endl;
            cin >> name;

            int index = -1;
            for (int i = 0; i < this->m_EmpNum; i++)
            {
                if (this->m_EmpArray[i]->m_name == name)
                {
                    index = i;

                    break;
                }
            }
            if (index != -1)
            {
                cout << "The search was successful, and the employee's information is as follows:" << endl;
                this->m_EmpArray[index]->show_info();
            }
            else
            {
                cout << "Without this person" << endl;
            }
        }
    }
}

void WorkerManager::clear_employee()
{
    cout << "Confirm to clear?" << endl;
    cout << "1.Yes" << endl;
    cout << "2.return" << endl;

    int select = 0;
    cin >> select;

    if (select == 1)
    {
        ofstream ofs;
        ofs.open(FILENAME, ios::trunc);
        ofs.close();

        if (this->m_EmpArray != NULL)
        {
            for (int i = 0; i < this->m_EmpNum; i++)
            {
                if (this->m_EmpArray[i] != NULL)
                {
                    delete this->m_EmpArray[i];
                }
            }
            this->m_EmpNum = 0;
            delete[] this->m_EmpArray;
            this->m_EmpArray = NULL;
            this->m_FileIsEmpty = true;
        }
        cout << "clear success" << endl;
    }
}

void WorkerManager::sort_employee()
{
    if (this->m_FileIsEmpty)
    {
        cout << "The file does not exist or the record is empty" << endl;
    }
    else
    {
        cout << "Please select the way you want to sort" << endl;
        cout << "1.Sort by employee number in ascending order" << endl;
        cout << "2.Sort by employee number in descending order" << endl;
        int select = 0;
        cin >> select;

        for (int i = 0; i < m_EmpNum; i++)
        {
            int minOrmax = i;
            for (int j = i + 1; j < m_EmpNum; j++)
            {
                if (select == 1)
                {
                    if (m_EmpArray[minOrmax]->m_Id > m_EmpArray[j]->m_Id)
                    {
                        minOrmax = j;
                    }
                }
                else
                {
                    if (m_EmpArray[minOrmax]->m_Id < m_EmpArray[j]->m_Id)
                    {
                        minOrmax = j;
                    }
                }
            }

            if (i != minOrmax)
            {
                Worker *temp = m_EmpArray[i];
                m_EmpArray[i] = m_EmpArray[minOrmax];
                m_EmpArray[minOrmax] = temp;
            }
        }
        cout << "The sorted result is " << endl;
        this->save();
        this->show_employee();
    }
}

void WorkerManager::modify_employee()
{
    if (this->m_FileIsEmpty)
    {
        cout << "The file does not exist or the record is empty" << endl;
    }
    else
    {
        cout << "Please enter the employee number you want to modify" << endl;
        int id;
        cin >> id;

        if (this->IsExit(id) != -1)
        {
            delete this->m_EmpArray[this->IsExit(id)];

            int newId = 0;
            string newName = "";
            int dSelect = 0;

            cout << "We got employee number " << id << endl;
            cout << "Please enter the new \"number\"" << endl;
            cin >> newId;
            cout << "Please enter the \"name\" of this employee" << endl;
            cin >> newName;
            cout << "Please select the position of the employee" << endl;
            cout << "1.Employee" << endl;
            cout << "2.Manager" << endl;
            cout << "3.Boss" << endl;
            cin >> dSelect;

            Worker *worker = NULL;
            switch (dSelect)
            {
            case 1:
                worker = new Employee(newId, newName, 1);
                break;
            case 2:
                worker = new Manager(newId, newName, 2);
                break;
            case 3:
                worker = new Boss(newId, newName, 3);
                break;
            default:
                break;
            }
            this->m_EmpArray[this->IsExit(id)] = worker;

            this->save();
            cout << "Modify Success" << this->m_EmpArray[this->IsExit(id)]->m_deptId << endl;
        }
        else
        {
            cout << "Without this person, the modification failed" << endl;
        }
    }
}

void WorkerManager::add_employee()
{
    cout << "Please enter the number of employees you want to add" << endl;

    int addNum = 0;
    cin >> addNum;

    if (addNum > 0)
    {
        int newSize = this->m_EmpNum + addNum;

        Worker **newSpace = new Worker *[newSize];
        if (this->m_EmpArray != NULL)
        {
            for (int i = 0; i < this->m_EmpNum; i++)
            {
                newSpace[i] = this->m_EmpArray[i];
            }
        }
        for (int i = 0; i < addNum; i++)
        {
            int id;
            string name;
            int dSelect;
            bool dup_id = true;

            cout << "Please enter the \"number\" of the " << i + 1 << " employee" << endl;
            cin >> id;
            cout << "Please enter the \"name\" of the " << i + 1 << " employee" << endl;
            cin >> name;
            cout << "Please select the position of the employee" << endl;
            cout << "1.Employee" << endl;
            cout << "2.Manager" << endl;
            cout << "3.Boss" << endl;
            cin >> dSelect;

            Worker *worker = NULL;
            switch (dSelect)
            {
            case 1:
                worker = new Employee(id, name, 1);
                break;
            case 2:
                worker = new Manager(id, name, 2);
                break;
            case 3:
                worker = new Boss(id, name, 3);
                break;
            default:
                break;
            }
            newSpace[this->m_EmpNum + i] = worker;
        }

        delete[] this->m_EmpArray;

        this->m_EmpArray = newSpace;
        this->m_EmpNum = newSize;
        this->m_FileIsEmpty = false;
        this->save();
        cout << addNum << " employees were added successfully" << endl;
    }
    else
    {
        cout << "input error" << endl;
    }
}

void WorkerManager::show_employee()
{
    if (this->m_FileIsEmpty)
    {
        cout << "The file does not exist or the record is empty" << endl;
    }
    else
    {
        for (int i = 0; i < m_EmpNum; i++)
        {
            this->m_EmpArray[i]->show_info();
        }
    }
}

int WorkerManager::get_EmpNum()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    int id;
    string name;
    int dId;

    int num = 0;

    while (ifs >> id && ifs >> name && ifs >> dId)
    {
        num++;
    }
    ifs.close();

    return num;
}

void WorkerManager::save()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::out);

    for (int i = 0; i < this->m_EmpNum; i++)
    {
        ofs << this->m_EmpArray[i]->m_Id << " "
            << this->m_EmpArray[i]->m_name << " "
            << this->m_EmpArray[i]->m_deptId << endl;
    }
    ofs.close();
}

void WorkerManager::init_Emp()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    int id;
    string name;
    int dId;

    int index = 0;
    while (ifs >> id && ifs >> name && ifs >> dId)
    {
        Worker *worker = NULL;
        if (dId == 1)
        {
            worker = new Employee(id, name, dId);
        }
        if (dId == 2)
        {
            worker = new Manager(id, name, dId);
        }
        if (dId == 3)
        {
            worker = new Boss(id, name, dId);
        }
        this->m_EmpArray[index] = worker;
        index++;
    }
    ifs.close();
}

void WorkerManager::exit_system()
{
    cout << "Welcome next use" << endl;
    exit(0);
}