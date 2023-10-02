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
(gsql (create_query (name) (parameter_list) (name) (query_body (query_body_stmts (query_body_stmt (gsql_select_block (gsql_select_clause (name) (name)) (from_clause (path_pattern (step_source_set (name) (name)))) (accum_clause (dml_sub_stmt_list (dml_sub_stmt (dml_sub_for_each_stmt (for_each_control (name) (set_bag_expr (global_accum_name (name)))) (dml_sub_stmt_list (dml_sub_stmt (local_var_decl_stmt (base_type) (name) (expr (constant (numeric (integer (digit))))))) (dml_sub_stmt (l_accum_accum_stmt (name) (local_accum_name (name)) (expr (name)))))))))))))))
`);
console.log(t);
