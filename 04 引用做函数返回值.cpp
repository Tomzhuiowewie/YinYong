#include<iostream>
using namespace std;

//�����������ķ���ֵ
//1.��Ҫ���ؾֲ���������
int& test01()
{
	int a = 10; //�ֲ���������������е� ջ��
	return a;
}

//2. �����ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
	static int a = 10;//��̬�����������ȫ������ȫ�����ϵ������ڳ���������ͷ�
	return a;
}

int main04() {

	int& ref = test01();

	cout << "ref = " << ref << endl;//��һ�ʽ����ȷ����Ϊ���������˱���
	cout << "ref = " << ref << endl;//�ڶ����ͷ�

	int& ref2 = test02();

	cout << "ref2 = " << ref2 << endl;//��һ�ʽ����ȷ����Ϊ���������˱���
	test02() = 1000;

	cout << "ref2 = " << ref2 << endl;//�ڶ����ͷ�

	system("pause");

	return 0;
}