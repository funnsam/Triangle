# Triangle
Triangle is a package manager for the language Hexagn.

## Big note: it's still developing

## Command line usage
`trin <commands> [args..]`

### Available commands
```
- install       (Installs a package)
- uninstall     (Uninstalls a package)
- update        (Updates a package)
- help          (Displays a help message)
- version       (Displays the version)
```

## Install
Syntax: `trin install https://github.com/funnsam/examplepackage`
Returns:
```
Added package ExamplePackage (https://github.com/funnsam/examplepackage) sucessfully!
```

## Uninstall
Syntax: `trin uninstall ExamplePackage`
Returns:
```ansi
Removed package ExamplePackage sucessfully!
```

## Update
Syntax: `trin update ExamplePackage`
Returns:
```ansi
Updated package ExamplePackage sucessfully! (v1.0.0 -> v1.0.1)
```