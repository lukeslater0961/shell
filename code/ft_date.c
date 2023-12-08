#include "info.h"

int ft_date() {
    struct tm * timeinfo;
    time_t rawtime;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    printf ( "\nCurrent local time and date: %s\n", asctime (timeinfo) );
    return 0;
}