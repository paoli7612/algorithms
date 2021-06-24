#include "graph.h"

void adj_add(adj_list_t &list, adj_node_t *node)
{
    if (list == NULL)
        list = node;
    else
        adj_add(list->next, node);
}

void adj_add(adj_list_t &list, int b)
{
    adj_add(list, new adj_node_t { b, NULL });
}

void adj_print(adj_list_t &list)
{   
    if (list != NULL)
    {
        std::cout << list->node << " ";
        adj_print(list->next);
    }
}

void graph_init(graph_t &graph, const int n)
{
    graph.n = n;
    graph.nodes = new node_t[n];
    graph.adj_lists = new adj_list_t[n];

    for (int i=0; i<n; i++)
        graph.adj_lists[i] = NULL;
}

void graph_add_edge(graph_t &graph, const int a, const int b)
{
    adj_add(graph.adj_lists[a], b);
}

void graph_print(const graph_t &graph)
{
    for (int i=0; i<graph.n; i++)
    {
        std::cout << i << ">\t";
        node_print(graph.nodes[i]);

        std::cout << "\t -> ";
        adj_print(graph.adj_lists[i]);

        std::cout << std::endl;
    }
}

void graph_load(graph_t &graph)
{
    std::ifstream f_graph("graph");
    std::ifstream f_node("node");
    int n;
    f_graph >> n;

    graph_init(graph, n);

    // f_node -> nodi
    for (int i=0; i<n; i++)
    {
        node_t &n = graph.nodes[i];

        // cont
        f_node >> n.content;

        // type
        char t;
        f_node >> t;
        if (t == 'U')
            n.type = U;
        else
            n.type = T;
    }

    // f_graph -> archi
    int a, b;
    while (f_graph >> a >> b)
    {
        graph_add_edge(graph, a, b);
    }
}
