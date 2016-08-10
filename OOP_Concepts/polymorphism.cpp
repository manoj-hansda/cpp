#include <iostream>

using namespace std;

class Enemy {
    protected:
        int attackPower;
    public:
        void setAttackPower(int a) {
            attackPower = a;
        }
};

class Ninja : public Enemy {
    public:
        void attack() {
            cout << "ninja attack" << attackPower;
        }
};

class Monster : public Enemy {
    public:
        void attack() {
            cout << "maonster attack" << attackPower;
        }
};

int main()
{

}
