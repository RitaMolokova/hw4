using namespace std;
#include <iostream>
#include <random>

class fraction {
private:
    int a, b;
public:
    void Print() {
        cout << "Result (a/b): " << a / b << endl;
    }
    void Input(int c, int d) {
        a = c;
        b = d;
    }
    void InputRandom() {
        srand(time(0));
        a = 1 + rand() % (100 - 1 + 1);
        b = 1 + rand() % (100 - 1 + 1);
    }
};

int main()
{
    fraction c;
    c.Input(4, 2);
    c.Print();

    fraction d;
    d.InputRandom();
    d.Print();
}



