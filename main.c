#include <stdio.h>
#include <stdlib.h>
#include "Graphics/SAAD.h"

int main()
{
    start();
    width(5);
    char color[][6] = {"red", "blue", "black", "green"};
    for (int i = 10; i <= 20; i += 10)
    {
        setcolor(color[(i / 10) % 4]);
        circle(i, i, 60);
        // forward(i*10);
    }
    end(3);
    return 0;
}
