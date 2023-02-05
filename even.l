%{
  int count = 0;
%}

%%

[+-]?([0-9]*([0]|[2]|[4]|[6]|[8])\n) {count++;}
[+-]?([0-9]*([0]|[2]|[4]|[6]|[8])(" ")) {count++;} 
[+-]?([0-9]+\n) {}
\n {return 0;}
. {}

%%

int main(int argc, char **argv)
{
  printf("Enter sequence of numbers: ");
  yylex();
  printf("%d\n", count);
  return 0;
}

yywrap() {}