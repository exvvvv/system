#include <iostream>
using namespace std;

class machine {
    string marka, model, year;

public:
    void set_inf(string ma, string mo, string y) {
        marka = ma;
        model = mo;
        year = y;
    }
    void new_marka(string new_m) {
        marka = new_m;
    }
    string inf(machine no) {
        return "����� ����������: " + no.marka + " ������ ����������: " + no.model + " ��� �������: " + no.year;
    }
};

