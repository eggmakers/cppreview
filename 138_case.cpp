#include <vector>
#include <algorithm>
#include "iostream"
#include <random>
#include <fstream>
#include <set>
#include <map>
#include <vector>
using namespace std;

#define A 0
#define B 1
#define C 2

class Worker
{
private:
    /* data */
public:
    string m_Name;
    int m_Salary;
};

void createWorker(vector<Worker> &v)
{
    string nameSeed = "ABCDEFGHIJ";
    for (int i = 0; i < 10; i++)
    {
        Worker worker;
        worker.m_Name = "Staff ";
        worker.m_Name += nameSeed[i];
        worker.m_Salary = rand() % 10000 + 10000;
        v.push_back(worker);
    }
}

void setGroup(vector<Worker> &v, multimap<int, Worker> &m)
{
    for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
    {
        int depId = rand() % 3;

        m.insert(make_pair(depId, *it));
    }
}

void showWorkerByGroup(multimap<int, Worker> &m)
{
    cout << "Dept A:" << endl;
    multimap<int, Worker>::iterator pos = m.find(A);
    int count = m.count(A);
    int index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        cout << "name:" << pos->second.m_Name << " salary:" << pos->second.m_Salary << endl;
    }
    cout << "------------------------" << endl;
    cout << "Dept B:" << endl;
    pos = m.find(B);
    count = m.count(B);
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        cout << "name:" << pos->second.m_Name << " salary:" << pos->second.m_Salary << endl;
    }
    cout << "------------------------" << endl;
    cout << "Dept C:" << endl;
    pos = m.find(C);
    count = m.count(C);
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        cout << "name:" << pos->second.m_Name << " salary:" << pos->second.m_Salary << endl;
    }
}

int main()
{
    vector<Worker> vworker;
    createWorker(vworker);

    multimap<int, Worker> mWorker;
    setGroup(vworker, mWorker);

    showWorkerByGroup(mWorker);

    // for (vector<Worker>::iterator it = vworker.begin(); it != vworker.end(); it++)
    // {
    //     cout << "name:" << (*it).m_Name << " salary:" << it->m_Salary << endl;
    // } // 测试

    return 0;
}
