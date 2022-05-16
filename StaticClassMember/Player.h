#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player {
private:
    static int num_players;     //static variable
    std::string name;        //object variable
    int health;
    int xp;
public:
    std::string get_name() { return name; }
    void set_name(std::string name_val) { name = name_val; }
    Player (std::string name_val = "None", int health_val = 0, int xp_val = 0);
    Player(const Player &source);
    ~Player();
    
    static int get_num_players();        //this function is static so it only has acces so static varibles, static only belongs to the class
};

#endif // _PLAYER_H_
