#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_PARTICLES 1000
#define SIZE 5 // This is the number of cubes on a axis of the box (5 = a 5x5x5 cube)
#define LENGTH_OF_CUBE 10
#define TOTAL_NUMBER_OF_CUBES SIZE*SIZE*SIZE //5x5x5 box = 125 cubes

typedef struct{
	int x; //x coordinate loaction of the particle
	int y; //y coordinate loaction of the particle
	int z; //z coordinate loaction of the particle
	int myCube; //the cube that this particle is contained in
} particle;

typedef struct{
	particle *particles; //a dynamic array of particles for this cube
	int number_of_particles; // the array index of the last particle, is indexed at 0
	double energy; //the total energy of the cube
} cube;

unsigned char inBounds(int row, int column, int height);
int adjacents(int*);
int belongs_to_cube(int x, int y, int z);
void addToCube(cube * aCube, particle aParticle);
