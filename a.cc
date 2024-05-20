#include <iostream>
#include <thread>
#include <cstdio>
using namespace std;


void f() {
    static thread_local int a = 0;
    ++a;
    // printf("%x: %d\n", this_thread::get_id(), a);
    cout << this_thread::get_id() << ": " << (&a) << ":  " << dec << a << endl;
}

int main() {
    thread t1(f), t2(f);
    t1.join();
    t2.join();
    return 0;
}
// SSA 平稳子空间分析：用于识别平稳子空间，不考虑子空间中数据方差的保留
// MMDE 最大平均差异嵌入：