#include <stdio.h>
#include <stdlib.h>
#include "SAAD.h"

int main()
{
    FILE *ptr = fopen("data.txt", "w");
    fclose(ptr);
    width(5);
    char color[][30] = {"red", "blue", "black", "green"};
    for (int i = 10; i <= 100; i += 10)
    {
        setcolor(color[(i / 10) % 4]);
        for(int j = 1 ; j <= i; j+=1){
            forward(j*3);
            right(i);
        }
    }
    PY;
    return 0;
}
