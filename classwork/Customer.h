#pragma once
#include <iostream>
//Створити клас Customer з полями: ім’я, телефон, пошта(динамічні строки). Забеспечити відповідні конструктори, деструктор, методи модифікатори та аксессори  (set,get), метод виводу на екран. Позначте відповідні методи сonst.
//Створіть у main :
//1)динамічний  масив на 3 покупці, виводимо на екран
//2) статичний масив на 3 покупці, виводимо на екран

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
