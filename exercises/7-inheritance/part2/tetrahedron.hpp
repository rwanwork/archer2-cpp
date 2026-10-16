#ifndef CPPEX_TETRAHEDRON_HPP
#define CPPEX_TETRAHEDRON_HPP

#include "element.hpp"
#include "triangle.hpp"
#include "vector.hpp"
#include "vertex.hpp"

/**
 * A tetrahedron in three-dimensional space.
 *
 * This class represents a tetrahedron defined by four vertices and provides
 * methods to compute the surface area and volume.
 * 
 * TODO: Implement the Tetrahedron class that inherits from Element3D and provides implementations for the getNumVertices(), surfaceArea() and volume() methods.
 */
class Tetrahedron : public Element3D {

  // TODO: Construct a tetrahedron from four vertices.
  Tetrahedron (Vertex v1, Vertex v2, Vertex v3, Vertex v4) : Element3D ({v1, v2, v3, v4}) {};

  // TODO: Implement the getNumVertices() method to return the number of vertices in the tetrahedron (i.e. 4).
  int getNumVertices () const {
    return 4;
  }

  // TODO: Implement the surfaceArea() method to return the surface area of the tetrahedron.
  // HINT: Use the Triangle class to compute the area of each face of the tetrahedron and sum them up.
  double surfaceArea () const {
    Triangle ABC {vertices[0], vertices[1], vertices[2]};
    Triangle ABD {vertices[0], vertices[1], vertices[3]};
    Triangle ACD {vertices[0], vertices[2], vertices[3]};
    Triangle BCD {vertices[1], vertices[2], vertices[3]};
    return ABC.area () + ABD.area () + ACD.area () + BCD.area ();
  }

  // TODO: Implement the volume() method to return the volume of the tetrahedron.
  // 
  // The volume is calculated using the scalar triple product formula:
  // 
  // |(AB x AC) . AD| / 6.0
  // 
  // where AB, AC and AD are vectors from the first vertex to the second, third and fourth vertices, respectively.
  double volume () const {
    Vector AB{vertices[0], vertices[1]};
    Vector AC{vertices[0], vertices[2]};
    Vector AD{vertices[0], vertices[3]};
    return abs (AB.cross(AC).dot(AD)) / 6.0;
  }
};

#endif
