#include<iostream>
using namespace std;

//打印数据函数
void showValue(const int& val)
{
	//val = 1000;
	cout << "val = " << val << endl;
}

int main() {
	
	//常量的引用
	//防止误操作

	//int a = 10;

	//加上const,编译器将代码修改，int temp = 10;const int & ref = temp
	//const int& ref = 10; //引用次序引用一块合法的内存空间
	//ref = 20;// 加入const 变为只读，不可修改

	int a = 100;
	showValue(a);
	cout << "a = " << a << endl;

	system("pause");

	return 0;
}