/*
 * main.cpp
 * Matthew Todd Geiger
 */

// Standard includes
#include <cstdlib>

// 3rd includes
#include <final/final.h> // Finalcut Terminal UI

// local includes
#include "macros.hpp"

int main(int argc, char** argv, char** envp) {
    UNUSED_PARAMETER(argc);
    UNUSED_PARAMETER(argv);
    UNUSED_PARAMETER(envp);

    PRINT("Launching UPNGO " BUILDVER " 0.00.00");

    return EXIT_SUCCESS;
}