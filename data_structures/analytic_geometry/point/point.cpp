//
// Created by 1 on 05.04.2017.
//
#include "point.h"

namespace analytic_2d_geometry {
#define EPS 1e-9

    double sqr(double a) {
        return a * a;
    }

    bool double_equal(double a, double b) {
        return fabs(a - b) < EPS;
    }

    bool double_equal(double a, double b, double eps) {
        return fabs(a - b) < (EPS < eps ? eps : EPS);
    }

    bool double_less_or_equal(double a, double b) {
        return a < b || double_equal(a, b);
    }

    bool double_less_or_equal(double a, double b, double eps) {
        return a < b || double_equal(a, b, eps);
    }

    bool double_less(double a, double b) {
        return a < b && !double_equal(a, b);
    }

    bool double_less(double a, double b, double eps) {
        return a < b && !double_equal(a, b, eps);
    }

    double modified_sqrt(double a) {
        if (double_less(a, 0)) {
            throw "sqrt of a < 0(examole: sqrt(-1))";
        }
        if (a < EPS) {
            return 0;
        }
        return sqrt(a);
    }

    /*
     * Struct for point
     * */
    Point::Point(void): x(0), y (0) {}

    Point::Point(double x, double y) : x(x), y(y) {};

    double Point::get_x() const {
        return x;
    }

    double Point::get_y() const {
        return y;
    }

    /*
     * Struct for 2d vector
     * */
    Vector::Vector(void) : x(0), y(0) {}

    Vector::Vector(double x, double y) : x(x), y(y) {}

    /*
    * Constructor of Vector by two Points
    * where a is start point and b is end point
    * */
    Vector::Vector(Point a, Point b) {
        x = b.get_x() - a.get_x();
        y = b.get_y() - a.get_y();
    }

    double Vector::get_x() const {
        return x;
    }

    double Vector::get_y() const {
        return y;
    }

    /*void Vector::set_x(double x) {
        this->x = x;
    }
    void Vector::set_y(double y) {
        this->y = y;
    }*/

    Vector Vector::operator+(const Vector &v) const {
        return Vector(x + /*v.get_x()*/v.x, y + /*v.get_y()*/v.y);
    }

    Vector Vector::operator-(const Vector &v) const {
        return Vector(x - /*v.get_x()*/v.x, y - /*v.get_y()*/v.y);
    }

    Vector Vector::operator-() const {
        return Vector(-x, -y);
    }

    // multiply by scalar
    Vector Vector::operator*(double k) const {
        return Vector(k * x, k * y);
    }

    // divide on scalar
    Vector Vector::operator/(double k) const {
        return Vector(x / k, y / k);
    }

    // cross product
    double Vector::operator*(const Vector &v) const {
        return v.x * x + v.y * y;
    }

    // dot product
    double Vector::operator%(const Vector &v) const {
        return x * v.x + y * v.y;
    }

    // length of vector from analytic geometry
    double Vector::length() const {
        return modified_sqrt((*this) % (*this));
    }

    double Vector::distance_between(const Vector &v) const {
        return ((*this) - v).length();
    }
}