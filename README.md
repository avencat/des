# Dès (Testé uniquement sur macOS)
## Lancer de dès aléatoire

Un projet créé lors d'un week-end car nous avions oublié nos dès et ne pouvions pas jouer à notre jeu de société. Programme fonctionnant dans le terminal et créé sous macOS Sierra.

### Cloner le projet
```sh
git clone https://github.com/avencat/des.git
```

### Compiler le projet
```sh
cd des
make
```

### Effacer les fichiers temporaires
```sh
make clean
```

### Nettoyer le dossier des fichiers temporaires et de l'exécutable
```sh
make fclean
```

### Lancer les dès
```sh
./des
```

### Exemple de sortie
```
-----------------------
|                     |
|                     |
|                     |
|                     |
|                     |
|         4           |
|                     |
|                     |
|                     |
|                     |
|                     |
-----------------------
				Total : 6
-----------------------
|                     |
|                     |
|                     |
|                     |
|                     |
|         2           |
|                     |
|                     |
|                     |
|                     |
|                     |
-----------------------
```
