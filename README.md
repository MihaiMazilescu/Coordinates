# Coordinates
Cartesian coordinates to spherical coordinates


Se dau de la tastatură un număr necunoscut de mare de perchi de două sau trei numere fracționare reprezentabile cu dublă precizie (până la EOF). Aceste perechi reprezintă coordonatele X și Y sau X, Y și Z, ale unor puncte într-un spațiu de coordonate cartezian tridimensional. Punctele cărora le lipsește coordonate Z, aceasta se consideră implicit 0. Transformați valorile într-un sistem de coordonate sferic și afișați pentru fiecare punct valorile distanței până la origine r, precum și unghiurile φ și θ.
Cerințe pentru punctaj maxim
Să se creeze o clasă cu numele Point cu următoarele specificații:
- clasa trebuie să conțină 3 atribute private numite x, y și z. Tipul atributelor trebuie dedus de voi;
- clasa trebuie să conțină un constructor public cu 0 parametrii care să inițializeze coordonatele punctelor cu valoarea 0;
- clasa trebuie să conțină un constructor public cu 2 parametrii care să inițializeze coordonatele x și y cu valorile specificate și coordonata z cu valoarea 0;
- clasa trebuie să conțină un constructor public cu 3 parametrii care să inițializeze coordonatele punctelor cu valorile specificate;
- clasa trebuie să conțină 3 metode publice fără niciun parametru numite getX, getY și getZ. Acestea trebuie să întoarcă valorile coordonatelor punctelor. Tipul de dată returnat al metodelor trebuie să îl deduceți voi;
- clasa trebuie să conțină 3 metode publice fără niciun parametru numite getRadius, getPhi și getTheta. Acestea trebuie să întoarcă raza r, precum și cele 2 unghuri φ și θ. Tipul de dată returnat al metodelor trebuie să îl deduceți voi.

Date de intrare

Un număr necunoscut de perechi de numere fracționare reprezentabile în dublă precizie, numerele dintr-o pereche separate prin punct-și-virgulă, perechile separate prin unul sau mai multe spații.
Date de ieșire

Pe fiecare linie se vor afișa coordonatele polare ale fiecărui punct de la intrare, în ordinea INVERSĂ a apariției, în formatul (r=<val>; phi=<val>), SAU (r=<val>; phi=<val>, th=<val>),  valorile afișate cu trei zecimale, iar unghiurile exprimat în grade. Valoarea unghiurilor trebuie să fie pozitivă, în intervalul [0; 360) de grade. Dacă coordonata Z lipsește, unghiul θ nu se va afișa.

Exemplu

Intrare

1.1;0 1;1;1
0;2;0

Ieșire

(r=2.000; phi=90.000; th=90.000)
(r=1.732; phi=45.000; th=54.736)
(r=1.100; phi=0.000)
