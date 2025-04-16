#include <iostream>

using namespace std;

struct vec3
{
    float x, y, z;
    vec3(float x1, float y1, float z1) : x(x1), y(y1), z(z1) {}
};

vec3 crossProduct(const vec3 &a, const vec3 &b)
{
    return vec3(
        (a.y * b.z) - (a.z * b.y),
        (a.z * b.x) - (a.x * b.z),
        (a.x * b.y) - (a.y * b.x));
}
float dotProduct(const vec3 &a, const vec3 &b)
{
    return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
}

int main()
{
    vec3 testVector1 = {1, 2, 3};
    vec3 testVector2 = {4, 5, 6};

    vec3 crossProductVector = crossProduct(testVector1, testVector2);
    float dotProductScalar = dotProduct(testVector1, testVector2);

    puts("Cross product: ");
    printf("X = %.2f\n", crossProductVector.x);
    printf("Y = %.2f\n", crossProductVector.y);
    printf("Z = %.2f\n", crossProductVector.z);
    printf("Dot product: %.2f", dotProductScalar);

    return 0;
}