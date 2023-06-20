#include <ccd/ccd.h>
#include <ccd/quat.h>
#include <ccd/vec3.h>

#include <cstdlib>
#include <iostream>

int main()
{
    ccd_t ccd;
    CCD_INIT(&ccd);  // initialize ccd_t struct

    // Regression for https://github.com/conda-forge/libccd-feedstock/issues/8
    printf("Location of origin is %lf %lf %lf\n", 
           ccd_vec3_origin[0], ccd_vec3_origin[1], ccd_vec3_origin[2])
    
    return EXIT_SUCCESS;
}