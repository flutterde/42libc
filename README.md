# 42libc

## Introduction
Welcome to 42libc, a repository containing a collection of C functions commonly used in programming. These functions are intended to provide a basic library for your C projects. Feel free to explore and use these functions in your projects.

## Functions List

### Standard Library Functions
- `int ft_atoi(const char *str);`
- `int ft_isalnum(int c);`
- `int ft_isalpha(int c);`
- `int ft_isascii(int c);`
- `int ft_isdigit(int c);`
- `int ft_isprint(int c);`
- `char *ft_strchr(const char *s, int c);`
- `size_t ft_strlen(const char *str);`
- `void *ft_memset(void *b, int c, size_t len);`
- `void ft_bzero(void *s, size_t n);`
- `char *ft_strtrim(char const *s1, char const *set);`
- `int ft_tolower(int c);`
- `int ft_toupper(int c);`
- `int ft_strncmp(const char *s1, const char *s2, size_t n);`
- `void *ft_memcpy(void *dst, const void *src, size_t n);`
- `char *ft_strnstr(const char *haystack, const char *needle, size_t len);`
- `char *ft_strrchr(const char *s, int c);`
- `int ft_memcmp(const void *s1, const void *s2, size_t n);`
- `void *ft_memchr(const void *s, int c, size_t n);`
- `void *ft_memmove(void *dest, const void *src, size_t n);`
- `char **ft_split(char const *s, char c);`
- `void ft_striteri(char *s, void (*f)(unsigned int, char*));`
- `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`
- `size_t ft_strlcat(char *dst, const char *src, size_t size);`
- `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);`
- `void *ft_calloc(size_t count, size_t size);`
- `char *ft_strdup(const char *s1);`
- `char *ft_substr(char const *s, unsigned int start, size_t len);`
- `void ft_putchar_fd(char c, int fd);`
- `void ft_putstr_fd(char *s, int fd);`
- `void ft_putendl_fd(char *s, int fd);`
- `void ft_putnbr_fd(int n, int fd);`
- `char *ft_itoa(int n);`
- `char *ft_strjoin(char const *s1, char const *s2);`

### Linked List Functions
- `t_list *ft_lstnew(void *content);`
- `void ft_lstadd_front(t_list **lst, t_list *new);`
- `int ft_lstsize(t_list *lst);`
- `t_list *ft_lstlast(t_list *lst);`
- `void ft_lstadd_back(t_list **lst, t_list *new);`
- `void ft_lstdelone(t_list *lst, void (*del)(void *));`
- `void ft_lstclear(t_list **lst, void (*del)(void *));`
- `void ft_lstiter(t_list *lst, void (*f)(void *));`
- `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`

### Additional Functions
here are some additional functions that can help you with `generating random` string , or for print linked list strings, or printing split words

- `char *ft_random(int size);`
- `char *get_next_line(int fd);`
- `void	ft_swap(int *xp, int *yp);`
- `void	ft_sort_int_tab(int *tab, int size);`
- `void	ft_free_strs(char **str);`
- `void	ft_print_string_bits(char *str);`
- `void	ft_lstprint_str(t_list *head);`
- `void	ft_print_strs(char **strs);`

### Printf Implementation
- `int ft_printf(const char *str, ...);`

## Usage
Feel free to clone the repository and use these functions in your projects. If you encounter any issues or have suggestions for improvements, don't hesitate to create an issue or submit a pull request.

## Author
- GitHub: [flutterde](https://github.com/flutterde)

Happy coding!
