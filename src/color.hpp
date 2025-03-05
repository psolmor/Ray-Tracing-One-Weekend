#ifndef COLOR_H
#define COLOR_h

#include "vec3.hpp"

using color=vec3;

void write_color(std::ostream& out,const color& pixel_color){
    auto r=pixel_color.x();
    auto g=pixel_color.y();
    auto b=pixel_color.z();

    int rbyte = int(255.999 * r);
    int gbyte = int(255.999 * g);
    int bbyte = int(255.999 * b);

    // Write out the pixel color components.
    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

#endif
