//
// Created by sajjad on 13.11.22.
//
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


int
main(int argc, char *argv[])

{

    printf("xv6 free pages: %d\n", kfreemem());

    exit(0);

}