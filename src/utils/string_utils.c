#include "string_utils.h"
#include <stdlib.h>
#include <string.h>

char *string_duplicate(const char *str) {
    char *copy = malloc(strlen(str) + 1);
    strcpy(copy, str);
    return copy;
}