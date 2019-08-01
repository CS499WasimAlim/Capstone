#include <stdio.h>
#include <stdlib.h>
#define g 9.8 /*gravity 9.80m/s^2 */
#define rate 1000 /* mass of 1 m^3 water is 1000kg*/
#define eff 0.9 /* Work to power conversion efficiency*/
#define c 1e-6 /*conversion from watts to megawatts*/
int main()
{
    double w, m, h, p, flow;

    printf("PROGRAM TO PREDICT POWER GENERATION IN MEGAWATTS\n");
    printf("Enter the height of the Dam=>\n");
    scanf("%lf",&h);
    printf("Enter the flow of water in cubic meters=>\n");
    scanf("%lf",&flow);

    m=flow*rate; /* conversion from flow rate in cubic meters to mass in kg*/
    w=m*g*h; /* calculation of work performed*/
    p=eff*w*c; /* calculation of power from work using typical efficiency*/

    printf("Based on height %f meters and flow rate %f cubic meters, Total power produced is %f Megawatts", h, flow, p);

    return 0;
}
