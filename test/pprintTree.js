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
(gsql (create_query (name) (parameter_list) (name) (query_body (query_body_stmts (query_body_stmt (print_stmt (print_expr (expr (expr (constant (numeric (integer (digit))))) (math_operator) (expr (constant (numeric (integer (digit)))))))))) (query_body_stmts (query_body_stmt (print_stmt (print_expr (expr (name))) (print_expr (expr (name)))))) (query_body_stmts (query_body_stmt (print_stmt (print_expr (v_expr_set (expr (name)) (v_set_proj (expr (name_dot (name) (name))) (name)) (v_set_proj (expr (name_dot (name) (name))))))))) (query_body_stmts (query_body_stmt (print_stmt (print_expr (expr (name))) (condition (expr (name)) (comparison_operator) (expr (constant (numeric (integer (digit))))))))) (query_body_stmts (query_body_stmt (print_stmt (print_expr (expr (name))) (name)))))))
`);
console.log(t);
