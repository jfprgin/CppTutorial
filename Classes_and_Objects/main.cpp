#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player {
public:
    //attributes
    string name {"Player"};
    int health {100};
    int xp {3};
    
    //methods
    void talk(string text_to_say) {cout << name << " says " << text_to_say << endl; }
    bool is_dead();
};

class Player2 {
private:
    //attributes
    string name {"Player"};
    int health;
    int xp;
public:    
    //methods
    void talk(string text_to_say) {cout << name << " says " << text_to_say << endl; }
    bool is_dead();
};

class Account{
public:
    //attributes
    string name {"Account"};
    double balance {0.0};
    
    //methods
    bool deposit(double bal) {balance += bal; cout << "In deposit" << endl;}
    bool withdraw(double bal) {balance -= bal; cout << "In withdraw" << endl;}
};

int main(int argc, char **argv)
{
//    Account frank_account;
//    Account jim_account;
//    
//    Player frank;
//    Player hero;
//    
//    Player players[] {frank, hero};
//    vector<Player> player_vec {hero};
//    player_vec.push_back(hero);
//    
//    Player *enemy {nullptr};
//    enemy = new Player;
//    
//    delete enemy;
    
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;
    
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);
    
    Player frank;
    
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    
    enemy->talk("I will destroy you!");
    
    delete enemy;
    
    Player2 frank2;
    //frank2.name = "Frank";      //error, name is a private attribute
    //cout << frank2.health << endl;        //error, health is a private attribute
    frank2.talk("Hello there");
    
	return 0;
}
