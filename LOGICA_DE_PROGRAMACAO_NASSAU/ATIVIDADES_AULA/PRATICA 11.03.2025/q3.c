#include <stdio.h>

int main() {
    float notaP1 = 7, notaP2 = 8, notaP3 = 5, mediaP, notaT1 = 5, notaT2 = 9, mediaT, mediaFinal;

    mediaP = (notaP1 + notaP2 + notaP3) / 3;
    mediaT = (notaT1 + notaT2) / 2;
    mediaFinal = (mediaP + mediaT) / 2;

    printf("Media das provas: %f \n", mediaP);
    printf("Media dos trabalhos: %f \n", mediaT);
    printf("Media Final: %f \n", mediaFinal);

    return 0;
}