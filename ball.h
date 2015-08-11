#include <string>
using namespace std;

class Ball {
public:
    Ball(); // constructor
    string Name(void);
    void setName(string);
    ~Ball();
protected:
    double _radius;
    string _name;
};
