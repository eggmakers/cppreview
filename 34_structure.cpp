#include "iostream"
#include "string"
#include <random>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
} s3;

int main1()
{
    struct student s1;
    s1.name = "hale";
    s1.age = 18;
    s1.score = 100;
    cout << s1.name << s1.age << s1.score << endl;

    struct student s2 = {"john", 14, 100};
    cout << s2.name << s2.age << s2.score << endl;

    s3.name = "mme";
    s3.age = 19;
    s3.score = 59;
    cout << s3.name << s3.age << s3.score << endl;

    return 0;
}

// 结构体数组
struct student1
{
    string name;
    int age;
    int score;
};

int main2()
{
    student1 stuArray[8] =
        {
            {"hale", 18, 100},
            {"john", 16, 99},
            {"meme", 16, 98}};

    stuArray[2].name = "memm";
    stuArray[2].age = 17;
    stuArray[2].score = 75;
    for (int i = 0; i < 3; i++)
    {
        cout << stuArray[i].name << endl;
        cout << stuArray[i].age << endl;
        cout << stuArray[i].score << endl;
    }

    return 0;
}

// 结构体指针
struct student2
{
    string name;
    int age;
    int score;
};

int main3()
{
    // 创建结构体变量
    student2 s = {"hale", 18, 100};

    // 通过指针指向结构体变量
    student2 *p = &s;

    // 通过指针访问结构体变量中的数据
    cout << p->name << p->age << p->score << endl;
    return 0;
}

// 结构体嵌套结构体
struct student3
{
    string name;
    int age;
    int score;
};

struct teacher
{
    int id;
    string name;
    int age;
    struct student3 stu;
};

int main4()
{
    teacher t;
    t.id = 10000;
    t.age = 49;
    t.name = "wyne";
    t.stu.age = 18;
    t.stu.name = "hale";
    t.stu.score = 99;

    cout << t.id << t.age << t.name << t.stu.age << t.stu.name << t.stu.score << endl;

    return 0;
}

// 结构体做函数参数
struct student4
{
    string name;
    int age;
    int score;
};
// 值传递
void printStudent1(student4 stu)
{
    stu.age = 100;
    cout << stu.age << stu.name << stu.score << endl;
}
// 地址传递
void printStudent2(student4 *stu)
{
    stu->age = 100;
    cout << stu->age << stu->name << stu->score << endl;
}
int main5()
{
    student4 stu;
    stu.age = 14;
    stu.name = "hale";
    stu.score = 100;
    cout << stu.age << stu.name << stu.score << endl;
    printStudent1(stu);
    printStudent2(&stu);
    cout << stu.age << stu.name << stu.score << endl;

    return 0;
}

// 结构体中const使用场景
struct student5
{
    string name;
    int age;
    int score;
};
// 使用地址传递可以节省空间，且不会复制出新的副本
void printStudent3(const student5 *stu)
{
    // stu->age = 100;不可修改
    cout << stu->age << stu->name << stu->score << endl;
}

int main()
{
    student5 stu = {"hale", 18, 150};
    printStudent3(&stu);

    return 0;
}