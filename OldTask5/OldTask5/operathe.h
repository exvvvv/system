#include <iostream>
using namespace std;

class operathe {
    string name, address, kolvo;

public:
    void set_inf(string na, string pr, string nu) {
        name = na;
        address = pr;
        kolvo = nu;
    }
    void new_kols(string new_p) {
        kolvo = new_p;
    }
    string inf(operathe tho) {
        return "�������� ������: " + tho.name + " ����� ������: " + tho.address + " ���������� ���������� ������: " + tho.kolvo;
    }
};

