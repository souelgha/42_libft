# Libft
1st project of 42 School.

## create our own library : our implementation of standard C library functions and some others

## contents :

### libc functions :

- ft_isalpha
- ft_isdigit  
- ft_isalnum 

- ft_isascii  => check si c est un charactere de type ascii. return 1 si vrai.

isprint  => check si c est un charactere imprimable. return 1 si vrai.


strlen =>  return la longueur de la chaine.


memset => modifie n valeurs par le caractere entre en argument.

bzero => mets les n valeurs  a 0.

memcpy => copie une chaine de characteres.

memmove => deplace une chaine sans overflow.

strlcpy => copie une chaine jusqu a n-1 et retourne la longueur de la source (scr).

strlcat => concatene 2 chaines jusqu a n-1 et retourne une longueur .

toupper => converti les minuscules em majuscules.

tolower => convertie les majuscules en minuscules.

strchr => recherche le 1e char demande et retourne la chaine a partir de ce char.

strrchr  => similaire a strchr mais demarre la recherche a partir de la fin.

strncmp => compare 2 chaines et  retourne 0 si elles sont identiques.

strnstr => recherche aiguille dans motte de foin. retourne la chaine de caracteres a partir de l aiguille.

memchr => idem strchr mais avec des voids a caster.

memcmp => idem strcmp avec des void et des casts.

calloc => alloue la memoire en initialisant a zero.

atoi => transforme un char en int.

itoa => converti un entier en char. inverse de atoi.

strdup => copie une chaine avec malloc(allocation de memoire).

substr => retourne la chaine a partir de la position start avec une taille max de len.

strjoin => concatene 2 chaines avec malloc et retourne le resultat des 2 chaines.

strtrim => retire les caracteres specifies dans set au debut et en fin de chaine.

split => retourne un tableau chaines splitees par le char c et fini par un tableau null.

strmapi => applique une fonction a chaque char et cree une nouvelle chaine avec malloc.

striteri => applique une fonction a chaque char et ne renvoie rien.

putchar_fd => idem putchar mais ecrit dans un fichier.
putstr_fd => idem putstr mais ecrit dans un fichier.
putnbr_fd => idem putnbr mais ecrit dans un fichier.
