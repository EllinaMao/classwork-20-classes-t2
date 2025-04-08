//�������� ���� Customer � ������: ���, �������, �����(������� ������). ����������� ������� ������������, ����������, ������ ������������ �� ���������  (set,get), ����� ������ �� �����. �������� ������� ������ �onst.

//������� � main :
//1)���������  ����� �� 3 �������, �������� �� �����
//2) ��������� ����� �� 3 �������, �������� �� �����


#include <iostream>
#include "Customer.h"

using namespace std;
//comment
int main()
{
    const int size = 3;

    Customer cust_st[size] = {
           Customer("Alice", "example@gmail.com", "+3800442377"),
           Customer("Alana", "example@gmail.com", "+38004494442"),
           Customer("Oleksei", "example@gmail.com", "+38004412345")
       };

       Customer* cust_din = new Customer[size]{
           Customer("Tatiana", "example@gmail.com", "+38004467890"),
           Customer("Natasha", "example@gmail.com", "+38004454321"),
           Customer("Dima", "example@gmail.com", "+38004498765")
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
