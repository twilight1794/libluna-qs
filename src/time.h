#include <stdint.h>

#ifndef LUNA_QS_TIME
#define LUNA_QS_TIME

enum Luna_QS_Calendar_Type {
    Gregoriano,
    Juliano
};

enum Luna_QS_Precision {
    BILLION_YEARS = 0,
    HUNDRED_MILLION_YEARS = 1,
    TEN_MILLION_YEARS,
    MILLION_YEARS,
    HUNDRED_THOUSAND_YEARS;
    TEN_THOUSAND_YEARS,
    MILLENIUM,
    CENTURY,
    DECADE,
    YEAR, // default
    MONTH,
    DAY,
    HOUR,
    MINUTE,
    SECOND
};

struct Luna_QS_Time {
    Luna_QS_Precision precision;
    int_least64_t year;
    char month;
    char day;
    char hour;
    char minute;
    char second;
};

#endif // LUNA_QS_TIME
