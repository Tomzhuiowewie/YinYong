#include<iostream>
using namespace std;

int main02() {

	int a = 10;
	//引用必须初始化
	//int& b; //错误，必需初始化
	int& b = a;

	//引用初始化后，不可改变
	int c = 20;
	//b = c;//赋值操作，而不是更改引用

	//int& b = c;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");

	return 0;
}