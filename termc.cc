#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    // If it has more than 3 arguments it's incorrect execution
    if (argc > 3) {
        return 0;       
    }
    // Check what is the argument
    string argument = argv[1];

    if (argument == "-n") {
        // Night mode
        cout << "correcte" << endl;
    } else if (argument == "-d") {
        // Day mode
        cout << "correcte" << endl;
    }

    
}
