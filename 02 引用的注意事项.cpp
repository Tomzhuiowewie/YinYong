#include<iostream>
using namespace std;

int main02() {

	int a = 10;
	//���ñ����ʼ��
	//int& b; //���󣬱����ʼ��
	int& b = a;

	//���ó�ʼ���󣬲��ɸı�
	int c = 20;
	//b = c;//��ֵ�����������Ǹ�������

	//int& b = c;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");

	return 0;
}