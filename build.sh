clear

# pre gen for testing with case-insensitive parser
./node_modules/.bin/tree-sitter generate
cp grammar.js grammar_case_insensitive.js
# convert the grammar to a case-sensitive version to allow for sytax nodes to show up
# this requires a keyword preprocessor in the formatter
echo 'Testing' &&
    ./node_modules/.bin/tree-sitter parse /Users/rrossmil/Documents/personal/gsql-formatter/example.gsql &&
    ./node_modules/.bin/tree-sitter test &&
    #     echo 'convert the grammar to a case-sensitive version' &&
    #     python3 case.py &&
    #     # regenerate the library with the case-sensitive grammar
    #     echo 'regenerate the library with the case-sensitive grammar' &&
    #     ./node_modules/.bin/tree-sitter generate

    # # reset grammar.js to grammar with case insensitive function
    echo
echo 'reset grammar'
mv grammar_case_insensitive.js grammar.js
