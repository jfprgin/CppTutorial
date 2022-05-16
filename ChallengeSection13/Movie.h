#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

using namespace std;

class Movie
{
private:
    string name;
    string rating;
    int watched;
public:
    Movie(string name, string rating, int watched);
    Movie(const Movie &source);
    ~Movie();
    
    void set_name(string name) { this->name = name; }
    void set_rating(string rating) { this->rating = rating; }
    void set_watched(int watched) { this->watched = watched; }
    
    string get_name() const { return name; }
    string get_rating() const { return rating; }
    int get_watched() const {return watched; }
    
    void increment_watched() { watched++; }
    
    void display() const;
};

#endif // _MOVIE_H_
