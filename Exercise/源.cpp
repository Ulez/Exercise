#include<iostream> 
#include<string>
#include<stdio.h>
using namespace std;

struct stu    // 定义一个结构体
{
    string name;  // 姓名
    int num;  // 学号
    int age;  // 年龄
};
int main()
{
	string name="姓名" ;  // 姓名
    struct stu *s =new stu;   // 定义一个结构体指针
    s->name = name;                    
    s->num = 2015120; 
    s->age = 18;      
    cout << "age="<< s->age<< "," <<"\n"<< "num="<< s->num  << ","<< "\n"<<"name=" << s->name << endl;
    getchar();
    return 0;
}
