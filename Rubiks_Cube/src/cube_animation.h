#ifndef CUBE_ANIMATION_H
#define CUBE_ANIMATION_H
#include "cube_vertices.h"
#include "camera.h"
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

bool _rotating = false;
void memcpy_color(float* positions_dest, float* positions_src);
void memcpy_color(float* positions_dest, float* positions_src, int i);
void set_default();
float rot_inc = 0.001f;
void rotate_matrix(int face);
void rotate_matrixi(int face);


void color_rotate_blue() {
	float temp0[3];
	float temp1[3];
	float temp2[3];		//5th position is the color vertices
	std::memcpy(temp0, &positions[5][2][0][5], sizeof(float) * 3);
	std::memcpy(temp1, &positions[5][2][1][5], sizeof(float) * 3);
	std::memcpy(temp2, &positions[5][2][2][5], sizeof(float) * 3);

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[5][2][i], positions[1][0][2 - i]);
	}

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[1][0][i], positions[2][0][i]);
	}

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[2][0][i], positions[3][0][i]);
	}
	memcpy_color(positions[3][0][2], temp0, 1);
	memcpy_color(positions[3][0][1], temp1, 1);
	memcpy_color(positions[3][0][0], temp2, 1);
	rotate_matrix(0);
}

void color_rotate_bluei() {
	float temp0[3];
	float temp1[3];
	float temp2[3];		//5th position is the color vertices
	std::memcpy(temp0, &positions[5][0][2][5], sizeof(float) * 3);
	std::memcpy(temp1, &positions[5][1][2][5], sizeof(float) * 3);
	std::memcpy(temp2, &positions[5][2][2][5], sizeof(float) * 3);

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[5][2][i], positions[3][0][2-i]);
	}

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[3][0][i], positions[2][0][i]);
	}

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[2][0][i], positions[1][0][i]);
	}
	memcpy_color(positions[1][0][2], temp0, 1);
	memcpy_color(positions[1][0][1], temp1, 1);
	memcpy_color(positions[1][0][0], temp2, 1);
	rotate_matrixi(0);

}

void color_rotate_white() {
	float temp0[3];
	float temp1[3];
	float temp2[3];
	std::memcpy(temp0, &positions[0][0][0][5], sizeof(float) * 3);
	std::memcpy(temp1, &positions[0][1][0][5], sizeof(float) * 3);
	std::memcpy(temp2, &positions[0][2][0][5], sizeof(float) * 3);
	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[0][i][0], positions[5][i][0]);
	}
	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[5][i][0], positions[4][i][0]);
	}
	for (int i = 0; i < 3; i++) {

		memcpy_color(positions[4][i][0], positions[2][i][0]);
	}
	memcpy_color(positions[2][0][0], temp0, 1);
	memcpy_color(positions[2][1][0], temp1, 1);
	memcpy_color(positions[2][2][0], temp2, 1);
	rotate_matrix(1);
}

void color_rotate_whitei() {
	float temp0[3];
	float temp1[3];
	float temp2[3];
	std::memcpy(temp0, &positions[0][0][0][5], sizeof(float) * 3);
	std::memcpy(temp1, &positions[0][1][0][5], sizeof(float) * 3);
	std::memcpy(temp2, &positions[0][2][0][5], sizeof(float) * 3);
	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[0][i][0], positions[2][i][0]);
	}
	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[2][i][0], positions[4][i][0]);
	}
	for (int i = 0; i < 3; i++) {

		memcpy_color(positions[4][i][0], positions[5][i][0]);
	}
	memcpy_color(positions[5][0][0], temp0, 1);
	memcpy_color(positions[5][1][0], temp1, 1);
	memcpy_color(positions[5][2][0], temp2, 1);
	rotate_matrixi(1);
}

void color_rotate_red() {
	float temp0[3];
	float temp1[3];
	float temp2[3];		//5th position is the color vertices
	std::memcpy(temp0, &positions[0][2][0][5], sizeof(float) * 3);
	std::memcpy(temp1, &positions[0][2][1][5], sizeof(float) * 3);
	std::memcpy(temp2, &positions[0][2][2][5], sizeof(float) * 3);

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[0][2][i], positions[1][2-i][2]);
	}

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[1][i][2], positions[4][0][i]);
	}

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[4][0][2-i], positions[3][i][0]);
	}
	memcpy_color(positions[3][0][0], temp0, 1);
	memcpy_color(positions[3][1][0], temp1, 1);
	memcpy_color(positions[3][2][0], temp2, 1);
	rotate_matrix(2);
}

void color_rotate_redi() {
	float temp0[3];
	float temp1[3];
	float temp2[3];		//5th position is the color vertices
	std::memcpy(temp0, &positions[0][2][0][5], sizeof(float) * 3);
	std::memcpy(temp1, &positions[0][2][1][5], sizeof(float) * 3);
	std::memcpy(temp2, &positions[0][2][2][5], sizeof(float) * 3);

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[0][2][i], positions[3][i][0]);
	}

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[3][i][0], positions[4][0][2-i]);
	}

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[4][0][i], positions[1][i][2]);
	}
	memcpy_color(positions[1][2][2], temp0, 1);
	memcpy_color(positions[1][1][2], temp1, 1);
	memcpy_color(positions[1][0][2], temp2, 1);
	rotate_matrixi(2);
	}

void color_rotate_yellow() {
	float temp0[3];
	float temp1[3];
	float temp2[3];		//5th position is the color vertices
	std::memcpy(temp0, &positions[0][0][2][5], sizeof(float) * 3);
	std::memcpy(temp1, &positions[0][1][2][5], sizeof(float) * 3);
	std::memcpy(temp2, &positions[0][2][2][5], sizeof(float) * 3);

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[0][i][2], positions[2][i][2]);
	}

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[2][i][2], positions[4][i][2]);
	}

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[4][i][2], positions[5][i][2]);
	}
	memcpy_color(positions[5][0][2], temp0, 1);
	memcpy_color(positions[5][1][2], temp1, 1);
	memcpy_color(positions[5][2][2], temp2, 1);
	rotate_matrix(3);
}

void color_rotate_yellowi() {
	float temp0[3];
	float temp1[3];
	float temp2[3];		//5th position is the color vertices
	std::memcpy(temp0, &positions[0][0][2][5], sizeof(float) *3);
	std::memcpy(temp1, &positions[0][1][2][5], sizeof(float) *3);
	std::memcpy(temp2, &positions[0][2][2][5], sizeof(float) *3);

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[0][i][2], positions[5][i][2]);
	}

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[5][i][2], positions[4][i][2]);
	}

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[4][i][2], positions[2][i][2]);
	}
	memcpy_color(positions[2][0][2], temp0, 1);
	memcpy_color(positions[2][1][2], temp1, 1);
	memcpy_color(positions[2][2][2], temp2, 1);
	rotate_matrixi(3);
}

void color_rotate_green() {
	float temp0[3];
	float temp1[3];
	float temp2[3];
	std::memcpy(temp0, &positions[2][2][0][5], sizeof(float) * 3);
	std::memcpy(temp1, &positions[2][2][1][5], sizeof(float) * 3);
	std::memcpy(temp2, &positions[2][2][2][5], sizeof(float) * 3);
	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[2][2][i], positions[1][2][i]);
	}
	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[1][2][i], positions[5][0][2 - i]);
	}
	for (int i = 0; i < 3; i++) {

		memcpy_color(positions[5][0][2 - i], positions[3][2][i]);
	}
	memcpy_color(positions[3][2][0], temp0, 1);
	memcpy_color(positions[3][2][1], temp1, 1);
	memcpy_color(positions[3][2][2], temp2, 1);
	rotate_matrix(4);
}

void color_rotate_greeni() {
	float temp0[3];
	float temp1[3];
	float temp2[3];
	std::memcpy(temp0, &positions[2][2][0][5], sizeof(float) * 3);
	std::memcpy(temp1, &positions[2][2][1][5], sizeof(float) * 3);
	std::memcpy(temp2, &positions[2][2][2][5], sizeof(float) * 3);
	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[2][2][i], positions[3][2][i]);
	}
	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[3][2][i], positions[5][0][2 - i]);
	}
	for (int i = 0; i < 3; i++) {

		memcpy_color(positions[5][0][2 - i], positions[1][2][i]);
	}
	memcpy_color(positions[1][2][0], temp0, 1);
	memcpy_color(positions[1][2][1], temp1, 1);
	memcpy_color(positions[1][2][2], temp2, 1);
	rotate_matrixi(4);
}

void color_rotate_purple() {
	std::cout << "rotate purplei\n";
	float temp0[3];
	float temp1[3];
	float temp2[3];		//5th position is the color vertices
	std::memcpy(temp0, &positions[0][0][0][5], sizeof(float) * 3);
	std::memcpy(temp1, &positions[0][0][1][5], sizeof(float) * 3);
	std::memcpy(temp2, &positions[0][0][2][5], sizeof(float) * 3);

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[0][0][i], positions[3][i][2]);
	}

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[3][i][2], positions[4][2][2-i]);
	}

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[4][2][i], positions[1][i][0]);
	}
	memcpy_color(positions[1][2][0], temp0, 1);
	memcpy_color(positions[1][1][0], temp1, 1);
	memcpy_color(positions[1][0][0], temp2, 1);
	rotate_matrix(5);
}

void color_rotate_purplei() {
	std::cout << "rotate purplei\n";
	float temp0[3];
	float temp1[3];
	float temp2[3];		//5th position is the color vertices
	std::memcpy(temp0, &positions[0][0][0][5], sizeof(float) * 3);
	std::memcpy(temp1, &positions[0][0][1][5], sizeof(float) * 3);
	std::memcpy(temp2, &positions[0][0][2][5], sizeof(float) * 3);

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[0][0][i], positions[1][2 - i][0]);
	}

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[1][i][0], positions[4][2][i]);
	}

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[4][2][2 - i], positions[3][i][2]);
	}
	memcpy_color(positions[3][0][2], temp0, 1);
	memcpy_color(positions[3][1][2], temp1, 1);
	memcpy_color(positions[3][2][2], temp2, 1);
	rotate_matrixi(5);
}






void animate_rotate_purple() {

	set_default();

		for (int i = 0; i < 3; i++) {
			is_rotated[0][0][i] = true;

		}
		for (int i = 0; i < 3; i++) {
			is_rotated[1][i][0] = true;

		}
		for (int i = 0; i < 3; i++) {
			is_rotated[4][2][2 - i] = true;
			is_rotated[3][i][2] = true;


		}
		for (int i = 0; i < 3; i++) {
			is_rotated[5][0][i] = true;
			is_rotated[5][1][i] = true;
			is_rotated[5][2][i] = true;
			is_rotated[5][0][i] = true;
			is_rotated[5][1][i] = true;
			is_rotated[5][2][i] = true;
			is_rotated[5][0][i] = true;
			is_rotated[5][1][i] = true;
			is_rotated[5][2][i] = true;
		}
}

void animate_rotate_white(){
	set_default();


	for (int i = 0; i < 3; i++) {
		is_rotated[0][i][0] = true;

	}
	for (int i = 0; i < 3; i++) {
		is_rotated[5][i][0] = true;

	}
	for (int i = 0; i < 3; i++) {
		is_rotated[4][i][0] = true;
		is_rotated[2][i][0] = true;


	}
	for (int i = 0; i < 3; i++) {
		is_rotated[1][0][i] = true;
		is_rotated[1][1][i] = true;
		is_rotated[1][2][i] = true;
		is_rotated[1][0][i] = true;
		is_rotated[1][1][i] = true;
		is_rotated[1][2][i] = true;
		is_rotated[1][0][i] = true;
		is_rotated[1][1][i] = true;
		is_rotated[1][2][i] = true;
	}
}

void animate_rotate_blue(){
	set_default();
	for (int i = 0; i < 3; i++) {
		is_rotated[5][2][i] = true;
	}
	for (int i = 0; i < 3; i++) {
		is_rotated[1][0][i] = true;
	}
	for (int i = 0; i < 3; i++) {
		is_rotated[2][0][i] = true;
		is_rotated[3][0][i] = true;
	}
	
	for (int i = 0; i < 3; i++) {
		is_rotated[0][0][i] = true;
		is_rotated[0][1][i] = true;
		is_rotated[0][2][i] = true;
		is_rotated[0][0][i] = true;
		is_rotated[0][1][i] = true;
		is_rotated[0][2][i] = true;
		is_rotated[0][0][i] = true;
		is_rotated[0][1][i] = true;
		is_rotated[0][2][i] = true;
	}

}

void animate_rotate_red() {
		set_default();
		is_rotated[0][2][0] = true;
		is_rotated[0][2][1] = true;
		is_rotated[0][2][2] = true;

		is_rotated[3][0][0] = true;
		is_rotated[3][1][0] = true;
		is_rotated[3][2][0] = true;

		is_rotated[4][0][0] = true;
		is_rotated[4][0][1] = true;
		is_rotated[4][0][2] = true;

		is_rotated[1][2][2] = true;
		is_rotated[1][1][2] = true;
		is_rotated[1][0][2] = true;

		is_rotated[2][0][0] = true;
		is_rotated[2][1][0] = true;
		is_rotated[2][2][0] = true;
		is_rotated[2][0][1] = true;
		is_rotated[2][1][1] = true;
		is_rotated[2][2][1] = true;
		is_rotated[2][0][2] = true;
		is_rotated[2][1][2] = true;
		is_rotated[2][2][2] = true;
	}

void animate_rotate_yellow() {

	set_default();

	is_rotated[0][0][2] = true;
	is_rotated[0][1][2] = true;
	is_rotated[0][2][2] = true;

	is_rotated[5][0][2] = true;
	is_rotated[5][1][2] = true;
	is_rotated[5][2][2] = true;

	is_rotated[4][0][2] = true;
	is_rotated[4][1][2] = true;
	is_rotated[4][2][2] = true;

	is_rotated[2][0][2] = true;
	is_rotated[2][1][2] = true;
	is_rotated[2][2][2] = true;

	is_rotated[3][0][0] = true;
	is_rotated[3][1][0] = true;
	is_rotated[3][2][0] = true;
	is_rotated[3][0][1] = true;
	is_rotated[3][1][1] = true;
	is_rotated[3][2][1] = true;
	is_rotated[3][0][2] = true;
	is_rotated[3][1][2] = true;
	is_rotated[3][2][2] = true;
}

void animate_rotate_green() {
	set_default();


	for (int i = 0; i < 3; i++) {
		is_rotated[2][2][i] = true;

	}
	for (int i = 0; i < 3; i++) {
		is_rotated[1][2][i] = true;

	}
	for (int i = 0; i < 3; i++) {
		is_rotated[5][0][2-i] = true;
		is_rotated[3][2][i] = true;


	}
	for (int i = 0; i < 3; i++) {
		is_rotated[4][0][i] = true;
		is_rotated[4][1][i] = true;
		is_rotated[4][2][i] = true;
		is_rotated[4][0][i] = true;
		is_rotated[4][1][i] = true;
		is_rotated[4][2][i] = true;
		is_rotated[4][0][i] = true;
		is_rotated[4][1][i] = true;
		is_rotated[4][2][i] = true;
	}
}


void rotate_matrix(int face) {
	int N = 3;
	// Consider all squares one by one 
	for (int x = 0; x < N / 2; x++)
	{
		// Consider elements in group of 4 in  
		// current square 
		for (int y = x; y < N - x - 1; y++)
		{
			// store current cell in temp variable 
		
			float temp[3];
			std::memcpy(temp, &positions[face][x][y][5], sizeof(float) * 3);
			memcpy_color(positions[face][x][y], positions[face][N - 1 - y][x]);
			memcpy_color(positions[face][N - 1 - y][x], positions[face][N - 1 - x][N - 1 - y]);
			memcpy_color(positions[face][N - 1 - x][N - 1 - y], positions[face][y][N - 1 - x]);
			memcpy_color(positions[face][y][N - 1 - x], temp, 1);

		}
	}
}

void rotate_matrixi(int face) {
	int N = 3;
	// Consider all squares one by one 
	for (int x = 0; x < N / 2; x++)
	{
		// Consider elements in group of 4 in  
		// current square 
		for (int y = x; y < N - x - 1; y++)
		{
			// store current cell in temp variable 

			float temp[3];
			std::memcpy(temp, &positions[face][x][y][5], sizeof(float) * 3);
			memcpy_color(positions[face][x][y], positions[face][y][N - 1 - x]);
			memcpy_color(positions[face][y][N - 1 - x], positions[face][N - 1 - x][N - 1 - y]);
			memcpy_color(positions[face][N - 1 - x][N - 1 - y], positions[face][N - 1 - y][x]);
			memcpy_color(positions[face][N - 1 - y][x], temp, 1);

		}
	}
}
void memcpy_color(float* positions_dest, float* positions_src) {
	std::memcpy(positions_dest + 5, positions_src + 5, sizeof(float) * 3);
	std::memcpy(positions_dest + 5 + 8, positions_src + 5 +  8, sizeof(float) * 3);
	std::memcpy(positions_dest + 5 + 16, positions_src + 5 + 16, sizeof(float) * 3);
	std::memcpy(positions_dest + 5 + 24, positions_src + 5 + 24, sizeof(float) * 3);
}

void memcpy_color(float* positions_dest, float* positions_src, int i) {
	std::memcpy(positions_dest + 5, positions_src, sizeof(float) * 3);
	std::memcpy(positions_dest + 5, positions_src, sizeof(float) * 3);
	std::memcpy(positions_dest + 5, positions_src, sizeof(float) * 3);
	std::memcpy(positions_dest + 5 + 8, positions_src, sizeof(float) * 3);
	std::memcpy(positions_dest + 5 + 8, positions_src, sizeof(float) * 3);
	std::memcpy(positions_dest + 5 + 8, positions_src, sizeof(float) * 3);
	std::memcpy(positions_dest + 5 + 16, positions_src, sizeof(float) * 3);
	std::memcpy(positions_dest + 5 + 16, positions_src, sizeof(float) * 3);
	std::memcpy(positions_dest + 5 + 16, positions_src, sizeof(float) * 3);
	std::memcpy(positions_dest + 5 + 24, positions_src, sizeof(float) * 3);
	std::memcpy(positions_dest + 5 + 24, positions_src, sizeof(float) * 3);
	std::memcpy(positions_dest + 5 + 24, positions_src, sizeof(float) * 3);
}

void set_default() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				is_rotated[i][j][k] = false;
			}
		}
	}
}


#endif