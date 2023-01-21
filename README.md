# stdsb.h - In Romana

## Schimbari la functia main RADICALE:

```c
#include <stdsb_ro.h>

intreg main()
{
    printeaza_string("Hello,world!");
}
``

Cu urmatoarele functii poti face:

* Pentru a declara un numar intreg poti folosi `intreg n;`

* Pentru a declara un caracter (char) poti folosi `caracter n`

* Pentru a declara o variabila long int poti folosi `lung_intreg n`

* Pentru a declara o variabila long long int poti folosi `lung_lung_intreg n`

* Pentru a declara un string sau un sir de caractere poti folosi `sir_de_caractere string`

* Pentru a creea o functie poti folosi `creeaza_functie numele functiei(parametrii)`

* Pentru a creea o functie fara parametri poti folosi `creeaza_functie numele functiei(fara_parametru)`

* Pentru a declara un numar intreg fara semn `intreg_fara_semn n`

* Pentru a declara un long int fara semn `intreg_lung_fara_semn`

* Pentru a declara un long long int fara semn `intreg_lung_lung_fara_semn`

* Pentru a declara un float `declara_cu_precizie n`

* `linie_noua()` pentru a duce consola pe o linie noua

* `aduna_2_numere(2,3)` pentru a aduna 2 numere

* `aduna_3_numere(1,2,3)` pentru a aduna 3 numere

* `printeaza_string("Buna!")` pentru a printa un sir de caractere

* `printeaza_numar_intreg(n)` pentru a printa un numar intreg declarat sau scris direct

* `printeaza_cu_precizie(n)` pentru a printa un numar cu zecimale exact

* `printeaza_patratul_perfect(67)` pentru a printa patratul perfect al numarului 67

* `inmulteste_2_numere(2,3)` pentru a inmulti doua numere in cazul nostru 2 * 3

* `inmulteste_3_numere(2,3,2)` pentru a inmulti trei numere in cazul nostru 2 * 3 * 2

* `imparte_la_2(4)` pentru a imparte la 2 numarul 4

* `imparte_la_3_numere(4,2,1)` pentru a imparti trei numere 4 / 2 / 1

* `afla_medie_aritmetica_2(num1,num2)` pentru a face media aritmetica intre num1 si num2

* `afla_medie_artimetica_3(num1,num2,num3)` pentru a face media aritmetica intre 3 numere

* `obtine_data()` obtine data curenta **FARA NICIUN PARAMETRU IN PARANTEZE**

* `obtine_ora()` obtine ora curenta **FARA NICIUN PARAMETRU**

* `obtine_an()` obtine anul curent **FARA NICIUN PARAMETRU**

* `obtine_secunde()` obtine secundele curente **FARA NICIUN PARAMETRU**

* `obtine_luna()` obtine luna curenta **FARA NICUN PARAMETRU**

* `este_sarbatoare()` interogheaza calendarul pentru sarbatori **FARA NICUN PARAMETRU**

* `transforma_in_litere_mari(string name)` face STRINGUL cu LITERE MARI

* `transforma_in_litere_mici(string name)` face stringul cu litere mici

* `obtine_lungimea_sirului_de_caractere(string name)` determina lunimea de caractere al string-ului

* `interschimba_valorile(1,2)` interschimba valorile si programul va afisa 2 1 

* `testeaza_libraria()` testeaza functionalitatea librariei prin interschimbarea valorilor 1 si 2 si adunare numerelor 1 si 3

* `afiseaza_numar_de_versiune()` afiseaza versiunea curenta a librariei

* `compara_nr_mai_mare(1,2)` va afisa numarul cel mai mare in cazul nostru 2

* `compara_nr_mai_mic(1,2)` va afisa numarul cel mai mic in cazul nostru 1

# Install

Download latest release of stdsb_ro.h and type this command:

```bash
sudo mv stdsb_ro.h /usr/include
```

Or you are on macOS:

```bash
sudo mv stdsb_ro.h ~/Library
```


You can use clang with Makefile:

```bash
nano Makefile
```

and type:

```Makefile
CC := clang
```

Press CTRL + X  |  Y  |  ENTER ,or you are in macOS, Press COMMAND + X  |  Y  |  ENTER