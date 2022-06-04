#include <stdio.h>  /* printf(), scanf() */
#include <math.h>   /* for sqrt() */

/* Start of given structure and function declaration */
struct line {
    struct point {
        float x;
        float y;
    } point1, point2;
    float *midpoint;
    float slope;
    float distance;
};


float solveSlope(struct line line1);
float *solveMidpoint(struct line line1);
float solveDistance(struct line line1);
void getSlopeInterceptForm(struct line line1);
/* End of given structure and function declaration */

int main() {
    /* Points in struct variable declaration */
    struct line line1;

    /* Prompt the user to enter x and y for point 1 and point 2 respectively */
    printf("Enter x and y for point1: ");
    scanf("%f %f", &line1.point1.x, &line1.point1.y);
    printf("Enter x and y for point2: ");
    scanf("%f %f", &line1.point2.x, &line1.point2.y);

    /* Store the input into the struct */
    line1.slope = solveSlope(line1);
    line1.distance = solveDistance(line1);
    line1.midpoint = solveMidpoint(line1);

    /* Display output */ 
    printf("Slope: %g", line1.slope);
    printf("\nMidpoint: (%g , %g)", *line1.midpoint, *(line1.midpoint + 1));
    printf("\nDistance between 2 points: %g", line1.distance);
    getSlopeInterceptForm(line1);

    return 0;
}

/* Solves for Slope by:
    (y₂ - y₁)/(x₂ - x₁) */
float solveSlope(struct line line1) {
    float slope = (line1.point1.y - line1.point2.y) / (line1.point1.x - line1.point2.x);
    return slope;
}

/* Solves for Midpoint by:
    ((x₁ + x₂)/2, (y₁ + y₂)/2) */
float *solveMidpoint(struct line line1) {
    static float midpoint[2];
    midpoint[0] = (line1.point1.x + line1.point2.x) / 2;
    midpoint[1] = (line1.point1.y + line1.point2.y) / 2;
    return midpoint;
}

/* Solves for Distance by:
    Sqrt([(x₂ - x₁)² + (y₂ - y₁)²]) */
float solveDistance(struct line line1) {
    float x, y;
    x = line1.point1.x - line1.point2.x;
    y = line1.point1.y - line1.point2.y;
    float distance = sqrt((x * x) + (y * y));
    return distance;
}

/* Solves for Slope Intercept Form by:
    y = mx + b */
void getSlopeInterceptForm(struct line line1) {
    float b = line1.point2.y - line1.point2.x * solveSlope(line1);
    printf("\ny = %gx + %g", solveSlope(line1), b);
}