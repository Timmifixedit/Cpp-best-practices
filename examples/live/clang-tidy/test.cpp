#include <string>
#include <iostream>



class NamedValue {
    int val;
    std::string name;

public:
    NamedValue(int val, const std::string &name) : name(name), val(val) {}
    int getValue() {

        return val;
    }

    const std::string &getName() const {
        return name;
    }
};


int main(void) {
    NamedValue v(17, "Hello");
    std::cout << v.getName() << ": " << v.getValue() << std::endl;
    return 0;
}
