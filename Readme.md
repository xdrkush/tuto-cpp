# Tuto C++

# Intro
Se tuto à été réaliser entièrement sous linux (Ubuntu, Linux Mint, ...), j'ai récupérer des bouts de code de plusieurs tuto dont toutes les sources sont afficher ci-dessous.

# Text
std c'est quoi ?:
  - https://forums.commentcamarche.net/forum/affich-27693538-std-string-en-c#1
  - https://docs.microsoft.com/en-us/cpp/cpp/namespaces-cpp?view=msvc-160
W3school:
  - https://www.w3schools.com/cpp/default.asp
How run .ccp on linux:
  - https://www.cyberciti.biz/faq/howto-compile-and-run-c-cplusplus-code-in-linux/
Docs officiel:
  - https://docs.microsoft.com/en-us/cpp/cpp/?view=msvc-160

# Les videos
Aredhele:
  - https://www.youtube.com/watch?v=P9u96p4Cv8g&list=PL1fXq6XDoU515Lj8GehT3Dck2uQAe0iAN&index=1


# Build & Run
Pour build:
```
make main
```
Pour run:
```
./main
```

# Build.sh
Creer un fichier build.sh:
```
nano build.sh
```
(ctrl + x) pour quitter
(ctrl + x y entrée) pour sauvegarder et quitter

Coller ce bout de code:
```
# Ici on va demander à construire notre fichier
make main
# ici on va le run
./main
```

Ensuite il va falloir rendre notre fichier (build.sh) executable:
```
chmod 700 build.sh
```

Il nous reste plus qu'a run notre fichier:
```
./build.sh
```

On espérant que cela vous aides !