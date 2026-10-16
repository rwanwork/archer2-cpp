#ifndef CPPEX_ELEMENT_HPP
#define CPPEX_ELEMENT_HPP

#include <vector>

#include "vertex.hpp"

/**
 * Base class for geometric elements defined by a set of vertices.
 */
class Element {

  // TODO: Add access specifiers. Should the members of this class be public, private, or protected?
protected:
  std::vector<Vertex> vertices;

  /**
   * Construct an element from a vector of vertices.
   *
   * @param vertices The vertices that define the element.
   */
  Element(std::vector<Vertex> vertices) : vertices(vertices) {}

public:
  /**
   * Get the number of vertices in the element.
   *
   * @return The number of vertices.
   */
  int getNumVertices() const {
    // We could return the size of the vertices vector here, but since this is a base class and we
    // expect derived classes to have a fixed number of vertices, we'll return 0 and leave this for
    // them to override for now.
    return 0;
  }

  /**
   * Get the number of dimensions of the element.
   *
   * @return The number of dimensions.
   */
  int getNumDims() const {
    return 0;
  }

  /**
   * Get the vertices of the element.
   *
   * @return A constant reference to the vector of vertices.
   */
  const std::vector<Vertex>& getVertices() const {
    return vertices;
  }
};


/**
 * Base class for 2D geometric elements.
 * 
 * TODO: Implement a 2D element class that inherits from Element.
 */
class Element2D : public Element {

  // TODO: Add any necessary constructor(s). Should these be public, private, or protected?
public:
  Element2D (std::vector<Vertex> vertices) : Element (vertices) {}

  // TODO: Override the getNumDims() method to return 2.
public:
  int getNumDims() const {
    return 2;
  }

  // TODO: Add a method to compute the area of the 2D element that derived classes can override. It should return a double.
  double area () const {
    return (0);
  }
};


/**
 * Base class for 3D geometric elements.
 * 
 * TODO: Implement a 3D element class that inherits from Element.
 */
class Element3D : public Element {

  // TODO: Add any necessary constructor(s). Should these be public, private, or protected?
public:
  Element3D (std::vector<Vertex> vertices) : Element (vertices) {}

  // TODO: Override the getNumDims() method to return 3.
public:
  int getNumDims() const {
    return 3;
  }

  // TODO: Add a method to compute the surface area of the 3D element that derived classes can override. It should return a double.
  double surfaceArea () const {
    return (0);
  }

  // TODO: Add a method to compute the volume of the 3D element that derived classes can override. It should return a double.
  double volume () const {
    return (0);
  }
};

#endif
