#include <stdio.h>
#include <stdlib.h>
#include "SAAD.h"

int main()
{
    FILE *ptr = fopen("data.txt", "w+");
    fclose(ptr);
    width(5);
    char color[][6] = {"red", "blue", "black", "green"};
    for (int i = 10; i <= 100; i += 10)
    {
        setcolor(color[(i / 10) % 4]);
        circle(i, i, 60);
    }
    PY; // Do not remove this
    return 0;
}
