#include <iostream>
using namespace std;

class absolutecinema {
    string name, address, kolvo;

public:
    void set_inf(string na, string pr, string nu) {
        name = na;
        address = pr;
        kolvo = nu;
    }
    void new_kolac(string new_p) {
        kolvo = new_p;
    }
    string inf(absolutecinema puk) {
        return "�������� ����������: " + puk.name + " ����� ����������: " + puk.address + " ���������� ������� ����������: " + puk.kolvo;
    }
};

