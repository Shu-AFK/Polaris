#ifndef POLARIS_LOG_H
#define POLARIS_LOG_H

#include <iostream>
#include <fstream>
#include <stdexcept>

class Log {
private:
    std::ofstream output_stream;
    bool useLogfile;

public:
    explicit Log(const std::string& filename) {
        if(filename.empty()) {
            useLogfile = false;
            return;
        }

        output_stream.open(filename);
        if(!output_stream.is_open()) {
            throw std::runtime_error("Failed to open file: " + filename);
        }
        useLogfile = true;
    }

    ~Log() {
        if (useLogfile)
            output_stream.close();
    }

    void log(const std::string &str);
    [[noreturn]] void fatalLog(const std::string &str);
};


#endif //POLARIS_LOG_H
