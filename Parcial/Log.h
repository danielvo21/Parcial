#ifndef Log_H
#define Log_H

#include <windows.h>
#include <stdio.h>

#define PF(a) printf(a)

#define LOG(format, ...) log(__FILE__, __LINE__, format, __VA_ARGS__);
void log(const char file[], int line, const char* format, ...);

#endif