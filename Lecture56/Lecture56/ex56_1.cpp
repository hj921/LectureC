#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() { // ������
		cout << "�����ڰ� ȣ��Ǿ���!!" << endl;
	}

	~MyClass() // �Ҹ���
	{
		cout << "�Ҹ��ڰ� ȣ��Ǿ���!!" << endl;
	}
};

//MyClass globalObj;

void testLocalObj() { // ���� ��ü(local object)�� ������ �Ҹ��� �׽�Ʈ�ϱ� ���� �Լ�
	cout << "testLocalObj�Լ� ����!!" << endl;
	MyClass localObj;
	cout << "testLocalObj�Լ� ��!!" << endl;
} // LocalObj �Լ��� ������ ���� ����. ���� �Լ��� ������ ���� �Ҹ��� ȣ��
int main() {
	cout << "main�Լ� ����!!" << endl;
	testLocalObj();
	cout << "main�Լ� ��!!" << endl;
}