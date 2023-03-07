cp grammar.js grammar_case_insensitive.js
# pase the file and check the status
./node_modules/.bin/tree-sitter parse $file &&
    # convert the grammar to a case-sensitive version to allow for sytax nodes to show up
    # this requires a keyword preprocessor in the formatter
    echo 'convert the grammar to a case-sensitive version' &&
    python3 case.py &&
    # regenerate the library with the case-sensitive grammar
    echo 'regenerate the library with the case-sensitive grammar' &&
    ./node_modules/.bin/tree-sitter generate

# install the library
