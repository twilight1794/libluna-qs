#include "document.h"

struct Luna_QS_Document* Luna_QS_Document_Create(void){
    return (struct Luna_QS_Document*) malloc(sizeof(Luna_QS_Document));
}
void Luna_QS_Document_Destroy(struct Luna_QS_Document** doc){
    free(*doc);
}

int Luna_QS_Parse_V1(struct Luna_QS_Document* const doc, const char* stream){
    size_t i = 0;
    while (stream[i] != 0){
        switch (stream[i]){
        case 'Q':
            break;
        case 'P':
            break;
        case 'L':
            break;
        case '-':
            break;
        case ' ':
            continue;
        }
    }
    return 0;
}

int Luna_QS_Parse_V1_E(struct Luna_QS_Document* const doc, const char* stream);
int Luna_QS_Parse_CSV(struct Luna_QS_Document* const doc, const char* stream);
int Luna_QS_Parse_CSV_E(struct Luna_QS_Document* const doc, const char* stream);

int Luna_QS_Dump_V1(const char*, const struct Luna_QS_Document* doc);
int Luna_QS_Dump_V1_E(const char*, const struct Luna_QS_Document* doc);
int Luna_QS_Dump_CSV(const char*, const struct Luna_QS_Document* doc);
