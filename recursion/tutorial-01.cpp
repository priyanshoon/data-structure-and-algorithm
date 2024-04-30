#include <bits/stdc++.h>
using namespace std;

// void message() {
//     cout << "Hello, World!" << endl;
// }
//
// void message1() {
//     cout << "Hello, World!" << endl;
//     message();
// }
//
// void message2() {
//     cout << "Hello, World!" << endl;
//     message1();
// }
//
// void message3() {
//     cout << "Hello, World!" << endl;
//     message2();
// }

void print_five_times(int n) {
    if (n > 5) return ;
    cout << n << endl; n++;
    print_five_times(n);
}

int main(void) {
    cout << "Recursion Tutorial" << endl;
    // message3();
    print_five_times(1); return 0;
}
