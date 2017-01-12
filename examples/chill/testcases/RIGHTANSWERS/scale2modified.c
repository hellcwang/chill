


// this source derived from CHILL AST originally from file 'scale.c' as parsed by frontend compiler rose

// code from CHiLL manual scale example on page 16

void mm( float **A, float **B, float **C, int ambn, int an, int bm )
{
  int t6;
  int t4;
  int t2;
  for (t2 = 0; t2 <= (an - 1); t2 += 1) {
    for (t4 = 0; t4 <= (bm - 1); t4 += 1) {
      C[t2][t4] = 0.0f;
    }
  }
  for (t2 = 0; t2 <= (4 * an - 4); t2 += 4) {
    for (t4 = 0; t4 <= (bm - 1); t4 += 1) {
      for (t6 = 0; t6 <= (ambn - 1); t6 += 1) {
        C[t2 / 4][t4] += (A[t2 / 4][t6] * B[t6][t4]);
      }
    }
  }

}
