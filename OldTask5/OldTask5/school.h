#include <iostream>
using namespace std;

class school {
    string name, address, kolvo;

public:
    void set_inf(string na, string pr, string nu) {
        name = na;
        address = pr;
        kolvo = nu;
    }
    void new_kolu(string new_p) {
        kolvo = new_p;
    }
    string inf(school svh) {
        return "�������� �����: " + svh.name + " ����� �����: " + svh.address + " ���������� �������� �����: " + svh.kolvo;
    }
};
