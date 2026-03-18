#include "user.h"
#include <stdlib.h>
#include <string.h>

User *user_create(const char *name) {
    User *user = malloc(sizeof(User));
    user->name = strdup(name);
    return user;
}

char *user_get_name(User *user) {
    return user->name;
}

void user_free(User *user) {
    free(user->name);
    free(user);
}