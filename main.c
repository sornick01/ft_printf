#include "ft_printf.h"

int main()
{
    char c = '!';
    char s[] = "oh my god";
    
    printf("\n%d", ft_printf("dima nigg%ser over %cand %ua %d dbc", s, c, UINT_FAST32_MAX, -1));
    printf("\n\n\n");
    printf("\n%d", printf("dima nigg%ser over %cand %ua %d dbc", s, c, UINT_FAST32_MAX, -1));

}



// dima nigger over and 4294967295 a -1 dbc