#include "all.h"

int main() {
    const string str = "Hello, World !";
    cout << str << endl;

    // C++ version info.
    const long cpp17 = 201703L;
    const long cpp14 = 201402L;
    const long cpp11 = 201103L;
    const long cpp98 = 199711L;

    // long type → string type.
    string cpp_ver = to_string(__cplusplus);

    if (cpp_ver == to_string(cpp17))
        cout << "現在の C++ : C++17" << endl;
    else if (cpp_ver == to_string(cpp14))
        cout << "現在の C++ : C++14" << endl;
    else if (cpp_ver == to_string(cpp11))
        cout << "現在の C++ : C++11" << endl;
    else if (cpp_ver == to_string(cpp98))
        cout << "現在の C++ : C++98" << endl;
    else
        cout << "現在の C++ : pre-standard C++" << endl;
    return 0;
}
