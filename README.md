# tree-sitter-lua-pattern

Lua pattern grammar for
[tree-sitter](https://github.com/tree-sitter/tree-sitter)

## Usage in Neovim

### Parser Installation

The [nvim-treesitter plugin](https://github.com/nvim-treesitter/nvim-treesitter)
does not include this parser. To use it you must instead manually add it to your
tree-sitter config and then install it with `:TSInstall lua_pattern` or by
adding it to your `ensure_installed` list:

```lua
require('nvim-treesitter.parsers').get_parser_configs().lua_pattern = {
    install_info = {
        url = 'https://github.com/RubixDev/tree-sitter-lua-pattern.git',
        files = { 'src/parser.c', 'src/scanner.c' },
        branch = 'main',
    },
}
```

### Highlighting

If you want to use this parser for highlighting, you will also have to add this
repository as a plugin, for example for packer.nvim add this:

```lua
use { 'RubixDev/tree-sitter-lua-pattern' }
```

Additionally, you will have to configure injection queries for the Lua parser to
inject this parser appropriately.
