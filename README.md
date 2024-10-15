# Polaris

Polaris is a simple x86_64 virtual machine designed for educational purposes. It demonstrates basic concepts of CPU,
memory, and logging subsystems within a virtualized environment.

## Getting Started

### Prerequisites

Make sure you have the following installed:

- CMake 3.10 or higher
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

#### On Windows (Using Visual Studio)

1. Open the generated solution file (`Polaris.sln`) in Visual Studio.
2. Build the solution by selecting `Build > Build Solution` in the menu or using the `Ctrl+Shift+B` shortcut.

Alternatively, you can build the solution from the command line using `msbuild`:

```sh
msbuild Polaris.sln /p:Configuration=Release
```

### Running Polaris

Use the following command-line options to run Polaris:

```sh
./Polaris --memory <amount_in_bytes> [--logfile <logfile_path>]
```

### Command-Line Options

- `-h, --help`: Prints all options
- `-m, --memory`: Specifies the amount of memory the VM can access (required)
- `-l, --logfile`: Specifies the output file for the log (optional)

### Example

To run Polaris with 1024MB of memory and output logs to `vm.log`:

```sh
./Polaris --memory 1073741824 --logfile vm.log
```

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE.md) file for details.