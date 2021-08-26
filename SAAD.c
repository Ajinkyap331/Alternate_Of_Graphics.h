#include <stdio.h>

void circle(int x, int y, int r)
{
    FILE *ptr = fopen("data.txt", "a");
    fprintf(ptr, "%s\n%d %d %d\n", "circle", x, y, r);
    fclose(ptr);
}
void moveto(int x, int y)
{
    FILE *ptr = fopen("data.txt", "a");
    fprintf(ptr, "%s\n%d %d\n", "moveto", x, y);
    fclose(ptr);
}

void line(int a, int b, int c, int d)
{
    FILE *ptr = fopen("data.txt", "a");
    fprintf(ptr, "%s\n%d %d %d %d\n", "line", a, b, c, d);
    fclose(ptr);
}

void addimage(const char a[])
{
    FILE *ptr = fopen("data.txt", "a");
    fprintf(ptr, "%s\n%s\n", "addimage", a);
    fclose(ptr);
}

void rect(int a, int b, int c, int d)
{
    FILE *ptr = fopen("data.txt", "a");
    fprintf(ptr, "%s\n%d %d %d %d\n", "rect", a, b, c, d);
    fclose(ptr);
}

void setcolor(const char a[])
{
    FILE *ptr = fopen("data.txt", "a");
    fprintf(ptr, "%s\n%s\n", "setcolor", a);
    fclose(ptr);
}

void arc(int x, int y, int start_angle, int end_angle, int radius)
{
    FILE *ptr = fopen("data.txt", "a");
    fprintf(ptr, "%s\n%d %d %d %d %d\n", "arc", x, y, start_angle, end_angle, radius);
    fclose(ptr);
}

void width(int w)
{
    FILE *ptr = fopen("data.txt", "a");
    fprintf(ptr, "%s\n%d \n", "width", w);
    fclose(ptr);
}

void forward(int p)
{
    FILE *ptr = fopen("data.txt", "a");
    fprintf(ptr, "%s\n%d \n", "forward", p);
    fclose(ptr);
};
void backward(int p)
{
    FILE *ptr = fopen("data.txt", "a");
    fprintf(ptr, "%s\n%d \n", "backward", p);
    fclose(ptr);
}
void right(int d)
{
    FILE *ptr = fopen("data.txt", "a");
    fprintf(ptr, "%s\n%d \n", "right", d);
    fclose(ptr);
}
void left(int d)
{
    FILE *ptr = fopen("data.txt", "a");
    fprintf(ptr, "%s\n%d \n", "left", d);
    fclose(ptr);
}

void style(const char c[], int f, const char t[])
{
    FILE *ptr = fopen("data.txt", "a");
    fprintf(ptr, "%s\n%s %d %s\n", "style", c, f, t);
    fclose(ptr);
}

void write(const char t[], const char a[])
{
    FILE *ptr = fopen("data.txt", "a");
    fprintf(ptr, "%s\n%s %s\n", "write", t, a);
    fclose(ptr);
}
