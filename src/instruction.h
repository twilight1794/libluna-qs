#include <stdint.h>

#include "element.h"
#include "qualifier.h"
#include "reference.h"

#ifndef LUNA_QS_INSTRUCTION
#define LUNA_QS_INSTRUCTION

/** @brief A single QS command
 */
struct Luna_QS_Instruction {
    char op;                                /**< Operation: 0: addition; -1: removing */
    char rank;                              /**< Rank: 0: normal; 1: preferred; -1: obsolete */
    struct Luna_QS_Element* subject;        /**< Subject of the statement */
    uint_least16_t property;                /**< Property ID */
    struct Luna_QS_Element* object;         /**< Object of the statement */
    struct Luna_QS_Qualifier** qualifiers;  /**< Array of qualifiers */
    struct Luna_QS_Reference** references;  /**< Array of references */
    unsigned int qualifiers_num;            /**< Number of qualifiers */
    unsigned int references_num;            /**< Number of references */
    char* summary;                          /**< Text for edit summary */
};

#endif // LUNA_QS_INSTRUCTION
