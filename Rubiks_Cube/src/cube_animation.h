#ifndef CUBE_ANIMATION_H
#define CUBE_ANIMATION_H
#include "cube_vertices.h"
#include "camera.h"
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>




void animate_rotate_yellowi() {
	
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
}



















 /* void rotate_matrixi(int face);


void animate_rotate_yellowi() {
	std::cout << "rotate yellowi\n";
	//cubik temp0 = arr[0][0][2];
	//cubik temp1 = arr[0][1][2];
	//cubik temp2 = arr[0][2][2];
	float temp0[3];
	float temp1[3];
	float temp2[3];
	std::memcpy(temp0, &positions[0][0][2][5], sizeof(float) * 3);
	std::memcpy(temp1, &positions[0][1][2][5], sizeof(float) * 3);
	std::memcpy(temp2, &positions[0][2][2][5], sizeof(float) * 3);
	std::cout << temp0[0] << temp0[1] << temp0[2] << std::endl;

	for (int i = 0; i < 3; i++) {
		std::memcpy(positions[0][i][2], positions[5][i][2], sizeof(float) * 32);

		//arr[0][i][2] = arr[5][i][2];
		//std::cout << positions[0][i][2][5] << positions[0][i][2][6] << positions[0][i][2][7] << "\n" << std::endl;
	}

	//
	for (int i = 0; i < 3; i++) {
		std::memcpy(positions[5][i][2], positions[4][i][2], sizeof(float) * 32);


		//arr[5][i][2] = arr[4][i][2];
	}

	for (int i = 0; i < 3; i++) {
		std::memcpy(positions[4][i][2], positions[2][i][2], sizeof(float) * 32);
		//	arr[4][i][2] = arr[2][i][2];
	}
	//
	std::memcpy(positions[2][0][2], temp0, sizeof(float) * 32);
	std::memcpy(positions[2][1][2], temp1, sizeof(float) * 32);
	std::memcpy(positions[2][2][2], temp2, sizeof(float) * 32);
	//arr[2][0][2] = temp0;
	//arr[2][1][2] = temp1;
	//arr[2][2][2] = temp2;
	//cubik temp = arr[1][0][0];
	rotate_matrixi(3);
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
			//cubik temp = arr[face][x][y];

			// move values from right to top
			std::memcpy(positions[face][x][y], positions[face][y][y], sizeof(float) * 32);
			//arr[face][x][y] = arr[face][y][N - 1 - x];

			// move values from bottom to right 
			std::memcpy(positions[face][y][N - 1 - x], positions[face][N - 1 - x][N - 1 - y], sizeof(float) * 32);
			//arr[face][y][N - 1 - x] = arr[face][N - 1 - x][N - 1 - y];

			// move values from left to bottom 
			std::memcpy(positions[face][N - 1 - x][N - 1 - y], positions[face][N - 1 - y][x], sizeof(float) * 32);
			//arr[face][N - 1 - x][N - 1 - y] = arr[face][N - 1 - y][x];

			// assign temp to left 
			std::memcpy(positions[face][N - 1 - y][x], temp, sizeof(float) * 32);
			//arr[face][N - 1 - y][x] = temp;
		}
	}
} */

#endif