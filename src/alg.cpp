// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int c = 1000000;
    while (a && b)
     if (a > b)
       a %= b;
     else
       b %= a;
    return a + b;
}
