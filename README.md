# cmake_qt_example
Example how to initiate a C++ project CMake to use QtCreator

## Compile the project

```
mkdir build
cd build
cmake ..
make
```

## Open with Qt creator

Open a file or project... and choose CMakeLists.txt

### Select kit

Keep only the desktop kit.

If gdb, g++ ... are installed they will be auto detected otherwise
you will have to select the tools in Manage Kit... To get the pathes:

```
which g++
which gdb
```

### Debug CMake

To get Makefile traces as g++ command line to see -I pathes ...

In project:

Build, select advanced and set CMAKE_VERBOSE_MAKEFILE to ON.

### Debug

You can now compile and execute by clicking play.

You can set a breakpoint by clicking on the left of the line number.
Then click play in debug mode.

It will stop on the breakpoint and you will be able to inspect object content
on the right in the debug view.

