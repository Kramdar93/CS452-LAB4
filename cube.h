/* Basic cube h file by Mark Elsinger*/


#ifndef CUBE_H
#define CUBE_H

const int num_indices = 36;
const int num_vertices = 8;
const int num_normals = 8;
GLfloat vertices[] = { //for indexing
	-1.0f, -1.0f, -1.0f,
	-1.0f, -1.0f, 1.0f,
	-1.0f, 1.0f, -1.0f,
	-1.0f, 1.0f, 1.0f,
	1.0f, -1.0f, -1.0f,
	1.0f, -1.0f, 1.0f,
	1.0f, 1.0f, -1.0f,
	1.0f, 1.0f, 1.0f,
};
GLfloat normals[] = { //normalize these because I'm lazy
	-1.0f, -1.0f, -1.0f,
	-1.0f, -1.0f, 1.0f,
	-1.0f, 1.0f, -1.0f,
	-1.0f, 1.0f, 1.0f,
	1.0f, -1.0f, -1.0f,
	1.0f, -1.0f, 1.0f,
	1.0f, 1.0f, -1.0f,
	1.0f, 1.0f, 1.0f,
};
GLuint indices[] = {
	0, 1, 2, 
	3, 2, 1, 
	6, 5, 4, 
	5, 6, 7, 
	1, 5, 7, 
	7, 3, 1, 
	0, 2, 6, 
	6, 4, 0, 
	7, 6, 2, 
	2, 3, 7, 
	0, 4, 5, 
	5, 1, 0, 
};

/* boring
const int num_vertices = 36;
const int num_normals = 36;

GLfloat vertices[] = {
0.0f, 0.0f, 0.0f,
0.0f, 0.0f, 1.0f,
0.0f, 1.0f, 0.0f,

0.0f, 1.0f, 1.0f,
0.0f, 1.0f, 0.0f,
0.0f, 0.0f, 1.0f,

1.0f, 1.0f, 0.0f,
1.0f, 0.0f, 1.0f,
1.0f, 0.0f, 0.0f,

1.0f, 0.0f, 1.0f,
1.0f, 1.0f, 0.0f,
1.0f, 1.0f, 1.0f,

0.0f, 0.0f, 1.0f,
1.0f, 0.0f, 1.0f,
1.0f, 1.0f, 1.0f,

1.0f, 1.0f, 1.0f,
0.0f, 1.0f, 1.0f,
0.0f, 0.0f, 1.0f,

0.0f, 0.0f, 0.0f,
0.0f, 1.0f, 0.0f,
1.0f, 1.0f, 0.0f,

1.0f, 1.0f, 0.0f,
1.0f, 0.0f, 0.0f,
0.0f, 0.0f, 0.0f,

1.0f, 1.0f, 1.0f,
1.0f, 1.0f, 0.0f,
0.0f, 1.0f, 0.0f,

0.0f, 1.0f, 0.0f,
0.0f, 1.0f, 1.0f,
1.0f, 1.0f, 1.0f,

0.0f, 0.0f, 0.0f,
1.0f, 0.0f, 0.0f,
1.0f, 0.0f, 1.0f,

1.0f, 0.0f, 1.0f,
0.0f, 0.0f, 1.0f,
0.0f, 0.0f, 0.0f,

};

GLfloat normals[] = {
-1.0f, 0.0f, 0.0f, //left face
-1.0f, 0.0f, 0.0f,
-1.0f, 0.0f, 0.0f,
-1.0f, 0.0f, 0.0f,
-1.0f, 0.0f, 0.0f,
-1.0f, 0.0f, 0.0f,

1.0f, 0.0f, 0.0f, //right face
1.0f, 0.0f, 0.0f,
1.0f, 0.0f, 0.0f,
1.0f, 0.0f, 0.0f,
1.0f, 0.0f, 0.0f,
1.0f, 0.0f, 0.0f,

0.0f, 0.0f, -1.0f, //front face
0.0f, 0.0f, -1.0f,
0.0f, 0.0f, -1.0f,
0.0f, 0.0f, -1.0f,
0.0f, 0.0f, -1.0f,
0.0f, 0.0f, -1.0f,

0.0f, 0.0f, 1.0f, //back face
0.0f, 0.0f, 1.0f,
0.0f, 0.0f, 1.0f,
0.0f, 0.0f, 1.0f,
0.0f, 0.0f, 1.0f,
0.0f, 0.0f, 1.0f,

0.0f, 1.0f, 0.0f, //top face
0.0f, 1.0f, 0.0f,
0.0f, 1.0f, 0.0f,
0.0f, 1.0f, 0.0f,
0.0f, 1.0f, 0.0f,
0.0f, 1.0f, 0.0f,

0.0f, 1.0f, 0.0f, //bottom face
0.0f, 1.0f, 0.0f,
0.0f, 1.0f, 0.0f,
0.0f, 1.0f, 0.0f,
0.0f, 1.0f, 0.0f,
0.0f, 1.0f, 0.0f,
};
*/

#endif //cube_h
