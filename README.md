# Libft
1st project of 42 School.

## create our own library : our implementation of standard C library functions and some others

## contents :

### libc functions :
- ft_isalpha
- ft_isdigit  
- ft_isalnum 
- ft_isascii 
- ft_isprint
- ft_toupper 
- ft_tolower
- ft_strlen
- ft_memset 
- ft_bzero 
- ft_memcpy 
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_strdup 

- ft_calloc
- ft_strlcpy
- ft_strlcat
- ft_strchr
- ft_strrchr  
- ft_strncmp 
- ft_strnstr
- ft_atoi 

### Additional Functions:

- ft_putchar_fd: Outputs the character to the specified file descriptor.
- ft_putstr_fd: Outputs the string to the specified file descriptor.
- ft_putnbr_fd: Outputs the integer to the specified file descriptor.
  
   ### Functions with allocated memory

- ft_substr : returns a substring from string.
- ft_strjoin : returns new string which is the result of concatening 2 strings.
- ft_strtrim: returns a copy of ’s1’ with characters from ’set’ removed from the beginning and the end.
- ft_split: returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.
- ft_itoa: returns a string representing the integer received as an argument.
- ft_strmapi: Applies the function f to each character of the string s. A new string is created.
- ft_striteri: Applies the function ’f’ to each character of the string passed as argument. Each character is passed by address to ’f’ so it can be modified if necessary.

### Bonus Functions (used for list):
- ft_lstnew: return a new node.
- ft_lstadd_front: add new node at the beginning of the list.
- ft_lstsize: return the number of nodes in the list.
- ft_lstlast: return last node of the list.
- ft_lstadd_back:  add new node at the end of the list.
- ft_lstdelone: free the node.
- ft_lstclear: deletes and frees the given node and all its successors.
- ft_lstiter: iterates through the list ’lst’ and applies the function ’f’ to the content of each node.
- ft_lstmap: applies the function ’f’ to each node’s content, and creates a new list resulting of the successive applications of the function ’f’.









  

