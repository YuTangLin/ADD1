#include <iostream>
#include "ball.h"
#include "blackBall.h"

using namespace std;
int main(int argc, char* argv[]) {

    Ball ball1;
    cout << "ball name: " << ball1.Name() << endl;
    BlackBall ball2;
    cout << "ball2 name: " << ball2.Name() << endl;
    ball2.setName("ball2");
    cout << "ball2 name: " << ball2.Name() << endl;
    ball2.setName("ball", "white");
    cout << "ball2 name: " << ball2.Name() << endl;
    return 0;
}
