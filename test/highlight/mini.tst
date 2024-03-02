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
# <- keyword
2

# <- string

# Another test case
gap> Concatenation(
# <- keyword
> "a",
> "b",
> "Hello\n",
> "World"
> );
abHello
World

# <- string

#If statements
#@if 2+2=4
# <- keyword.conditional
gap> Print(10);
# <- keyword
10

# <- string
# Else clause
#@else
# <- keyword.conditional
gap> Print(200);
# <- keyword
200

# <- string
#@fi
# <- keyword.conditional

# Comment at end of file
#
