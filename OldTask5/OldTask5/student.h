#include <iostream>
using namespace std;

class student {
    string name, lastname, age;

public:
    void set_inf(string n, string ln, string a) {
        name = n;
        lastname = ln;
        age = a;
    }
    void new_age(string new_a) {
        age = new_a;
    }
    string inf(student petya) {
        return "��� ��������: " + petya.name + " ������� ��������: " + petya.lastname + " ������� ��������: " + petya.age;
    }
};
