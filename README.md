# Polaris

Polaris is a simple x86_64 virtual machine designed for educational purposes. It demonstrates basic concepts of CPU,
memory, and logging subsystems within a virtualized environment.

## Getting Started

### Prerequisites

Make sure you have the following installed:

- CMake 3.29 or higher
- A compatible C++23 compiler

### Cloning the Repository

Clone the repository and its submodules:

```sh
git clone --recurse-submodules https://github.com/Shu-AFK/Polaris.git
cd Polaris
```

### Building Polaris

1. Create a build directory:
    ```sh
    mkdir build
    cd build
    ```

2. Run CMake:
    ```sh
    cmake ..
    ```

### Running Polaris

Use the following command-line options to run Polaris:

```sh
./Polaris --memory <amount_in_bytes> [--logfile <logfile_path>]
```

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE.md) file for details.