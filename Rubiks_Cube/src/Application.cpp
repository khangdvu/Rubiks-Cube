

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include "shader_s.h"
#include "stb_image.h"
#include "cube_animation.h"
#include "cube_vertices.h"
#include "camera.h"


#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/string_cast.hpp>


//FUNCTION DECLARATIONS

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);
void processRotation(GLFWwindow *window);
void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
unsigned int is_textured = 0;
char col;
float angle = 0.0f;
bool inverse = false;
int main()
{


	//Declare OpenGL version: 3.3 Core Profile
	//----------------------------------------
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	//Create Window
	//-------------
	GLFWwindow* window = glfwCreateWindow(800, 800, "Rubik's Cube", NULL, NULL);
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);
	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
	//glfwSetCursorPosCallback(window, mouse_callback);
	//glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
	glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);

	glfwSetKeyCallback(window, key_callback);
	//Load GLAD
	//---------
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Failed to initialize GLAD" << std::endl;
		return -1;
	}
	glEnable(GL_DEPTH_TEST);

	//Doing Stuff
	//-----------


		//create vertexshader
	Shader ourShader("src/shaders/basic.vs", "src/shaders/basic.fs", nullptr);

	//default texture
	unsigned int texture_0;
	glGenTextures(1, &texture_0);
	glBindTexture(GL_TEXTURE_2D, texture_0);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height, nrChannels;
	unsigned char *data = stbi_load("res/white.png", &width, &height, &nrChannels, 0);
	if (!data) {
		std::cout << "Failed to load texture" << std::endl;
	}
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
	glGenerateMipmap(GL_TEXTURE_2D);
	stbi_image_free(data);

	//texture #1
	unsigned int texture_wood;
	glGenTextures(1, &texture_wood);
	glBindTexture(GL_TEXTURE_2D, texture_wood);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	data = stbi_load("res/wood.jpg", &width, &height, &nrChannels, 0);
	if (!data) {
		std::cout << "Failed to load texture" << std::endl;
	}
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
	glGenerateMipmap(GL_TEXTURE_2D);
	stbi_image_free(data);

	//texture #2 

	unsigned int texture_grunge;
	glGenTextures(1, &texture_grunge);
	glBindTexture(GL_TEXTURE_2D, texture_grunge);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	data = stbi_load("res/grunge.jpg", &width, &height, &nrChannels, 0);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
	glGenerateMipmap(GL_TEXTURE_2D);
	stbi_image_free(data);

	//create VBO, VAO and EBO
	unsigned int VBO[6][3][3];
	unsigned int VAO, EBO;

	glGenVertexArrays(1, &VAO);
	glBindVertexArray(VAO);
	glEnableVertexAttribArray(0);
	glEnableVertexAttribArray(1);
	glEnableVertexAttribArray(2);

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				glGenBuffers(1, &VBO[i][j][k]);
				glBindBuffer(GL_ARRAY_BUFFER, VBO[i][j][k]);
				glBufferData(GL_ARRAY_BUFFER, sizeof(float) * 8 * 4, positions[i][j][k], GL_STATIC_DRAW);

			}
		}
	}

	glGenBuffers(1, &EBO);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(single_cube_indices), single_cube_indices, GL_STATIC_DRAW);


	ourShader.use();
	ourShader.setInt("u_texture", 0);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture_0);

	//Loop until user closes window
	//-----------------------------
	while (!glfwWindowShouldClose(window))
	{
		//input
		//------
		processInput(window);
		processRotation(window);



		//rendering
		//---------
		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//texture
		if (is_textured == 0)
		{
			glActiveTexture(GL_TEXTURE0);
			glBindTexture(GL_TEXTURE_2D, texture_0);
		}
		if (is_textured == 1)
		{
			glActiveTexture(GL_TEXTURE0);
			glBindTexture(GL_TEXTURE_2D, texture_wood);
		}
		if (is_textured == 2)
		{
			glActiveTexture(GL_TEXTURE0);
			glBindTexture(GL_TEXTURE_2D, texture_grunge);
		}


		//camera

		glm::mat4 view;
		view = glm::lookAt(cameraPos, cameraFront, cameraUp);

		// create transformations
		glm::mat4 model = glm::mat4(1.0f);


		glm::mat4 projection;
		projection = glm::perspective(glm::radians(45.0f), (float)(800 / 800), 0.1f, 100.0f);

		//use shaders 
		ourShader.use();

		//setting transformations
		unsigned int modelLoc = glGetUniformLocation(ourShader.ID, "model");
		glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
		unsigned int viewLoc = glGetUniformLocation(ourShader.ID, "view");
		glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
		unsigned int projectionLoc = glGetUniformLocation(ourShader.ID, "projection");
		glUniformMatrix4fv(projectionLoc, 1, GL_FALSE, glm::value_ptr(projection));

		glBindVertexArray(VAO);

		unsigned int piece_rotationLoc = glGetUniformLocation(ourShader.ID, "piece_rotation");
		glUniformMatrix4fv(piece_rotationLoc, 1, GL_FALSE, glm::value_ptr(identity));
		unsigned int camera_rotationLoc = glGetUniformLocation(ourShader.ID, "camera_rotation");
		glUniformMatrix4fv(camera_rotationLoc, 1, GL_FALSE, glm::value_ptr(camera_rotation));







		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 3; j++) {
				for (int k = 0; k < 3; k++) {

					glBindBuffer(GL_ARRAY_BUFFER, VBO[i][j][k]);
					glBufferData(GL_ARRAY_BUFFER, sizeof(float) * 8 * 4, positions[i][j][k], GL_DYNAMIC_DRAW);
					glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)0);
					glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(3 * sizeof(float)));
					glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(5 * sizeof(float)));

					if (is_rotated[i][j][k] == true) {
						if (angle > 90.0f || angle < -90.0f) {
							is_rotated[i][j][k] = false;
						}
						else {
							float rot_inc = 0.1f;
							glm::mat4 trans = glm::mat4(1.0f);
							if (!inverse) {
								if (col == 'b') {
									trans = glm::rotate(trans, angle*deg2rad, glm::vec3(0.0f, 0.0f, 1.0f));
									glUniformMatrix4fv(piece_rotationLoc, 1, GL_FALSE, glm::value_ptr(trans));
									angle -= rot_inc;
								}
								else if (col == 'w') {
									trans = glm::rotate(trans, angle*deg2rad, glm::vec3(1.0f, 0.0f, 0.0f));
									glUniformMatrix4fv(piece_rotationLoc, 1, GL_FALSE, glm::value_ptr(trans));
									angle += rot_inc;
								}
								else if (col == 'r') {
									trans = glm::rotate(trans, angle*deg2rad, glm::vec3(0.0f, 1.0f, 0.0f));
									glUniformMatrix4fv(piece_rotationLoc, 1, GL_FALSE, glm::value_ptr(trans));
									angle += rot_inc;
								}
								else if (col == 'y'){
									trans = glm::rotate(trans, angle*deg2rad, glm::vec3(1.0f, 0.0f, 0.0f));
									glUniformMatrix4fv(piece_rotationLoc, 1, GL_FALSE, glm::value_ptr(trans));
									angle -= rot_inc;
								}
								else if (col == 'g') {
									trans = glm::rotate(trans, angle*deg2rad, glm::vec3(0.0f, 0.0f, 1.0f));
									glUniformMatrix4fv(piece_rotationLoc, 1, GL_FALSE, glm::value_ptr(trans));
									angle += rot_inc;
								}

								else if (col == 'p') {
									trans = glm::rotate(trans, angle*deg2rad, glm::vec3(0.0f, 1.0f, 0.0f));
									glUniformMatrix4fv(piece_rotationLoc, 1, GL_FALSE, glm::value_ptr(trans));
									angle -= rot_inc;
								}
							}
							else {
								if (col == 'b') {
									trans = glm::rotate(trans, angle*deg2rad, glm::vec3(0.0f, 0.0f, 1.0f));
									glUniformMatrix4fv(piece_rotationLoc, 1, GL_FALSE, glm::value_ptr(trans));
									angle += rot_inc;
								}
								else if (col == 'w') {
									trans = glm::rotate(trans, angle*deg2rad, glm::vec3(1.0f, 0.0f, 0.0f));
									glUniformMatrix4fv(piece_rotationLoc, 1, GL_FALSE, glm::value_ptr(trans));
									angle -= rot_inc;
								}
								else if (col == 'r') {
									trans = glm::rotate(trans, angle*deg2rad, glm::vec3(0.0f, 1.0f, 0.0f));
									glUniformMatrix4fv(piece_rotationLoc, 1, GL_FALSE, glm::value_ptr(trans));
									angle -= rot_inc;
								}
								else if (col == 'y') {
									trans = glm::rotate(trans, angle*deg2rad, glm::vec3(1.0f, 0.0f, 0.0f));
									glUniformMatrix4fv(piece_rotationLoc, 1, GL_FALSE, glm::value_ptr(trans));
									angle += rot_inc;
								}
								else if (col == 'g') {
									trans = glm::rotate(trans, angle*deg2rad, glm::vec3(0.0f, 0.0f, 1.0f));
									glUniformMatrix4fv(piece_rotationLoc, 1, GL_FALSE, glm::value_ptr(trans));
									angle -= rot_inc;
								}

								else if (col == 'p') {
									trans = glm::rotate(trans, angle*deg2rad, glm::vec3(0.0f, 1.0f, 0.0f));
									glUniformMatrix4fv(piece_rotationLoc, 1, GL_FALSE, glm::value_ptr(trans));
									angle += rot_inc;
								}
							}
						}
					}
					else if (is_rotated[i][j][k] == false) {
						glUniformMatrix4fv(piece_rotationLoc, 1, GL_FALSE, glm::value_ptr(identity));
					}
					//draw call
					glDrawElements(GL_TRIANGLES, 3 * 2, GL_UNSIGNED_INT, nullptr);
				}
			}

		}




		float currentFrame = glfwGetTime();
		deltaTime = currentFrame - lastFrame;
		lastFrame = currentFrame;

		//check and call events and swap the buffers
		//------------------------------------------
		glfwSwapBuffers(window);
		glfwPollEvents();
	}



	glfwTerminate();
	return 0;
}


// process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
// ---------------------------------------------------------------------------------------------------------
void processInput(GLFWwindow *window)
{
	float rot_angle = 10.0f;
	float rot_inc = 0.1f;
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);

	if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) {
		camera_rotation = glm::rotate(camera_rotation, rot_inc, glm::vec3(1.0f, 0.0f, 0.0f));
	}
	if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) {
		camera_rotation = glm::rotate(camera_rotation, -rot_inc, glm::vec3(1.0f, 0.0f, 0.0f));

	}

	if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) {
		camera_rotation = glm::rotate(camera_rotation, rot_inc, glm::vec3(0.0f, 1.0f, 0.0f));

	}
	if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) {
		camera_rotation = glm::rotate(camera_rotation, -rot_inc, glm::vec3(0.0f, 1.0f, 0.0f));
	}
	if (glfwGetKey(window, GLFW_KEY_F) == GLFW_PRESS) {
		if (glfwGetKey(window, GLFW_KEY_F) == GLFW_RELEASE)
			is_textured = (is_textured + 1) % 3;
	}


	if (glfwGetKey(window, GLFW_KEY_Y) == GLFW_PRESS) {
		if (!_rotating) {
			col = 'b';
			inverse = false;
			_rotating = true;
			animate_rotate_blue();
		}
	}
	if (glfwGetKey(window, GLFW_KEY_U) == GLFW_PRESS) {
		if (!(_rotating)) {
			col = 'w';
			inverse = false;
			_rotating = true;
			animate_rotate_white();
		}
	}
	if (glfwGetKey(window, GLFW_KEY_I) == GLFW_PRESS) {
		if (!(_rotating)) {
			col = 'r';
			inverse = false;
			_rotating = true;
			animate_rotate_red();
		}
	}
	if (glfwGetKey(window, GLFW_KEY_H) == GLFW_PRESS) {
		if (!_rotating) {
			col = 'y';
			inverse = false;
			_rotating = true;
			animate_rotate_yellow();
		}
	}
	if (glfwGetKey(window, GLFW_KEY_J) == GLFW_PRESS) {
		if (!(_rotating)) {
			col = 'g';
			inverse = false;
			_rotating = true;
			animate_rotate_green();
		}
	}
	if (glfwGetKey(window, GLFW_KEY_K) == GLFW_PRESS) {
		if (!(_rotating)) {
			col = 'p';
			inverse = false;
			_rotating = true;
			animate_rotate_purple();
		}
	}

		if (glfwGetKey(window, GLFW_KEY_Y) == GLFW_PRESS && glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) == GLFW_PRESS) {
			if (!_rotating) {
				col = 'b';
				inverse = true;
				_rotating = true;
				animate_rotate_blue();
			}
		}


		if (glfwGetKey(window, GLFW_KEY_U) == GLFW_PRESS && glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) == GLFW_PRESS) {
			if (!(_rotating)) {
				col = 'w';
				inverse = true;
				_rotating = true;
				animate_rotate_white();
			}
		}


		if (glfwGetKey(window, GLFW_KEY_I) == GLFW_PRESS && glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) == GLFW_PRESS) {
			if (!(_rotating)) {
				col = 'r';
				inverse = true;
				_rotating = true;
				animate_rotate_red();
			}
		}


		if (glfwGetKey(window, GLFW_KEY_H) == GLFW_PRESS && glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) == GLFW_PRESS) {
			if (!_rotating) {
				col = 'y';
				inverse = true;
				_rotating = true;
				animate_rotate_yellow();
			}
		}

		if (glfwGetKey(window, GLFW_KEY_J) == GLFW_PRESS && glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) == GLFW_PRESS) {
			if (!(_rotating)) {
				col = 'g';
				inverse = true;
				_rotating = true;
				animate_rotate_green();
			}
		}


		if (glfwGetKey(window, GLFW_KEY_K) == GLFW_PRESS && glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) == GLFW_PRESS) {
			if (!(_rotating)) {
				col = 'p';
				inverse = true;
				_rotating = true;
				animate_rotate_purple();
			}
		}
}

void processRotation(GLFWwindow *window) {
	if (angle >= 90.0f || angle <= -90.0f) {
		set_default();
		angle = 0.0f;
		if (col == 'b' && !inverse) {
			color_rotate_blue();
		}
		else if (col == 'b' && inverse) {
			color_rotate_bluei();
		}
		else if (col == 'w' && !inverse) {
		color_rotate_white();
		}
		else if (col == 'w' && inverse) {
		color_rotate_whitei();
		}
		else if (col == 'r' && !inverse) {
			color_rotate_red();
		}
		else if (col == 'r' && inverse) {
			color_rotate_redi();
		}
		else if (col == 'y' && !inverse) {
			color_rotate_yellow();
		}
		else if (col == 'y' && inverse) {
			color_rotate_yellowi();
		}
		else if (col == 'g' && !inverse) {
			color_rotate_green();
		}
		else if (col == 'r' && inverse) {
			color_rotate_greeni();
		}
		else if (col == 'p' && !inverse) {
			color_rotate_purple();
		}
		else if (col == 'p' && inverse) {
			color_rotate_purplei();
		}


		_rotating = false;
	}
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{

}

// glfw: whenever the window size changed (by OS or user resize) this callback function executes
// ---------------------------------------------------------------------------------------------
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
	// make sure the viewport matches the new window dimensions; note that width and 
	// height will be significantly larger than specified on retina displays.
	glViewport(0, 0, width, height);
}