#pragma once
#include <cstdint>
#include "config.h"

class Utils
{
public:
    Utils();
    void sleep(uint32_t sec);
 	void clearScreen();
 };

extern Utils utils;
