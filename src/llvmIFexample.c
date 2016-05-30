double foo(double x) {
    if (0.0 > x) {
        return 0.0;
    }
    double z = sqrt(x);
    printf("%f", z);
    return z;
}