#pragma once
#include <iostream>
//�������� ���� Customer � ������: ���, �������, �����(������� ������). ����������� ������� ������������, ����������, ������ ������������ �� ���������  (set,get), ����� ������ �� �����. �������� ������� ������ �onst.
//������� � main :
//1)���������  ����� �� 3 �������, �������� �� �����
//2) ��������� ����� �� 3 �������, �������� �� �����

using namespace std;

class Customer {

private:

	char* name;
	char* email;
	char* phone;

public:

	Customer();
	Customer(const char* name_b, const char* email_b, const char* phone_b);

	~Customer();

	void SetName(const char* name_b);
	void SetEmail(const char* email_b);
	void SetPhone(const char* phone_b);

	const char* GetName()const;
	const char* GetEmail()const;
	const char* GetPhone()const;

	void Output()const;
};
