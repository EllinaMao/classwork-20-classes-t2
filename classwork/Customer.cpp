#include "Customer.h"

Customer::Customer()
{
    name = new char[8]{"Unknown"};
    email = new char[8]{"Unknown"};
    phone = new char[8]{"Unknown"};
}

Customer::Customer(const char* name_b, const char* email_b, const char* phone_b)
{
    size_t size = strlen(name_b) + 1;
    name = new char[size];
    strcpy_s(name, size, name_b);

    size = strlen(email_b) + 1;
    email = new char[size];
    strcpy_s(email, size, email_b);

    size = strlen(phone_b) + 1;
    phone = new char[size];
    strcpy_s(phone, size, phone_b);
}

void Customer::SetName(const char* name_b)
{
    if (name) {
        delete[] name;
    }

    size_t size = strlen(name_b) + 1;
    name = new char[size];
    strcpy_s(name, size, name_b);
}

void Customer::SetEmail(const char* email_b)
{
    if (email) {
        delete[] email;
    }

    size_t size = strlen(email_b) + 1;
    email = new char[size];
    strcpy_s(email, size, email_b);
}

void Customer::SetPhone(const char* phone_b)
{
    if (phone) {
        delete[] phone;
    }

    size_t size = strlen(phone_b) + 1;
    phone = new char[size];
    strcpy_s(phone, size, phone_b);
}

const char* Customer::GetName() const
{
    return name;
}

const char* Customer::GetEmail() const
{
    return email;
}

const char* Customer::GetPhone() const
{
    return phone;
}

void Customer::Output() const
{
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Phone: " << phone << endl;
    cout << endl;
}

Customer::~Customer()
{
    delete[] name;
    delete[] email;
    delete[] phone;
}
