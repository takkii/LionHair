#include "all.h"

class LionHair {
public:
    // C++ String
    const string str = "Hello, World !";

    // C++ version info.
    const long cpp17 = 201703L;
    const long cpp14 = 201402L;
    const long cpp11 = 201103L;
    const long cpp98 = 199711L;

    // long type → string type.
    const string cpp_ver = to_string(__cplusplus);
};

int main() {

    LionHair l;
    printf("%s\n", l.str.c_str());

    if (l.cpp_ver == to_string(l.cpp17))
        cout << "現在の C++ : C++17" << endl;
    else if (l.cpp_ver == to_string(l.cpp14))
        cout << "現在の C++ : C++14" << endl;
    else if (l.cpp_ver == to_string(l.cpp11))
        cout << "現在の C++ : C++11" << endl;
    else if (l.cpp_ver == to_string(l.cpp98))
        cout << "現在の C++ : C++98" << endl;
    else
        cout << "現在の C++ : pre-standard C++" << endl;
    return 0;
}
