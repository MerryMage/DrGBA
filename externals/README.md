This repository uses subtrees to manage some of its externals.

## Initial setup

```
git remote add --no-tags externals-fmt https://github.com/fmtlib/fmt.git
```

## Updating

Change `<ref>` to refer to the appropriate git reference.

```
git fetch externals-fmt
git subtree pull --squash --prefix=externals/fmt externals-fmt <ref>
```
