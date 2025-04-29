#include <iostream>
using namespace std;

class musumisk {
    string name, address, kolvo;

public:
    void set_inf(string na, string pr, string nu) {
        name = na;
        address = pr;
        kolvo = nu;
    }
    void new_kole(string new_p) {
        kolvo = new_p;
    }
    string inf(musumisk mus) {
        return "�������� �����: " + mus.name + " ����� �����: " + mus.address + " ���������� ���������� �����: " + mus.kolvo;
    }
};

