#include<iostream>
#include"AdvCircle.h"
#include"MyPoint.h"
using namespace std;
int main()
{
	AdvCircle c1;
	MyPoint p1;

	c1.setCircle(2, 3, 3);
	p1.setPoint(7, 7);

	//��԰��1 ����԰��0
	int tag = c1.judge(p1);
	if (tag == 1)
	{
		cout << "����Բ����" << endl;
	}
	else
	{
		cout << "����Բ����" << endl;
	}
	//cout << "hello.." << endl;
	system("pause");

}