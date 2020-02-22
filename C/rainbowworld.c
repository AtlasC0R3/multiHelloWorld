#include <stdio.h>
void one () {
  printf("\033[1;31m");
}
void two () {
	printf("\033[1;31m");
}
void three () {
	printf("\033[0;32m");
}
void four () {
	printf("\033[1;32m");
}
void five () {
	printf("\033[0;33m");
}
void six () {
	// please dont replace the i with an e
	printf("\033[01;33m");
}
void seven () {
	printf("\033[0;34m");
}
void eight () {
	printf("\033[1;34m");
}
void nine () {
	printf("\033[0;35m");
}
void ten () {
	printf("\033[1;35m");
}
void eleven () {
	printf("\033[0;36m");
}
void twelve () {
	printf("\033[1;36m");
}
void reset () {
  printf("\033[0m");
}

int main () {
  one();
  printf("H");
  two();
  printf("e");
  three();
  printf("l");
  four();
  printf("l");
  five();
  printf("o");
  six();
  printf(", ");
  seven();
  printf("w");
  eight();
  printf("o");
  nine();
  printf("r");
  ten();
  printf("l");
  eleven();
  printf("d");
  twelve();
  printf("!\n");
  reset();
  return 0;
}
// i'm done, give me my scoob snack now
