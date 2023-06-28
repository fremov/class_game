#pragma once
#include <iostream>

class ConsoleColor {
public:
    static std::ostream& red(std::ostream& os) {
        return applyColor(os, "\033[1;31m");
    }

    static std::ostream& green(std::ostream& os) {
        return applyColor(os, "\033[1;32m");
    }

    static std::ostream& yellow(std::ostream& os) {
        return applyColor(os, "\033[1;33m");
    }

    static std::ostream& reset(std::ostream& os) {
        return applyColor(os, "\033[0m");
    }

private:
    static std::ostream& applyColor(std::ostream& os, const char* colorCode) {
        os << colorCode;
        return os;
    }
};


