#include "instruction.h"

struct Luna_QS_Instruction* Luna_QS_Instruction_Create(void){
    struct Luna_QS_Instruction* inst = (struct Luna_QS_Instruction*) malloc(sizeof(struct Luna_QS_Instruction));
    if (inst == NULL) return NULL;
    inst->op = 0;
    inst->rank = 0;
    struct Luna_QS_Element* subjectPtr = (struct Luna_QS_Element*) malloc(sizeof(Luna_QS_Element));
    if (subjectPtr == NULL){
        free(inst);
        return NULL;
    }
    inst->subject = subjectPtr;
    inst->property = 0;
    struct Luna_QS_Element* objectPtr = (struct Luna_QS_Element*) malloc(sizeof(Luna_QS_Element));
    if (subjectPtr == NULL){
        free(inst->subject)
        free(inst);
        return NULL;
    }
    inst->object = objectPtr;
    struct Luna_QS_Qualifier** qualifiersPtr = (struct Luna_QS_Qualifier**) malloc(sizeof(Luna_QS_Qualifier*)*5);
    if (qualifiersPtr == NULL){
        free(inst->object);
        free(inst->subject);
        free(inst);
        return NULL;
    }
    inst->qualifiers = qualifiersPtr;
    struct Luna_QS_Reference** referencesPtr = (struct Luna_QS_Reference**) malloc(sizeof(Luna_QS_Reference*)*5);
    if (referencesPtr == NULL){
        free(inst->qualifiers);
        free(inst->object);
        free(inst->subject);
        free(inst);
        return NULL;
    }
    inst->references = referencesPtr;
    inst->qualifiers_num = 0;
    inst->references_num = 0;
    inst->summary = NULL;
    return inst;
}

void Luna_QS_Instruction_Destroy(struct Luna_QS_Instruction** inst){
    free(*inst);
}
