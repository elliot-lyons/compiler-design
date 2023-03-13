%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
%}

NUMBER ([0-9])
NON_ZERO ([1-9])
COUNTY ([C]|[C][E]|[C][N]|[C][W]|[D]|[D][L]|[G]|[K][E]|[K][K]|[K][Y]|[L]|[L][D]|[R][N]|[L][H]|[L][M]|[L][S]|[M][H]|[M][N]|[M][O]|[O][Y]|[W]|[W][H]|[W][X]|[W][W])
NEW_COUNTY ([T])
OLD_COUNTY ([L][K]|[T][N]|[T][S]|[W][D])
OLD_PREFIX ([9]|[0])
SUFFIX ([1-2])

%%

[ \t\n]*[8][7-9][-]({COUNTY}|{OLD_COUNTY})[-]({NON_ZERO})({NUMBER})({NUMBER})({NUMBER})({NUMBER})[^ \t\n]+[ \t\n]* {printf("INVALID\n");}
[ \t\n]*[8][7-9][-]({COUNTY}|{OLD_COUNTY})[-]({NON_ZERO})({NUMBER})?({NUMBER})?({NUMBER})?({NUMBER})?[ \t\n]* {     int gap = theGap(yytext);
                                                                                                                    printf("%d\n", gap);           }

[ \t\n]*({OLD_PREFIX})({NUMBER})[-]({COUNTY}|{OLD_COUNTY})[-]({NON_ZERO})({NUMBER})({NUMBER})({NUMBER})({NUMBER})[^ \t\n]+[ \t\n]* {printf("INVALID\n");}
[ \t\n]*({OLD_PREFIX})({NUMBER})[-]({COUNTY}|{OLD_COUNTY})[-]({NON_ZERO})({NUMBER})?({NUMBER})?({NUMBER})?({NUMBER})?[ \t\n]* {     int gap = theGap(yytext);
                                                                                                                                    printf("%d\n", gap);           }

[ \t\n]*[1]([0]|[1]|[2])[-]({COUNTY}|{OLD_COUNTY})[-]({NON_ZERO})({NUMBER})({NUMBER})({NUMBER})({NUMBER})[^ \t\n]+[ \t\n]* {printf("INVALID\n");}
[ \t\n]*[1]([0]|[1]|[2])[-]({COUNTY}|{OLD_COUNTY})[-]({NON_ZERO})({NUMBER})?({NUMBER})?({NUMBER})?({NUMBER})?[ \t\n]* {     int gap = theGap(yytext);
                                                                                                                            printf("%d\n", gap);           }

[ \t\n]*[1][3]({SUFFIX})[-]({COUNTY}|{OLD_COUNTY})[-]({NON_ZERO})({NUMBER})({NUMBER})({NUMBER})({NUMBER})[^ \t\n]+[ \t\n]* {printf("INVALID\n");}
[ \t\n]*[1][3]({SUFFIX})[-]({COUNTY}|{OLD_COUNTY})[-]({NON_ZERO})({NUMBER})?({NUMBER})?({NUMBER})?({NUMBER})?[ \t\n]* {     int gap = theGap(yytext);
                                                                                                                            printf("%d\n", gap);           }

[ \t\n]*[1][4-9]({SUFFIX})[-]({COUNTY}|{NEW_COUNTY})[-]({NON_ZERO})({NUMBER})({NUMBER})({NUMBER})({NUMBER})[^ \t\n]+[ \t\n]* {printf("INVALID\n");}
[ \t\n]*[1][4-9]({SUFFIX})[-]({COUNTY}|{NEW_COUNTY})[-]({NON_ZERO})({NUMBER})?({NUMBER})?({NUMBER})?({NUMBER})?[ \t\n]* {   int gap = theGap(yytext);
                                                                                                                            printf("%d\n", gap);           } 

[ \t\n]*[2][0-3]({SUFFIX})[-]({COUNTY}|{NEW_COUNTY})[-]({NON_ZERO})({NUMBER})({NUMBER})({NUMBER})({NUMBER})[^ \t\n]+[ \t\n]* {printf("INVALID\n");}
[ \t\n]*[2][0-3]({SUFFIX})[-]({COUNTY}|{NEW_COUNTY})[-]({NON_ZERO})({NUMBER})?({NUMBER})?({NUMBER})?({NUMBER})?[ \t\n]* {   int gap = theGap(yytext);
                                                                                                                            printf("%d\n", gap);           }

\n+ {}
.+ {printf("INVALID\n");}
%%

int main(int argc, char **argv)
{
    yylex();
    return 0;
}

int theGap(char reg[])
{
    char copy[3];
    int x = 0;

    for (int i = 0; x < 2; i++)
    {
        if(!isspace(reg[i]))
        {
            copy[x] = reg[i];
            x++;
        }
    }

    copy[2] = '\0';

    int year = atoi(copy);

    if (year > 23)
    {
        year += 1900;
    }

    else
    {
        year += 2000;
    }

    return 2023 - year;
}

yywrap() {}