#include <stdio.h>
struct employee
{
    int code;
    float sallery;
    char name[10];
};

int main()
{
    struct employee google[100]; // an array of structure.
    // We can access the data using

    google[0].code = 001;
    google[1].code = 392;
    struct employee dhiraj = {8, 50.5, "dhiraj"};
    printf("%d %.2f %s", dhiraj.code, dhiraj.sallery, dhiraj.name);
    return 0;
}