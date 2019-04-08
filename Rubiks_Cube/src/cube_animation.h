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

void animate_rotate_whitei() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				is_rotated[i][j][k] = false;
			}
		}
	}

	float temp0[3];
	float temp1[3];
	float temp2[3];
	std::memcpy(temp0, &positions[0][0][0][5], sizeof(float) * 3);
	std::memcpy(temp1, &positions[0][1][0][5], sizeof(float) * 3);
	std::memcpy(temp2, &positions[0][2][0][5], sizeof(float) * 3);

	for (int i = 0; i < 3; i++) {

		is_rotated[0][i][0] = true;
		memcpy_color(positions[0][i][0], positions[5][i][0]);

	}

	for (int i = 0; i < 3; i++) {

		is_rotated[5][i][0] = true;
		memcpy_color(positions[5][i][0], positions[4][i][0]);

	}

	for (int i = 0; i < 3; i++) {

		
		is_rotated[4][i][0] = true;
		is_rotated[2][i][0] = true;
		memcpy_color(positions[4][i][0], positions[2][i][0]);

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




	memcpy_color(positions[2][0][0], temp0, 1);
	memcpy_color(positions[2][1][0], temp0, 1);
	memcpy_color(positions[2][2][0], temp0, 1);
}
void animate_rotate_bluei(){
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				is_rotated[i][j][k] = false;
			}
		}
	}
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

	float temp0[3];
	float temp1[3];
	float temp2[3];		//5th position is the color vertices
	std::memcpy(temp0, &positions[0][0][2][5], sizeof(float) * 3);
	std::memcpy(temp1, &positions[0][1][2][5], sizeof(float) * 3);
	std::memcpy(temp2, &positions[0][2][2][5], sizeof(float) * 3);

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[0][i][2], positions[5][i][2]);
	}

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[5][i][2], positions[4][i][2]);
	}

	for (int i = 0; i < 3; i++) {
		memcpy_color(positions[4][i][2], positions[2][i][2]);
		//	arr[4][i][2] = arr[2][i][2];
	}
	memcpy_color(positions[2][0][2], temp0, 1);
	memcpy_color(positions[2][1][2], temp1, 1);
	memcpy_color(positions[2][2][2], temp2, 1);
}

void animate_rotate_redi() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				is_rotated[i][j][k] = false;
			}
		}
	}
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















 void rotate_matrixi(int face);


void animate_rotate_yellowi() {
	std::cout << "rotate yellowi\n";
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				is_rotated[i][j][k] = false;
			}
		}
	}
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
		//	arr[4][i][2] = arr[2][i][2];
	}
	memcpy_color(positions[2][0][2], temp0, 1);
	memcpy_color(positions[2][1][2], temp1, 1);
	memcpy_color(positions[2][2][2], temp2, 1);
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
#endif