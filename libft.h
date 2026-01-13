#ifndef LIBFT_H
# define LIBFT_H 

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <stdlib.h>
# include <limits.h>


typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
char	*ft_strchr(const char *str, int c);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strdup(const char *src);
char	*ft_strtrim(char const *str, char const *set);
char	*ft_substr(char const *src, unsigned int start, size_t len);
char	*ft_strjoin(char const *str1, char const *str2);
char	**ft_split(char const *str, char letter);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *str, char (*fun)(unsigned int, char));
void	ft_bzero(void *src, size_t size);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memset(void *str, int c, size_t size);
void	*ft_memchr(const void *scr, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_striteri(char *str, void (*fun)(unsigned int, char*));
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
int		ft_atoi(const char *nptr);
int		ft_isalnum(int alnum);
int		ft_isalpha(int alpha);
int		ft_isascii(int ascii);
int		ft_isdigit(int num);
int		ft_isprint(int print);
int		ft_lstsize(t_list *lst);
int		ft_memcmp(const void *src1, const void *src2, size_t n);
int		ft_strlen(const char *str);
int		ft_strncmp(const char *src1, const char *src2, size_t n);
int		ft_tolower(int letter);
int		ft_toupper(int letter);
#endif

