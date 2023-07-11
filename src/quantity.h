#ifndef LUNA_QS_QUANTITY
#define LUNA_QS_QUANTITY

struct Luna_QS_Quantity {
    double amount;
    double upper;
    double lower;
    Luna_QS_Property unit;
};

#endif // LUNA_QS_QUANTITY
