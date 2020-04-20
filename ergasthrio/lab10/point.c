#include <stdio.h>

struct point {
  double x;
  double y;
};

struct point middle(struct point a, struct point b) {
  struct point M;
  M.x = (a.x + b.x) / 2;
  M.y = (a.y + b.y) / 2;
  return M;
}

int main (int argc, char **argv) {
  struct point A = {1.2, 5.4};
  struct point B = {7.3, 1.8};
  struct point M = middle(A, B);
  printf("The middle of points A(%.1f, %.1f) and B(%.1f,%.1f) is M(%.1f, %.1f)\n", A.x, A.y, B.x, B.y, M.x, M.y);
}
