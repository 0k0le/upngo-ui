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
    M_UNUSED(argc);
    M_UNUSED(argv);
    M_UNUSED(envp);

    M_PRINT("Launching UPNGO " RELEASE " 0.00.00");

    return EXIT_SUCCESS;
}