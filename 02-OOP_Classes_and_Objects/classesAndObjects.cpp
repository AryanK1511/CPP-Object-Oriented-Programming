#include <iostream>
#include <string>
using namespace std;

// Declaring a class
class Player {
    public:
    // Attributes
    string name = "Player";
    int health = 100;
    int xp = 7829;

    // Methods
    void talk(string text) {
        cout << name << " says " << text << endl;
    }
    bool is_dead();
};

class Account {
    public:
    // Attributes
    string name = "Account";
    double balance = 0;

   // methods
    void deposit(double bal) {balance += bal; cout << "In deposit" << endl; }
    void withdraw(double bal) {balance -= bal; cout << "In withdraw" << endl;  }
};

int main()
{
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;
    
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi There!");

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    enemy->talk("I'll destroy you!");

    return 0;
}