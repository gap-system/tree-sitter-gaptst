# tree-sitter-gaptst

[tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for
[GAP system test files](https://docs.gap-system.org/doc/ref/chap7_mj.html#X801051CC86594630).

See also [tree-sitter-gap](https://github.com/gap-system/tree-sitter-gap) for the base language grammar
(used for injections).

## Example

![Example of a parse tree generated with `tree-sitter-gaptst`](image-example-parse.svg)

The above is a parse tree generated using the `tree-sitter-gaptst` grammar for the following code snippet:

```gaptst
# A simple alternating group test
gap> G := Group([
>   (1, 2, 3),
Group([ (1,2,3), (2,3,4) ])
>   (1, 2)(3, 4)
> ]);
gap> IsNormal(SymmetricGroup(4), G);
true
```

## Tests

To run syntax tree and highlighting tests run

```
make test_quick
```

note that highlighting tests will only be run once all syntax tree tests pass.

To run tests against the `GAP` library and `GAP` package corpus do

```
make corpus && make test_all
```

the first command will checkout a copy of
[`GAP`](https://github.com/gap-system/gap) and download a package archive, then
recursively copy `GAP` files into the appropriate `examples/` subdirectory. The
second command will then parse each of these files using the `tree-sitter`
grammar. The output of `make test_all` is a list of `GAP` files that the
grammar fails to parse, along with some statistics on failing and succeeding
parses.

## Troubleshooting

### Issues finding grammar in external tools

Try specifying the grammar name as lowercase `gaptst`, instead of uppercase `GAPTST`.

### Highlighting tests fail

Make sure you are using `tree-sitter` 0.22.2 or above. A breaking change in
highlight group priority was introduces with version 0.22.2, which means that
older versions of the `tree-sitter` tool will incorrectly highlight the
existing test files.
