#include <stdio.h>
#include <string.h>
struct message {
    char text[100];
};
int main() {
    struct message msg;
    printf("Enter message: ");
    scanf("%s", msg.text);
    printf("Sender: %s\n", msg.text);
    printf("Receiver: %s\n", msg.text);
    return 0;
}

