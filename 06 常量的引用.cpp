#include<iostream>
using namespace std;

//��ӡ���ݺ���
void showValue(const int& val)
{
	//val = 1000;
	cout << "val = " << val << endl;
}

int main() {
	
	//����������
	//��ֹ�����

	//int a = 10;

	//����const,�������������޸ģ�int temp = 10;const int & ref = temp
	//const int& ref = 10; //���ô�������һ��Ϸ����ڴ�ռ�
	//ref = 20;// ����const ��Ϊֻ���������޸�

	int a = 100;
	showValue(a);
	cout << "a = " << a << endl;

	system("pause");

	return 0;
}