#pragma once
#include "OGLRenderer.h"

enum MeshBuffer {
	VERTEX_BUFFER, COLOUR_BUFFER, TEXTURE_BUFFER, INDEX_BUFFER, MAX_BUFFER
};

class Mesh {
public:
	Mesh(void);
	~Mesh(void);

	void SetTexture(GLuint tex) { texture = tex;}
	GLuint GetTexture() { return texture;}

	virtual void Draw();
	static Mesh* GenerateTriangle();
	static Mesh * GenerateQuad();

protected:
	void BufferData();

	GLuint texture;
	GLuint numIndices;
	unsigned int * indices;

	Vector2 * textureCoords;
	GLuint arrayObject;
	GLuint bufferObject[MAX_BUFFER];
	GLuint numVertices;
	GLuint type;

	Vector3* vertices;
	Vector4* colours;

};
