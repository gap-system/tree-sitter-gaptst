# An example test file
#
# To test functionality

# Local statement
#@local x, y, z

# Exec statement
#@exec w := 10 ;

#@local u;
#@exec 10 + 10;

gap> 1 + 1;
2

# Another test case
gap> Concatenation(
> "a",
> "b",
> "Hello\n",
> "World"
> );
abHello
World

#If statements
#@if 2 + 2 = 4
gap> Print(10);
10

# Else clause
#@else
gap> Print(200);
200
#@fi

# Comment at end of file
#
