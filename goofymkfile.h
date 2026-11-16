#include <stdio.h>

FILE goofyfile(){
    FILE *goofy;
    goofy = fopen("goofy.txt", "w");
    fclose(goofy);
}
