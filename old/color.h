#pragma once 

#include "vec3.h"
#include <iostream>

namespace lazy 
{
    using color = vec3;
    void write_color(std::ostream& out, const color& pixel_color);
}