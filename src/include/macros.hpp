/*
 * macros.hpp
 * Matthew Todd Geiger
 */

#pragma once

#include <cstdio>

#ifndef _DEBUG
#define BUILDVER "RELEASE"
#else
#define BUILDVER "DEBUG"
#endif

// Check for macro conflicts
#ifdef UNUSED_PARAMETER
    #error UNUSED_PARAMETER already defined
#endif

#ifdef _DEBUG // Debug macros

#define UNUSED_PARAMETER(x) (void)(x)
#define ERROR(str, ...) fprintf(stderr, "%s:%s() ERROR @ L%d : " str "\n", __FILE__, __func__, __LINE__ __VA_OPT__(,) __VA_ARGS__)
#define FATAL(str, ...) { fprintf(stderr, "%s:%s() FATAL @ L%d : " str "\n", __FILE__, __func__, __LINE__ __VA_OPT__(,) __VA_ARGS__); exit(EXIT_FAILURE); } (void)(0)

#else // Release macros

#define UNUSED_PARAMETER(x)
#define ERROR(str, ...) fprintf(stderr, "ERROR: " str "\n" __VA_OPT__(,) __VA_ARGS__)
#define FATAL(str, ...) { fprintf(stderr, "FATAL: " str "\n" __VA_OPT__(,) __VA_ARGS__); exit(EXIT_FAILURE); } (void)(0)

#endif

// Macros independent of version
#define PRINT(str, ...) printf(str "\n" __VA_OPT__(,) __VA_ARGS__)