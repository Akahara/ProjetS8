#include <iostream>
#include <utility>
#include <algorithm>
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/dijkstra_shortest_paths.hpp>

void test_bootgraph()
{
  // taken from https://www.boost.org/doc/libs/1_75_0/libs/graph/doc/quick_tour.html


  // create a typedef for the Graph type
  typedef boost::adjacency_list<boost::vecS, boost::vecS, boost::bidirectionalS> Graph;

  //// Make convenient labels for the vertices
  enum { A, B, C, D, E, N };
  const int num_vertices = N;
  const char *name = "ABCDE";

  // writing out the edges in the graph
  typedef std::pair<int, int> Edge;
  Edge edge_array[] =
  { Edge(A,B), Edge(A,D), Edge(C,A), Edge(D,C),
    Edge(C,E), Edge(B,D), Edge(D,E) };
  const int num_edges = sizeof(edge_array) / sizeof(edge_array[0]);

  // declare a graph object
  Graph g(num_vertices);

  // add the edges to the graph object
  for (int i = 0; i < num_edges; ++i)
    add_edge(edge_array[i].first, edge_array[i].second, g);

  typedef boost::graph_traits<Graph>::vertex_descriptor Vertex;

  // get the property map for vertex indices
  typedef boost::property_map<Graph, boost::vertex_index_t>::type IndexMap;
  IndexMap index = get(boost::vertex_index, Graph{});

  std::cout << "vertices(g) = ";
  typedef boost::graph_traits<Graph>::vertex_iterator vertex_iter;
  std::pair<vertex_iter, vertex_iter> vp;
  for (vp = vertices(g); vp.first != vp.second; ++vp.first) {
    Vertex v = *vp.first;
    std::cout << index[v] << " ";
  }
  std::cout << std::endl;
  // ...
  std::cin.get();
}

int main()
{
  test_bootgraph();
  return 0;
}