// Vertex strutc definition
typedef struct vertex
{
  float x;
  float y;
  float z;
  Edge *e;
}Vert;

// Edge struct definition
typedef struct edge
{
  Vert* ini, fim;
  Face* esq, dir;
  struct edge* preE, sucE;
  struct edge* preD, sucD;
}Edge;

// Face struct definition
typedef struct face
{
  Edge *e;
}Face;
