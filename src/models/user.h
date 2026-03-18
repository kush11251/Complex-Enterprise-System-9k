#ifndef USER_H
#define USER_H

typedef struct User {
    char *name;
} User;

User *user_create(const char *name);
char *user_get_name(User *user);
void user_free(User *user);

#endif // USER_H