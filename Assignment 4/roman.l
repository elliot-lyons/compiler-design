%{
#include <stdio.h>
#include <stdlib.h>
#include "roman.tab.h"
%}

%%
[I] {return ONE;}
[V] {return FIVE;}
[X] {return TEN;}
[L] {return FIFTY;}
[C] {return ONE_HUNDRED;}
[D] {return FIVE_HUNDRED;}
[M] {return ONE_THOUSAND;}
[\n] {return EOL;}
[a-z] {printf("syntax error\n"); exit(0); }
. {printf("syntax error\n"); exit(0); }

%%

yywrap() {}