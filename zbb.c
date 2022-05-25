G = (N, T, P, Zahl)
N = { ZifferOhneNull, Ziffer, Fragment, Schluss, Zahl }
T = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }
P = { Zahl = ZifferOhneNull Fragment | Schluss,
Fragment = Ziffer Fragment | Schluss,
ZifferOhneNull = 1 | 2 | 3 | 4 | 5 | 6
| 7 | 8 | 9,
Ziffer = ZifferOhneNull | 0,
Schluss = 0 | 5 }
