#include "src/cpu.h"
#include "src/memory.h"
#include "src/log.h"

#include <cxxopts.hpp>
#include <iostream>

int main(int argc, char **argv) {
    cxxopts::Options options("Polaris", "Polaris is an x86_64 virtual machine");

    options.add_options()
            ("h,help", "Prints all options")
            ("m,memory", "Specifies the amount of memory the VM can access", cxxopts::value<uint64_t>())
            ("l,logfile", "Specifies the output file for the log", cxxopts::value<std::string>());

    auto result = options.parse(argc, argv);

    if (result.count("help")) {
        std::cout << options.help() << std::endl;
        return 0;
    }

    if (!result.count("memory")) {
        std::cerr << "Memory size not specified. Please use the --memory option to specify the amount of memory." << std::endl;
        return -1;
    }

    Log log(result.count("logfile") ? result["logfile"].as<std::string>() : "");
    T_CPU cpu;
    T_MEMORY memory(result["memory"].as<uint64_t>());

    return 0;
}