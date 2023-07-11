#include "element.h"
#include "qualifier.h"

#ifndef LUNA_QS_REFERENCE
#define LUNA_QS_REFERENCE

struct Luna_QS_Reference {
    unsigned int properties_num;
    struct Luna_QS_Qualifier** qualifiers;
};

#endif // LUNA_QS_REFERENCE
