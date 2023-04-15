%{
#include <stdio.h>
#include <stdlib.h>

int yylex(void);
void yyerror();

void translate(int number)
{
    if (number < 0)
    {
        number = number * -1;
        printf("-");
    }

    if (number == 0)
    {
        printf("Z");
    }

    else
    {
        char *symbols[13] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        int numbers[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};

        int max = 12;

        while (number > 0)
        {
            int div = number / numbers[max];
            number = number % numbers[max];

            while (div > 0)
            {
                printf("%s", symbols[max]);
                div--;
            }

            max--;
        }
    }

    printf("\n");
}
%}

%token ONE FIVE TEN FIFTY ONE_HUNDRED FIVE_HUNDRED ONE_THOUSAND ADD SUB MUL DIV LEFT RIGHT EOL

%%

input:
    | input exp EOL { translate($2); }
    ;

exp: factor
    | exp ADD factor { $$ = $1 + $3; }
    | exp SUB factor { $$ = $1 - $3; }
    ;

factor: num
    | factor MUL num { $$ = $1 * $3; }
    | factor DIV num { $$ = $1 / $3; }
    ;    

num: LEFT exp RIGHT { $$ = $2; }
    | ONE aft_one { $$ = 1 + $2; }
    | FIVE aft_fiv {  $$ = 5 + $2; }
    | TEN aft_ten { $$ = 10 + $2; }
    | FIFTY aft_fif {  $$ = 50 + $2; }
    | ONE_HUNDRED aft_oh {  $$ = 100 + $2; }
    | FIVE_HUNDRED aft_fh {  $$ = 500 + $2; }
    | ONE_THOUSAND aft_ot {  $$ = 1000 + $2; }
    ;

aft_one: { $$ = 0; }
    | ONE aft_two_one  { $$ = 1 + $2; }
    | FIVE { $$ = 3; }
    | TEN { $$ = 8; }
    ;    

aft_two_one: { $$ = 0; }
    | ONE { $$ = 1; }
    ;

aft_fiv: { $$ = 0; }
    | ONE { $$ = 1; }
    | ONE ONE { $$ = 2; }
    | ONE ONE ONE { $$ = 3; }
    ;

aft_ten: { $$ = 0; }
    | ONE aft_one { $$ = 1 + $2; }
    | FIVE aft_fiv { $$ = 5 + $2; }
    | TEN aft_two_ten { $$ = 10 + $2; }
    | FIFTY fin_ten { $$ = 30 + $2; }
    | ONE_HUNDRED fin_ten { $$ = 80 + $2; }
    ;

alt_ten: { $$ = 0; }
    | ONE aft_one { $$ = 1 + $2; }
    | FIVE aft_fiv { $$ = 5 + $2; }
    | TEN aft_two_ten { $$ = 10 + $2; }   
    ;
    
aft_two_ten: { $$ = 0; }
    | ONE aft_one { $$ = 1 + $2; }
    | FIVE aft_fiv { $$ = 5 + $2; }
    | TEN fin_ten { $$ = 10 + $2; }
    ;

fin_ten: { $$ = 0; }
    | ONE aft_one { $$ = 1 + $2; }
    | FIVE aft_fiv { $$ = 5 + $2; }
    ;


aft_fif: { $$ = 0; }
    | ONE aft_one { $$ = 1 + $2; }
    | FIVE aft_fiv { $$ = 5 + $2; }
    | TEN alt_ten { $$ = 10 + $2; }
    ;


aft_oh: { $$ = 0; }
    | ONE aft_one { $$ = 1 + $2; }
    | FIVE aft_fiv { $$ = 5 + $2; }
    | TEN aft_ten { $$ = 10 + $2; }
    | FIFTY aft_fif { $$ = 50 + $2; }
    | ONE_HUNDRED aft_two_oh { $$ = 100 + $2; }
    | FIVE_HUNDRED fin_oh { $$ = 300 + $2; }
    | ONE_THOUSAND fin_oh { $$ = 800 + $2; }
    ;

alt_oh: { $$ = 0; }
    | ONE aft_one { $$ = 1 + $2; }
    | FIVE aft_fiv { $$ = 5 + $2; }
    | TEN aft_ten { $$ = 10 + $2; }
    | FIFTY aft_fif { $$ = 50 + $2; }
    | ONE_HUNDRED aft_two_oh { $$ = 100 + $2; }    

aft_two_oh: { $$ = 0; }
    | ONE aft_one { $$ = 1 + $2; }
    | FIVE aft_fiv { $$ = 5 + $2; }
    | TEN aft_ten { $$ = 10 + $2; }
    | FIFTY aft_fif { $$ = 50 + $2; }
    | ONE_HUNDRED fin_oh { $$ = 100 + $2; }
    ;   

fin_oh: { $$ = 0; }
    | ONE aft_one { $$ = 1 + $2; }
    | FIVE aft_fiv { $$ = 5 + $2; }
    | TEN aft_ten { $$ = 10 + $2; }
    | FIFTY aft_fif { $$ = 50 + $2; }
    ;


aft_fh: { $$ = 0; }
    | ONE aft_one { $$ = 1 + $2; }
    | FIVE aft_fiv { $$ = 5 + $2; }
    | TEN aft_ten { $$ = 10 + $2; }
    | FIFTY aft_fif { $$ = 50 + $2; }
    | ONE_HUNDRED alt_oh { $$ = 100 + $2; }
    ;


aft_ot: { $$ = 0; }
    | ONE aft_one { $$ = 1 + $2; }
    | FIVE aft_fiv { $$ = 5 + $2; }
    | TEN aft_ten { $$ = 10 + $2; }
    | FIFTY aft_fif { $$ = 50 + $2; }
    | ONE_HUNDRED aft_oh { $$ = 100 + $2; }
    | FIVE_HUNDRED aft_fh { $$ = 500 + $2; }
    | ONE_THOUSAND aft_ot { $$ = 1000 + $2; }
    ;

%%

int main() 
{
    yyparse();
    return 0;
}

void yyerror()
{
    printf("syntax error\n");
    exit(0);
}
