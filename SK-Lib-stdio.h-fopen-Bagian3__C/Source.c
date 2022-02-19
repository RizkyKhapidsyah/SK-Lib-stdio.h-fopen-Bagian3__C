#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by GeeksForGeeks
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    FILE* demo;
    int display;

    demo = fopen("demo_file.txt", "r");

    while (1) {
        display = fgetc(demo);

        if (feof(demo)) {
            break;
        }

        printf("%c", display);
    }

    fclose(demo);

    _getch();
    return 0;
}