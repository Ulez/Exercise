#include<iostream> 
#include<string>
#include<stdio.h>
using namespace std;

struct stu    // ����һ���ṹ��
{
    string name;  // ����
    int num;  // ѧ��
    int age;  // ����
};
int main()
{
	string name="����" ;  // ����
    struct stu *s =new stu;   // ����һ���ṹ��ָ��
    s->name = name;                    
    s->num = 2015120; 
    s->age = 18;      
    cout << "age="<< s->age<< "," <<"\n"<< "num="<< s->num  << ","<< "\n"<<"name=" << s->name << endl;
    getchar();
    return 0;
}
