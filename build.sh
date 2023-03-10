clear
cp grammar.js grammar_case_insensitive.js
# convert the grammar to a case-sensitive version to allow for sytax nodes to show up
# this requires a keyword preprocessor in the formatter
echo 'convert the grammar to a case-sensitive version' &&
    python3 case.py &&
    # regenerate the library with the case-sensitive grammar
    echo 'regenerate the library with the case-sensitive grammar' &&
    ./node_modules/.bin/tree-sitter generate &&
    echo 'Testing' &&
    ./node_modules/.bin/tree-sitter test

# reset grammar.js to grammar with case insensitive function
mv grammar_case_insensitive.js grammar.js
