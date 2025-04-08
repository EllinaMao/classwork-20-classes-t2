#pragma once
#include <iostream>

//Створити клас Customer з полями: ім’я, телефон, пошта(динамічні строки). Забеспечити відповідні конструктори, деструктор, методи модифікатори та аксессори  (set,get), метод виводу на екран. Позначте відповідні методи сonst.


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
