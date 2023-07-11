#include <stdlib.h>

#ifndef LUNA_QS_CSV
#define LUNA_QS_CSV

char ***parse_csv(const char* const);

char ***parse_csv(){
    unsigned int rows = 0;
    unsigned int columns = 0;

    char*** doc = (char***) malloc(sizeof(char ***));
    if (doc == NULL) return NULL;

    char* line = malloc(sizeof);
    size_t tam = 0;
    size_t i = 0;
    int c = getchar();

    while (c != EOF){
        if (c == 0x0a){
            i = 0;
            continue;
        }
        i++;
        if (tam-1 == i){
            tam = extendLine(&line, tam);
            if (tam == 0) return NULL;
        }
    }
    return doc;
}

size_t extendLine(char** buffer, size_t oldsize){
    *buffer = (char*) realloc(*buffer, oldsize+5);
    if (realloc == NULL) return 0;
    return oldsize+5;
}

#endif // LUNA_QS_CSV
