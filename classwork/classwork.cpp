//Створити клас Customer з полями: ім’я, телефон, пошта(динамічні строки). Забеспечити відповідні конструктори, деструктор, методи модифікатори та аксессори  (set,get), метод виводу на екран. Позначте відповідні методи сonst.




//Створіть у main :
//1)динамічний  масив на 3 покупці, виводимо на екран
//2) статичний масив на 3 покупці, виводимо на екран


#include <iostream>
#include "Customer.h"

using namespace std;

int main()
{
    const int size = 3;

    Customer cust_st[size] = {
        Customer("Alice", "example@gmail.com", "+3800449477"),
        Customer("Alana", "example@gmail.com", "+3800449477"),
        Customer("Oleksei", "example@gmail.com", "+3800449477")
    };

    Customer* cust_din = new Customer[size]{
        Customer("Tatiana", "example@gmail.com", "+3800449477"),
        Customer("Natasha", "example@gmail.com", "+3800449477"),
        Customer("Dima", "example@gmail.com", "+3800449477")
    };


    cout << "Static array of customers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cust_st[i].Output();
    }


    cout << "Dynamic array of customers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cust_din[i].Output();
    }

    delete[] cust_din;

    return 0;
}
