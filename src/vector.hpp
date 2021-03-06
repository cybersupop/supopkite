/*
 * https://github.com/glaba/STL-Renderer
 *
 * vector.c - source file for ECE220 picture drawing program wrapper code
 *
 * "Copyright (c) 2018 by Charles H. Zega, and Saransh Sinha."
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice and the following
 * two paragraphs appear in all copies of this software.
 * 
 * IN NO EVENT SHALL THE AUTHOR OR THE UNIVERSITY OF ILLINOIS BE LIABLE TO 
 * ANY PARTY FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL 
 * DAMAGES ARISING OUT  OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, 
 * EVEN IF THE AUTHOR AND/OR THE UNIVERSITY OF ILLINOIS HAS BEEN ADVISED 
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * THE AUTHOR AND THE UNIVERSITY OF ILLINOIS SPECIFICALLY DISCLAIM ANY 
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF 
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE 
 * PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND NEITHER THE AUTHOR NOR
 * THE UNIVERSITY OF ILLINOIS HAS ANY OBLIGATION TO PROVIDE MAINTENANCE, 
 * SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 * Author:      Charles Zega, Saransh Sinha
 * Creation Date:   12 February 2018
 * Filename:        vector.h
 */

 #ifndef vector_hpp
#define vector_hpp

#include <math.h>

typedef struct {
	double x;
	double y;
	double z;
} Vector;

extern double magnitude(Vector v);
extern Vector normalize(Vector v);
extern Vector add_vec(Vector v1, Vector v2);
extern Vector mul_vec(double s, Vector v);
extern Vector neg_vec(Vector v);
extern Vector cross(Vector u, Vector v);
extern double dot(Vector v1, Vector v2);

#endif /* vector_hpp */
