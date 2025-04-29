#include <iostream>
using namespace std;

class teacher {
    string name, lastname, pred;

public:
    void set_inf(string na, string ls, string lo) {
        name = na;
        lastname = ls;
        pred = lo;
    }
    void new_pred(string new_a) {
        pred = new_a;
    }
    string inf(teacher tea) {
        return "��� ������� : " + tea.name + " ������� �������: " + tea.lastname + " ������� �������: " + tea.pred;
    }
};
