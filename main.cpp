
#include "SimpleServer.h"

int main() {

    SimpleServer my_server;
    if (my_server.start() != 0) {
        exit(0);
    }

    return 0;
}