// this source is derived from CHILL AST originally from file 'jacobi2.c' as parsed by frontend compiler rose

#define N 512

int main() {
  int t6;
  int t4;
  int t2;
  double a[512];
  double b[512];
  for (t2 = 4; t2 <= 708; t2 += 32) {
    for (t4 = (1 > -(-(t2 - 512) / 2) ? 1 : -(-(t2 - 512) / 2)); t4 <= (100 < (t2 - 482) / 2 ? 100 : (t2 - 482) / 2); t4 += 1) {
      for (t6 = t2; t6 <= 2 * t4 + 511; t6 += 1) {
        b[-(2 * t4) + t6] = 0.25 * (a[-(2 * t4) + t6 - 1] + a[-(2 * t4) + t6 + 1]) + 0.5 * a[-(2 * t4) + t6];
        a[-(2 * t4) + t6 - 1] = b[-(2 * t4) + t6 - 1];
      }
      a[-(2 * t4) + (2 * t4 + 512) - 1] = b[-(2 * t4) + (2 * t4 + 512) - 1];
    }
    for (t4 = (1 > -(-(t2 - 480) / 2) ? 1 : -(-(t2 - 480) / 2)); t4 <= (100 < (t2 - 4) / 2 ? 100 : (t2 - 4) / 2); t4 += 1) 
      for (t6 = t2; t6 <= t2 + 31; t6 += 1) {
        b[-(2 * t4) + t6] = 0.25 * (a[-(2 * t4) + t6 - 1] + a[-(2 * t4) + t6 + 1]) + 0.5 * a[-(2 * t4) + t6];
        a[-(2 * t4) + t6 - 1] = b[-(2 * t4) + t6 - 1];
      }
    for (t4 = -(-(t2 - 2) / 2); t4 <= ((t2 + 28) / 2 < 100 ? (t2 + 28) / 2 : 100); t4 += 1) {
      b[-(2 * t4) + (2 * t4 + 2)] = 0.25 * (a[-(2 * t4) + (2 * t4 + 2) - 1] + a[-(2 * t4) + (2 * t4 + 2) + 1]) + 0.5 * a[-(2 * t4) + (2 * t4 + 2)];
      for (t6 = 2 * t4 + 3; t6 <= t2 + 31; t6 += 1) {
        b[-(2 * t4) + t6] = 0.25 * (a[-(2 * t4) + t6 - 1] + a[-(2 * t4) + t6 + 1]) + 0.5 * a[-(2 * t4) + t6];
        a[-(2 * t4) + t6 - 1] = b[-(2 * t4) + t6 - 1];
      }
    }
  }
  return 0;
}
