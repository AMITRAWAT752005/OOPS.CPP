#include<iostream>
using namespace std;

class A{
    public:
        void func(int &val){
            val = val*2;
        }
};

class B{
    public:
        void func(int &val){
            val = val*3;
        }
};

class C{
    public:
        void func(int &val){
            val = val*5;
        }
};

class D{
    int val;
    int counta , countb , countc;
    public:
        D(int val = 1, int counta = 0, int countb = 0, int countc = 0){
            this->val=val;
            this->counta=counta;
            this->countb=countb;
            this->countc=countc;
        }

        void update_val(int new_val){
            A a;
            B b;
            C c;

            while (new_val % 2 == 0) {
                new_val /= 2;
                a.func(val);
                counta++;
            }
            while (new_val % 3 == 0) {
                new_val /= 3;
                b.func(val);
                countb++;
            }
            while (new_val % 5 == 0) {
                new_val /= 5;
                c.func(val);
                countc++;
            }
        }

        void display() {
            cout << "A's func called " << counta << " times" << endl;
            cout << "B's func called " << countb << " times" << endl;
            cout << "C's func called " << countc << " times" << endl;
        }
};

int main() {
    D d;
    int new_val = 30;
    d.update_val(new_val);
    d.display();
    return 0;
}
