#include "property.h"

#ifndef LUNA_QS_QUALIFIER
#define LUNA_QS_QUALIFIER

/** @brief Property-value pair, for references and qualifiers
 */
struct Luna_QS_Qualifier {
    Luna_QS_Property property;       /**< Property ID */
    struct Luna_QS_Element* object;  /**< Object of the statement */
};

#endif // LUNA_QS_QUALIFIER
