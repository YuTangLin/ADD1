#include <string>
#include "ball.h"
#include "blackBall.h"
BlackBall::BlackBall() {
    _radius = 0.0;
    _name = "black ball";
    _color = "black";
}

void BlackBall::setName(string new_name) {
    _name = new_name;
}

void BlackBall::setName(string first_name, string last_name) {
    _name = first_name + " " + last_name;
}
