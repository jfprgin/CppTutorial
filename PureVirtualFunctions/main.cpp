#include <iostream>
#include <vector>

class Shape {                   //Abstract Base class
private:
    // attributes commont to all shapes
public:
    virtual void draw() = 0;
    virtual void rotate() = 0;
    virtual ~Shape() {}
};

class Open_Shape: public Shape {        //Abstract class
public:
    virtual ~Open_Shape() {}
};

class Closed_Shape: public Shape {        //Abstract class
public:
    virtual ~Closed_Shape() {}
};

int main()
{
	printf("hello world\n");
	return 0;
}
