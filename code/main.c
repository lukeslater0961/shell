#include "info.h"

int main()
{
    char username[10];

    write(1, "whats your username: ",22);
    fgets(username, 10, stdin);

    size_t username_length = strlen(username);
    if (username_length > 0 && username[username_length - 1] == '\n') {
        username[username_length - 1] = '\0';
    }
    ft_strlcat(username, ">> ", strlen(username) + 3);
    loop(username);
}