#pragma once
//
// Created by 1 on 05.04.2017.
//
#include <cmath>

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_POINT_H
#define ALGORITHMS_AND_DATA_STRUCTURES_POINT_H

namespace analytic_2d_geometry {
//#define EPS 1e-9

    /*
     * Some mathematical functions
     * */

    double sqr(double a);

    bool double_equal(double a, double b);

    bool double_equal(double a, double b, double eps);

    bool double_less_or_equal(double a, double b);

    bool double_less_or_equal(double a, double b, double eps);

    bool double_less(double a, double b);

    bool double_less(double a, double b, double eps);
    /*
     *
     * */

    /*
     * Struct for point
     * */
    struct Point {
    private:
        double x, y;
    public:
        Point(void);
        Point(double x, double y);
        double get_x() const;
        double get_y() const;
    };
    /*
     * Struct for 2d vector
     * */
    struct Vector {
    private:
        double x, y;
    public:
        Vector(void);
        Vector(double x, double y);
        /*
         * Constructor of Vector by two Points
         * where a is start point and b is end point
         * */
        Vector(Point a, Point b);
        double get_x() const;
        double get_y() const;
        /*void set_x(double x);
        void set_y(double y);*/
        Vector operator+(const Vector &v) const;

        Vector operator-(const Vector &v) const;

        Vector operator-() const;

        // multiply by scalar
        Vector operator*(double k) const;

        // divide on scalar
        Vector operator/(double k) const;

        // cross product
        double operator*(const Vector &v) const;

        // dot product
        double operator%(const Vector &v) const;

        double length() const;

        // distance between two vectors/points
        double distance_between(const Vector &v) const;

        // distance between point/vector and line(always >= 0)
        // double distance_between(const )
    };
}

#endif //ALGORITHMS_AND_DATA_STRUCTURES_POINT_H