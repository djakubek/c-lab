/* Struktury: kilka funkcji manipulujących punktami i prostokątami. */

#include <stdio.h>

struct point {
        int x;
  int y;
};

struct rect {
  struct point ll; /* lower left */
  struct point ur; /* upper right */
};

struct rect makerect(struct point ll, struct point ur) {
  struct rect tmp;
  tmp.ll = ll;
  tmp.ur = ur;
  return tmp;
}

struct point makepoint(int x, int y) {
  struct point tmp;
  tmp.x = x;
  tmp.y = y;
  return tmp;
}

struct point addpoints(struct point p1, struct point p2) {
  struct point tmp;
  tmp.x = p1.x + p2.x;        //odcięte, rzędne
  tmp.y = p1.y + p2.y;        //odcięte, rzędne
  return tmp;
}

int main() {
  struct point p, p1, p2;
  struct rect r;

  p1 = makepoint(4, 6);
  p2 = makepoint(6, 4);

  p = addpoints(p1, p2);

  /* p.x = 4;        // punkt, który ma odciętą 4
p.y = 6;        // punkt, który ma odciętą 6
(zamiast tego mamy makepoint) */

  printf("p = (%d, %d)\n", p.x, p.y);

  r = makerect(p1, p2);

  printf("r = (%d, %d) (%d, %d)\n", r.ll.x, r.ll.y, r.ur.x, r.ur.y);

  return 0;
}