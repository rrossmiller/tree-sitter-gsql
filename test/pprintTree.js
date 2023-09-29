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

const t = pprintTree(`
(gsql (create_query (name) (parameter_list) (name) (query_body (query_body_stmts (query_body_stmt (gsql_select_block (gsql_select_clause (name) (name)) (from_clause (step (step_source_set (name) (name)) (step_edge_set (step_edge_types (atomic_edge_type))) (step_vertex_set (step_vertex_types (atomic_vertex_type (vertex_set_type (name)))) (name))))))) (query_body_stmts (query_body_stmt (gsql_select_block (gsql_select_clause (name) (name)) (from_clause (step (step_source_set (name) (name)) (step_edge_set (step_edge_types (atomic_edge_type (edge_set_type (name)))) (ERROR) (name)) (step_vertex_set (step_vertex_types (atomic_vertex_type (vertex_set_type (name)))) (name))))))) (query_body_stmts (query_body_stmt (gsql_select_block (gsql_select_clause (name) (name)) (from_clause (step (step_source_set (name) (name)))))) (ERROR (UNEXPECTED ':') (UNEXPECTED ')') (UNEXPECTED ':') (UNEXPECTED ';'))))))
    `);
console.log(t);
