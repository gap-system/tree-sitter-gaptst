# Comment with newline after

gap> x := 1;;
gap> y := 2;;
gap> x+y;
3

# Comment with newline after

gap> x := 1;;
gap> y := 2;;
gap> x+y;
3

# Output starts with #
gap> Print("# Comment\n");
# Comment

# Now for some interleaving
gap> if 2+2 = 4 then
>   Print("Hello\n");
> else
>   Print("World\n");
> fi;
Hello
gap> if 2+2 = 4 then
>   Print("Hello\n");
Hello
> else
>   Print("World\n");
> fi;

# Need this comment otherwise above newline gets read
# Into the output of the previous test case
gap> if 2+2 = 4 then
Hello
>   Print("Hello\n");
> else
>   Print("World\n");
> fi;
gap> if 2+2 = 4 then
>   Print("Hello\n");
> else
Hello
>   Print("World\n");
> fi;
gap> if 2+2 = 4 then
>   Print("Hello\n");
> else
>   Print("World\n");
Hello
> fi;

# Now with two output lines
gap> if 2+2 = 4 then
>   Print("Hello\nWorld\n");
> else
>   Print("World\n");
> fi;
Hello
World
gap> if 2+2 = 4 then
>   Print("Hello\nWorld\n");
Hello
> else
>   Print("World\n");
> fi;
World
gap> if 2+2 = 4 then
>   Print("Hello\nWorld\n");
Hello
> else
>   Print("World\n");
World
> fi;
gap> if 2+2 = 4 then
Hello
>   Print("Hello\nWorld\n");
> else
World
>   Print("World\n");
> fi;

# This is an untestable statement, since the leading "> " in
# the output will always be parsed as another input line
gap> if 2+2 = 4 then
>   Print("Hello\n> Print(\"Hello\\n\");\n");
> else
>   Print("World");
> fi;
Hello
> Print("Hello\n");
