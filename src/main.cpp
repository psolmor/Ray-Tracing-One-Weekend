#include <iostream>
#include "color.hpp"
#include "vec3.hpp"

using namespace std;

int main(){
    // image 

    int image_width=256;
    int image_height=256;

    // Render 
    cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for(int j=0;j<image_height;j++){
        clog << "\rScanlines remaining: " << (image_height-j) << ' ' << flush;
        for(int i=0;i<image_width;i++){
            auto pixel_color = color(double(i)/(image_width-1), double(j)/(image_height-1), 0);
            write_color(std::cout, pixel_color);
        }
    }
    clog << "\rDone.        \n";
}