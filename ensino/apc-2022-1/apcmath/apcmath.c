int max (int a, int b) {
    if (a > b) return a;
    else return b;
}

int abs (int a) {
    return max (a, -a);
}

double dabs (double a) {
    if (a >= 0.0) return a;
    else return -a;
}

double potencia (double a, int b) {
    double resultado = 1.0;
    for (int i = 0; i < abs(b); i++)
        resultado *= a;
    
    if (b < 0) return 1.0 / resultado;
    else return resultado;
}