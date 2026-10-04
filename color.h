#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"
#include <iostream>

using color = vec3;
void write_color(std::ostream &out, const color &color_pixel)
{
    auto r = color_pixel.x();
    auto g = color_pixel.y();
    auto b = color_pixel.z();

    int rbyte = int(r * 255.999);
    int gbyte = int(g * 255.999);
    int bbyte = int(b * 255.999);

    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

#endif