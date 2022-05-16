#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

//class Player {
//private:
//    string name;
//    int health;
//    int xp;
//public:
//    void set_name(string name_val) {
//        name = name_val;
//    }
//    //Overloaded Constructors
//    Player() {
//        cout << "No args constructor called" << endl;
//    }
//    Player(string name) {
//        cout << "String arg constructor called" << endl;
//    }
//    Player(string name, int health, int xp) {
//        cout << "Three args constructor called" << endl;
//    }
//    ~Player() {
//        cout << "Destructor called for " << name << endl;
//    }
//};
//
//int main()
//{
//    {
//        Player slayer;
//        slayer.set_name("Slayer");
//    }
//    
//    {
//        Player frank;
//        frank.set_name("Frank");
//        Player hero("Hero");
//        hero.set_name("Hero");
//        Player villain("Villain", 100, 12);
//        villain.set_name("Villain");
//    }
//    
//    Player *enemy = new Player;
//    enemy->set_name("Enemy");
//    
//    Player *level_boss = new Player("Level Boss", 1000, 300);
//    level_boss->set_name("Level Boss");
//    
//    delete enemy;
//    delete level_boss;
//    
//	return 0;
//}

/**************************************************
 *                  default constructor                         *
 **************************************************/
 
//class Player {
//private:
//    string name;
//    int health;
//    int xp;
//public:
//    void set_name(string name_val) {
//        name = name_val;
//    }
//    string get_name() {
//        return name;
//    }
//    Player() {             //You have a default constructor as long as you don't provide any other constructor
//        name = "None";
//        health = 100;
//        xp = 3;
//    }
//    Player (string name_val, int health_val, int xp_val) {
//        name = name_val;
//        health = health_val;
//        xp = xp_val;
//    }
//};
//
//int main()
//{
//    Player frank;
//    Player mark("Mark", 100, 13);
//    frank.set_name("Frank");
//    cout << frank.get_name() << endl;
//    cout << mark.get_name() << endl;
//    
//    return 0;
//}

/**************************************************
 *            constructor initialization lists               *
 **************************************************/
 
//class Player {
//private:
//    string name;
//    int health;
//    int xp;
//public:
//    Player();
//    Player (string name_val);
//    Player (string name_val, int health_val, int xp_val);
//};
//
////Player::Player() {        //Previous way
////    name = "None";
////    health = 0;
////    xp = 0;
////}
//
//Player::Player()        //Better way
//    : name{"None"}, health{0}, xp{0} {
//}
//
//Player::Player(string name_val)
//    : name{name_val}, health{0}, xp{0} {
//}
//
//Player::Player (string name_val, int health_val, int xp_val)
//    : name{name_val}, health{health_val}, xp{xp_val} {
//}
//
//int main()
//{
//    Player empty;
//    Player frank("Frank");
//    Player villain("Villain", 100, 55);
//    
//    return 0;
//}

/**************************************************
 *                delegating constructors                    *
 **************************************************/

//class Player {
//private:
//    string name;
//    int health;
//    int xp;
//public:
//    Player();
//    Player (string name_val);
//    Player (string name_val, int health_val, int xp_val);
//};
//
//Player::Player()
//    : Player {"None", 0, 0} {
//        cout << "No-args constructor" << endl;
//}
//
//Player::Player(string name_val)
//    : Player {name_val, 0, 0} {
//        cout << "One-arg constructor" << endl;
//}
//
//Player::Player (string name_val, int health_val, int xp_val)
//    : name{name_val}, health{health_val}, xp{xp_val} {
//        cout << "Three-args constructor" << endl;
//}
//
//int main()
//{
//    Player empty;
//    Player frank("Frank");
//    Player villain("Villain", 100, 55);
//    
//    return 0;
//}

/**************************************************
 *                          default values                         *
 **************************************************/

//class Player {
//private:
//    string name;
//    int health;
//    int xp;
//public:
//    Player (string name_val = "None", int health_val = 0, int xp_val = 0);
//};
//
//Player::Player (string name_val , int health_val, int xp_val)
//    : name{name_val}, health{health_val}, xp{xp_val} {
//        cout << "Three-args constructor" << endl;
//}
//
//int main()
//{
//    Player empty;
//    Player frank{"Frank"};
//    Player hero {"Hero", 100};
//    Player villain{"Villain", 100, 55};
//    
//    return 0;
//}

/**************************************************
 *                       copy constructor                       *
 **************************************************/
 
//class Player {
//private:
//    string name;
//    int health;
//    int xp;
//public:
//    string get_name() { return name; }
//    int get_health() { return health; }
//    int get_xp() { return xp; }
//    Player (string name_val = "None", int health_val = 0, int xp_val = 0);
//    //Copy constructor
//    Player(const Player &source);
//    //Destructor
//    ~Player() { cout << "Destructor called for: " << name << endl; }
//};
//
//Player::Player (string name_val , int health_val, int xp_val)
//    : name{name_val},
//    health{health_val},
//    xp{xp_val} {
//        cout << "Three-args constructor " + name << endl;
//}
//
//Player::Player(const Player &source)
//    //:name{source.name}, health{source.health}, xp{source.xp}
//    : Player {source.name, source.health, source.xp} {
//        cout << "Copy constructor - made copy of: " << source.name << endl;
//}
//
//void display_player(Player p) {
//    cout << "Name: " << p.get_name() << endl;
//    cout << "Health: " << p.get_health() << endl;
//    cout << "XP: " << p.get_xp() << endl;
//}
//
//int main()
//{
//    Player my_new_object {"XXXXXX", 100, 50};
//    Player empty {my_new_object};
//    display_player(empty);
//    
//    Player frank{"Frank"};
//    Player hero {"Hero", 100};
//    Player villain{"Villain", 100, 55};
//    
//    return 0;
//}

/**************************************************
 *              shallow and deep copying                 *
 **************************************************/
 
//class Shallow {     //this is a problem, we are using the same address for different objects, when one is destroyed the other is usiing invalid memory
//private:
//    int *data;
//public:
//    void set_data_value(int d) { *data = d; }
//    int get_data_value() { return *data; }
//    //Constructor
//    Shallow(int d);
//    //Copy Constructor
//    Shallow(const Shallow &source);
//    //Destructor
//    ~Shallow();
//};
//
//Shallow::Shallow(int d) {
//    data = new int;
//    *data = d;
//}
//
//Shallow::Shallow(const Shallow &source) 
//    : data(source.data) {
//        cout << "Copy constructor - shallow copy" << endl;
//}
//
//Shallow::~Shallow() {
//    delete data;
//    cout << "Destructor freeing data" << endl;
//}
//
//void display_shallow(Shallow s) {
//    cout << s.get_data_value() << endl;
//}
//
//class Deep {
//private:
//    int *data;
//public:
//    void set_data_value(int d) { *data = d; }
//    int get_data_value() { return *data; }
//    //Constructor
//    Deep(int d);
//    //Copy instructor
//    Deep(const Deep &source);
//    //Destructor
//    ~Deep();
//};
//
//Deep::Deep(int d) {
//    data = new int;
//    *data = d;
//}
//
//Deep::Deep(const Deep &source) 
//    : Deep {*source.data} {
////        data = new int;
////        *data = *source.data;
//        cout << "Copy constructor - deep copy" << endl;
//}
//
//Deep::~Deep() {
//    delete data;
//    cout << "Destructor freeing data" << endl;
//}
//
//void display_deep(Deep s) {
//    cout << s.get_data_value() << endl;
//}
//
//int main()
//{
////    Shallow obj1 {100};
////    display_shallow(obj1);
////    
////    Shallow obj2 {obj1};
////    obj2.set_data_value(1000);
//
//    Deep obj1 {100};
//    display_deep(obj1);
//    
//    Deep obj2 {obj1};
//    obj2.set_data_value(1000);
//    
//    return 0;
//}

/**************************************************
 *                       move constructor                       *
 **************************************************/

class Move {
private:
    int *data;
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    //Constructor
    Move(int d);
    //Copy constructor
    Move(const Move &source);
    //Move constructor
    Move(Move &&source) noexcept;
    //Destructor
    ~Move();
};

Move::Move(int d) {
    data = new int;
    *data = d;
    cout << "Constructor for: " << d << endl;
}

//Copy constructor
Move::Move(const Move &source) 
    : Move {*source.data} {
        cout << "Copy constructor - deep copy for: " << *data << endl;
}

//Move constructor
Move::Move(Move &&source) noexcept
    : data{source.data} {
        source.data = nullptr;
        cout << "Move constructor - moving resource: " << *data << endl;
}

Move::~Move() {
    if (data != nullptr) {
        cout << "Destructor freeing data for:" << *data << endl;
    }
    else {
        delete data;
        cout << "Destructor freeing data for nullptr" << endl;
    }
}

int main()
{
    vector<Move> vec;
    
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});
    
    return 0;
}