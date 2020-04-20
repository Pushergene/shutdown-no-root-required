#include <iostream>
#include<stdlib.h>
using namespace std;
class Program {
    public:
    void page() {
        cout << system("/usr/sbin/shutdown now") << endl;
        }
};
int main() {
    Program prg;
    prg.page();
}
