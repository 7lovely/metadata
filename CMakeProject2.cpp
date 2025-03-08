#include "CMakeProject2.h"

using namespace std;

int main() {
    for (int i = 1000; i > 7; i = i - 7) {
        cout << i << " - " << "7" << " = " << i - 7 << endl;
        this_thread::sleep_for(chrono::milliseconds(20));  
    }
    cout << "Я гуль" << endl;
    return 0;
}
