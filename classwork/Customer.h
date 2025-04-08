#pragma once
#include <iostream>

//�������� ���� Customer � ������: ���, �������, �����(������� ������). ����������� ������� ������������, ����������, ������ ������������ �� ���������  (set,get), ����� ������ �� �����. �������� ������� ������ �onst.


using namespace std;

class Customer {

private:

	char* name = nullptr;
	char* email = nullptr;
	char* phone = nullptr;

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
