#include <iostream>
#include <stdlib.h>
#include <ucontext.h> // need #define _XOPEN_SOURCE in MacOS
#include <stdio.h>
#define d cout << endl;
#define D(x) cout << #x << " = " << x << endl;
#define DD(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl;
using namespace std;

// class Fiber : public std::enable_shared_from_this<Fiber> {

// };


int main() {
    ucontext_t context;
    getcontext(&context);
    cout << "Hello, World!" << endl;
    setcontext(&context);
    return 0;
}