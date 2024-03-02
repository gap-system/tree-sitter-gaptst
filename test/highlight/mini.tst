# An example test file
#
# To test functionality

# Local statement
#@local x, y, z
# <- keyword

# Exec statement
#@exec w :=10 ;
# <- keyword

#@local u;
# <- keyword
#@exec 10+10;
# <- keyword

gap> 1+1;
2

# <- string.documentation

# Another test case
gap> Concatenation(
> "a",
> "b",
> "Hello\n",
> "World"
> );
abHello
World

# <- string.documentation

#If statements
#@if 2+2=4
# <- keyword.conditional
gap> Print(10);
# <- keyword.debug
10

# <- string.documentation
# Else clause
#@else
# <- keyword.conditional
gap> Print(200);
# <- keyword.debug
200

# <- string.documentation
#@fi
# <- keyword.conditional

# Comment at end of file
#
