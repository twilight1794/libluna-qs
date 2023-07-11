#include "item.h"
#include "property.h"
#include "lexeme.h"
#include "form.h"
#include "sense.h"
#include "string.h"
#include "time.h"
#include "location.h"
#include "quantity.h"
#include "somevalue.h"
#include "novalue.h"

#ifndef LUNA_QS_ELEMENT
#define LUNA_QS_ELEMENT

/*
El sujeto puede ser un:
Item, Property, Lexeme, Form, Sense

El objeto puede ser un:
Item, String, Time, Location, Quantity, SomeValue, NoValue
*/

enum Luna_QS_Element_Type {
    Item,
    Property,
    Lexeme,
    Form,
    Sense,
    String,
    Time,
    Location,
    Quantity,
    Statement,
    SomeValue,
    NoValue
};

struct Luna_QS_Element {
    char type;
    union {
        Luna_QS_Item item;
        Luna_QS_Property property;
        Luna_QS_Lexeme lexeme;
        struct Luna_QS_Form* form;
        struct Luna_QS_Sense* sense;
        struct Luna_QS_String* string;
        struct Luna_QS_Time* time;
        struct Luna_QS_Location* location;
        struct Luna_QS_Quantity* quantity;
        struct Luna_QS_Statement* statement;
    };
};

#endif // LUNA_QS_ELEMENT
