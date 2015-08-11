#include <iostream>

using namespace std;
int main(int argc, char* argv[]) {
    cout << "argc: " << argc << endl;
    int i;
    for (i = 0; i < argc; i++) {
        cout << "argv_" << i << " :" << argv[i] << endl;
    }
    return 0;
}
