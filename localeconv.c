#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*
To print special symbols and character

struct lconv *localeconv(void);

	char*	decimal_point;
	char*	thousands_sep;
	char*	grouping;
	char*	int_curr_symbol;
	char*	currency_symbol;
	char*	mon_decimal_point;
	char*	mon_thousands_sep;
	char*	mon_grouping;
	char*	positive_sign;
	char*	negative_sign;
	char	int_frac_digits;
	char	frac_digits;
	char	p_cs_precedes;
	char	p_sep_by_space;
	char	n_cs_precedes;
	char	n_sep_by_space;
	char	p_sign_posn;
	char	n_sign_posn;

*/

int main()
{
struct lconv *LC;
LC = localeconv();
printf("%s", LC->decimal_point);
printf("%s", LC->thousands_sep);
printf("%s", LC->grouping);
printf("%s", LC->int_curr_symbol);

getch();
return 0;
}
