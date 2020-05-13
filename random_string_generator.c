#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char chars[] = "abcdefghijklmnopqrstuvwxyz";

    int length=rand()%20+4;     //slowa 4-23 literowe

    char* word=malloc((length+1)*sizeof(char));
    int i;
    for (i = 0; i < length; i++) {
        word[i]=(chars[(int) ((rand() / ((double) RAND_MAX + 1)) * 26)]);
    }
    word[length]='\0';
    
    printf("%s",word);
}
