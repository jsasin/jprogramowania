#include <stdio.h>
#include <time.h>

int main() {
  struct timespec ts;
  clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &ts);

  printf("time ( s): %ld\n", ts.tv_sec);
  printf("time (ns): %ld\n", ts.tv_nsec);
}
