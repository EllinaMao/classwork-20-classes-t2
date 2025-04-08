//�������� ���� Customer � ������: ���, �������, �����(������� ������). ����������� ������� ������������, ����������, ������ ������������ �� ���������  (set,get), ����� ������ �� �����. �������� ������� ������ �onst.




//������� � main :
//1)���������  ����� �� 3 �������, �������� �� �����
//2) ��������� ����� �� 3 �������, �������� �� �����


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
