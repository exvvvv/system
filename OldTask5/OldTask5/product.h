#include <iostream>
using namespace std;

class product {
    string name, price, number;

public:
    void set_inf(string na, string pr, string nu) {
        name = na;
        price = pr;
        number = nu;
    }
    void new_price(string new_p) {
        price = new_p;
    }
    string inf(product pro) {
        return "��� ������: " + pro.name + " ��������� ������: " + pro.price + " ���������� ������: " + pro.number;
    }
};