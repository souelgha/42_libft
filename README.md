# lifbt
explication des foncions 
isalpha => return 1 si vrai
isdigit  => return 1 si vrai
isalnum  => return 1 si vrai
isascii  => return 1 si vrai
isprint  => return 1 si vrai
strlen => longueur de la chaine.
memset => modifie n valeurs dans avec le char demande
bzero => mets les n valeurs  a 0.
memcpy => copie une chaine 
memmove => deplace une chaine sans overflow
strlcpy => copie une chaine jusqu a n-1 et retourne la longueur de scr.
strlcat => concatene 2 chaines jusqu a n-1 et retourne une longueur 
toupper => minuscule em majuscule
tolower => majuscule en minuscule
strchr => recherche le 1e char demande et retourne la chaine a partir du char
strrchr  => idem strchr apartir de la fin
strncmp => compare 2 chaines> retourne 0 si elles sont identiques
memchr => idem strchr mais avec des void> a caster
memcmp => idem strcmp avec des void et des casts.
strnstr => recherche aiguille dans motte de foin. retourne char a partir de l aiguille.
atoi => transforme char en int 
calloc => alloue en initialisant a zero.
strdup => copie une chaine avec malloc
substr => retourne la chaine a partir de la position start avec une taille max de len.
strjoin => concatene 2 chaines avec malloc et retourne le resultat des 2 chaines
strtrim => retire les caracteres specifies dans set au debut et en fin de chaine.
split => retourne un tableu ce d=chaine splites par le char c et fini par un tableau null.
itoa => converti un entier en char. inverse de atoi.
strmapi => applique une fonction a chaque char et cree une nouvelle chaine avec malloc.
striteri => applique une fonction a chaque char et ne renvoie rien.
putchar_fd => idem putchar mais ecrit dans un fichier
putstr_fd => idem putstr mais ecrit dans un fichier
putnbr_fd => idem putnbr mais ecrit dans un fichier
