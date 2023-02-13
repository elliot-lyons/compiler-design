%{
%}

%%
["][^"]*["] {ECHO;}
[*][*][^\n]*[\n] {printf("\n");}
[{][^}]* {printf("syntax error"); return;}
[{][^}]*[}]  {}
[{][^}"]*["][^"]*["][}] {printf("Comment");}
[}] {printf("syntax error"); return;}
[.|"\n"] {ECHO;} 
%%

int main(int argc, char **argv)
{
    yylex();

    return 0;
}

yywrap() {}