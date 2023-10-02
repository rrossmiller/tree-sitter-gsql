function pprintTree(lispTree) {
  const LB = '(';
  const RB = ')';
  const TAB = ' '.repeat(2);
  let formattedClips = '';
  let tabCount = 0;

  lispTree.split('').forEach((c) => {
    if (c === LB) {
      formattedClips += '\n';
      formattedClips += TAB.repeat(tabCount);
      tabCount++;
    } else if (c === RB) {
      tabCount--;
    }

    formattedClips += c;
  });

  return formattedClips;
}

const t = pprintTree(`\
(gsql (create_query (name) (parameter_list) (name) (query_body (query_body_stmts (query_body_stmt (gsql_select_block (gsql_select_clause (name) (name)) (from_clause (path_pattern (step_source_set (name) (name)))) (limit_clause (expr (constant (numeric (integer (digit) (digit) (digit) (digit) (digit))))) (expr (expr (name)) (math_operator) (expr (constant (numeric (integer (digit) (digit)))))))))))))
`);
console.log(t);
