# A simple alternating group test
gap> G := Group([
>   (1, 2, 3),
Group([ (1,2,3), (2,3,4) ])
>   (1, 2)(3, 4)
> ]);
gap> IsNormal(SymmetricGroup(4), G);
true
