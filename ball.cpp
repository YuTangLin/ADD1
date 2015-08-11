#include <string>
#include <iostream>
#include "ball.h"
using namespace std;

Ball::Ball() {
    _radius = 0.0;
    _name = "normal ball";
    _color = "red";
}

string Ball::Name() {
    return _name;
}

void Ball::setName(string new_name) {
    _name = new_name;
}

Ball::~Ball() {
    cout << "instance killed." << endl;
}
