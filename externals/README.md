This repository uses subtrees to manage some of its externals.

## Initial setup

```
git remote add --no-tags externals-fmt https://github.com/fmtlib/fmt.git
git remote add --no-tags externals-glfw https://github.com/glfw/glfw.git
```

## Updating

Change `<ref>` to refer to the appropriate git reference.

```
git fetch externals-fmt
git subtree pull --squash --prefix=externals/fmt externals-fmt <ref>
git fetch externals-glfw
git subtree pull --squash --prefix=externals/glfw externals-glfw <ref>
```
