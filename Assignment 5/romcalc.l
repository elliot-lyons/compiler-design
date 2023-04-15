%{
#include <stdio.h>
#include <stdlib.h>
#include "romcalc.tab.h"
%}

%%
[I] {return ONE;}
[V] {return FIVE;}
[X] {return TEN;}
[L] {return FIFTY;}
[C] {return ONE_HUNDRED;}
[D] {return FIVE_HUNDRED;}
[M] {return ONE_THOUSAND;}
[+] {return ADD;}
[-] {return SUB;}
[*] {return MUL;}
[/] {return DIV;}
[{] {return LEFT;}
[}] {return RIGHT;}
[\n] {return EOL;}
[a-z] {printf("syntax error\n"); exit(0); }
. {printf("syntax error\n"); exit(0); }

%%

yywrap() {}