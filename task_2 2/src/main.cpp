
#include "../include/CRat.hpp"
#include "../include/test.hpp"

#define VECTOR_SIZE 3

int main ()
{
  CRat_t vector0 (VECTOR_SIZE);
  vector0.init_vector ();
  printf ("VECTOR_0:\n");
  vector0.print_vector ();

  CRat_t vector1 (VECTOR_SIZE);
  vector1.init_vector ();
  printf ("VECTOR_1:\n");
  vector1.print_vector ();

  CRat_t vector2 = vector0 + vector1;
  printf ("VECTOR_0 + VECTOR_1:\n");
  vector2.print_vector ();

  CRat_t vector3 = vector0 - vector1;
  printf ("VECTOR_0 - VECTOR_1:\n");
  vector3.print_vector ();

  printf ("VECTOR_0 * VECTOR_1: %2.4lf\n", vector0 * vector1);

  CRat_t a (2), b (2);
  int a1[] = {1, 1};
  int a2[] = {2, 2};
  a.set_array_p (a1);
  a.set_array_q (a2);

  int b1[] = {1, 1};
  int b2[] = {2, 2};
  b.set_array_p (b1);
  b.set_array_q (b2);

  CRat_t c = a + b;
  printf ("\n");
  c.print_vector ();

  CRat_t a0 (a1, a2, 2), b0 (b1, b2, 2);

  CRat_t c0 = a0 + b0;
  printf ("\n");
  c0.print_vector ();

  autotest ();
  return 0;
}
