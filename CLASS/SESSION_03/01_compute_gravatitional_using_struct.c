#include <stdio.h>
#include <stdlib.h>

struct ComputeGravatational
{
    double m1;
    double m2;
    double r;
};

double ComputeGravatationalForce(struct ComputeGravatational* pData);

int main(void)
{
    struct ComputeGravatational sunEarth;
    struct ComputeGravatational sunJupitor;

    double forceBetweenSunEarth;
    double forceBetweenJupitor;

    // Code
    sunEarth.m1 = 1.9891e30;
    sunEarth.m2 = 5.9722e24;
    sunEarth.r = 149597871000;

    forceBetweenSunEarth = ComputeGravatationalForce(&sunEarth);
    printf("Gravitational Force Between the Sun and the Earth = (%lf) N\n", forceBetweenSunEarth);

    sunJupitor.m1 = 1.9891e30;
    sunJupitor.m1 = 1.89813e27;
    sunJupitor.r = 760070000000;
    forceBetweenJupitor = ComputeGravatationalForce(&sunJupitor);
    printf("Gravitational Force Between the Sun and the Jupitor: (%lf) N\n", forceBetweenJupitor);

    return (0);

}

double ComputeGravatationalForce(struct ComputeGravatational* pData)
{
    double G = 6.67 * (10e-11);
    double F;

    F = (G * pData->m1 * pData->m2) / (pData->r * pData->r);

    return F;
}