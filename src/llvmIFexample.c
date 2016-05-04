void foo(double x) {
    if (0.0 > x) {
        return;
    }
    double z = sqrt(x);
    printf("%f", z);
}