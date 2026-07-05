#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[]) { // argc = number of command line arguments, argv = vector of cmd line args
    int fd = open("./myfile", 0_RDWR | 0_CREAT);
    if (fd == -1) {
        perror("open");
        return -1;
        }
    


}
