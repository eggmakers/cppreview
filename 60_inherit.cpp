#include "iostream"
#include "string"
#include <random>
using namespace std;

class BasePage
{
private:
    /* data */
public:
    void header()
    {
        cout << "首页，公开课" << endl;
    }
    void footer()
    {
        cout << "帮助" << endl;
    }
    void left()
    {
        cout << "Java" << endl;
    }
    BasePage(/* args */);
    ~BasePage();
};

// class 子类：继承方式：父类
class Java : public BasePage
{
public:
    void content()
    {
        cout << "Java学科视频" << endl;
    }
};

BasePage::BasePage(/* args */)
{
}

BasePage::~BasePage()
{
}

void test01()
{
    cout << "Java下载视频如下：" << endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
}

int main()
{
    test01();
    return 0;
}
