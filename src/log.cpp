#include "log.h"

void Log::log(const std::string &str) {
    std::cout << str << '\n';
    output_stream << str << '\n';
}

void Log::fatalLog(const std::string &str) {
    log(str);
    throw std::runtime_error(str + '\n');
}
