#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float epsilon   = 19.8; 
float sigma     = 3.38;
float r;

double lennard_jones(double r) {
    double V_lg = 4*epsilon*(pow((sigma / r), 12) - pow((sigma / r), 6));
    return V_lg;
}

int main(int argc, char *argv[]) {
    r = atof(argv[1]);
    printf("Lennard-Jones Potential\n");
    for(float i = -r; i < r; i++){
        printf("r = %f Angstrom, V_lg = %E kJ/mol\n", i, lennard_jones(i));   
    }
    return 0;   
}


