# Changelog

All notable changes to this project will be documented in this file. See [commit-and-tag-version](https://github.com/absolute-version/commit-and-tag-version) for commit guidelines.

## [0.4.2](https://github.com/gap-system/tree-sitter-gaptst/compare/v0.4.1...v0.4.2) (2024-12-27)


### Features

* Improve highlight query ([8f7b4d5](https://github.com/gap-system/tree-sitter-gaptst/commit/8f7b4d511ee0656d993d73b24bf3a1e0179d4aec))


### Bug Fixes

* Fix branch for CI ([cbe6078](https://github.com/gap-system/tree-sitter-gaptst/commit/cbe60780207f1cf7a960a1a6559d75dba3373bbf))
* Fix go module name ([4cf64ad](https://github.com/gap-system/tree-sitter-gaptst/commit/4cf64ad99cb3e13dde7e04d548bc7b06198d888b))
* Fix swift bindings ([d1b4737](https://github.com/gap-system/tree-sitter-gaptst/commit/d1b4737085360d357845c72e0a30a9627f27c0ac))

## 0.4.1 (2024-08-29)

### ⚠ BREAKING CHANGES

- Standardize on lowercase `gap` everywhere. ([12d766a](https://github.com/gap-system/tree-sitter-gaptst/commit/12d766a617f6a02b33b5f0721946b21ae2578b4d))
- Tools previously using the `tree-sitter-gaptst` package
  should now change the grammar name from `GAPtst` to `gaptst`.

### Features

- Add folds queries ([0a96978](https://github.com/gap-system/tree-sitter-gaptst/commit/0a96978a2d67ebb2b244d5131fa421f9a8263dd5))
