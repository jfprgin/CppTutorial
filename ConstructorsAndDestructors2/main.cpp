#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
public:
    string get_name() const{         //doesn't work unless you put const
        return name;
    }
    void set_name(string name_val) {
        name = name_val;
    }
    Player (string name_val = "None", int health_val = 0, int xp_val = 0);
};

Player::Player (string name_val , int health_val, int xp_val)
    : name{name_val},
    health{health_val},
    xp{xp_val} {
}

void display_player_name(const Player &p) {
    cout << p.get_name() << endl;
}

int main()
{
    Player hero {"Hero", 100};
    const Player villain{"Villain", 100, 55};
    
    //villain.set_name("Super villain");
    cout << villain.get_name() << endl;
    cout << hero.get_name() << endl;
    
    display_player_name(villain);
    display_player_name(hero);
    
    return 0;
}