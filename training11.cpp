#include <iostream>
using namespace std;

class aws {
public:
    int a, b;

    void input(int a, int b) {
        this->a = a;
        this->b = b;
    }

    void output() {
        cout << "\nA : " << a << "\nb : " << b;
    }
};

class pws : public aws {
public:
    int s, p;

    void input(int s, int p) {
        this->s = s;
        this->p = p;
    }

    void show() {
        cout << "\nP : " << p << "\nS : " << s;
    }
};

int main() {
    aws A, *p;
    pws B;

    p = &A; //ignore this
    p->input(7, 8);   
    p->output();        
    p = &B; //ignore this
    p->input(10, 20);   
    B.input(3, 4);      
    B.show();       

    return 0;
}
