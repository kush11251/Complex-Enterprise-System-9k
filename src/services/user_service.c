#include "user_service.h"
#include "src/models/user.h"
#include "src/utils/string_utils.h"

void user_service_init(void) {
    User *user = user_create("John Doe");
    printf("User created: %s\n", user_get_name(user));
    user_free(user);
}