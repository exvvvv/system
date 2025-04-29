#include <iostream>
using namespace std;

class airport {
    string name, address, kolvo;

public:
    void set_inf(string na, string pr, string nu) {
        name = na;
        address = pr;
        kolvo = nu;
    }
    void new_kolnom(string new_p) {
        kolvo = new_p;
    }
    string inf(airport ait) {
        return "�������� ���������: " + ait.name + " ����� ���������: " + ait.address + " ���������� ������ ���������: " + ait.kolvo;
    }
};

