#include<iostream>
using namespace std;

//��������

//1. ֵ����
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//2. ��ַ����
void mySwap02(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


//3. ���ô���
void mySwap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main03() {

	int a = 100;
	int b = 200;
	//mySwap01(a, b);//ֵ���ݣ��ββ�������ʵ��
	//mySwap02(&a, &b);//��ַ���ݣ��β�����ʵ��
	mySwap03(a, b);//���ô��ݣ��β�����ʵ��


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}