#include <stdio.h>
#include <stdlib.h>

#include "instruction.h"

#ifndef LUNA_QS_DOCUMENT
#define LUNA_QS_DOCUMENT

struct Luna_QS_Document {
    char flags;
    struct Luna_QS_Instruction **instructions;
};

struct Luna_QS_Document* Luna_QS_Document_Create(void);
void Luna_QS_Document_Destroy(struct Luna_QS_Document**);

int Luna_QS_Parse_V1(struct Luna_QS_Document* const, const char*);
int Luna_QS_Parse_V1_E(struct Luna_QS_Document* const, const char*);
int Luna_QS_Parse_CSV(struct Luna_QS_Document* const, const char*);
int Luna_QS_Parse_CSV_E(struct Luna_QS_Document* const, const char*);

int Luna_QS_Dump_V1(const char*, const struct Luna_QS_Document*);
int Luna_QS_Dump_V1_E(const char*, const struct Luna_QS_Document*);
int Luna_QS_Dump_CSV(const char*, const struct Luna_QS_Document*);

#endif // LUNA_QS_DOCUMENT
