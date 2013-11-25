#include <ruby.h>

static int fibonacci(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return fibonacci(n-1) + fibonacci(n-2);
  }
}

static VALUE fibonacci_rb(VALUE klass, VALUE number) {
  int n = NUM2INT(number);
  int result = fibonacci(n);
  return INT2NUM(result);
}

void Init_fibonacci(void) {
  VALUE c_fibonacci_rb;
  printf("hai1");
  c_fibonacci_rb = rb_const_get(rb_cObject, rb_intern("FibonacciRb"));
  rb_define_singleton_method(c_fibonacci_rb, "fibonacci", fibonacci_rb, 1);
}

