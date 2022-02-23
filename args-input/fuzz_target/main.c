#include <assert.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("usage: <program> filename\n");
    return 1;
  }

  int fd = open(argv[1], O_RDONLY);
  char buf[10];
  int n = read(fd, buf, 4);
  if (buf[0] == 'a') {
    if (buf[1] == 'b') {
      if (buf[2] == 'c') {
        assert(0);
      }
    }
  }

  return 0;
}
