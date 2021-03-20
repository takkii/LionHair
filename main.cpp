#include "all.h"

class LionHair {
    public:
    const string str = "Hello, World !";
};
    int main() {

        LionHair l;
        printf("%s\n", l.str.c_str());
        // C++ version info.
        auto cpp17 = 201703L;
        auto cpp14 = 201402L;
        auto cpp11 = 201103L;
        auto cpp98 = 199711L;

        // long type → string type.
        const string cpp_ver = to_string(__cplusplus);

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
