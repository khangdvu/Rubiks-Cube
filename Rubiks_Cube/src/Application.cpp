

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include "shader_s.h"
#include "stb_image.h"

#include "cube_vertices.h"
#include "camera.h"


#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/string_cast.hpp>


//FUNCTION DECLARATIONS

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);
void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
unsigned int is_textured = 0;

#define M_PI 3.14159265358979323846264338327950
static const float deg2rad = M_PI / 180.0;
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
	glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
	//glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);

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
	unsigned int VBO, VAO, EBO;
	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &VBO);
	glGenBuffers(1, &EBO);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO);

	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(positions), positions, GL_DYNAMIC_DRAW);
	//glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	//glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// position attribute
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);

	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(3*sizeof(float)));
	glEnableVertexAttribArray(1);

	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(5 * sizeof(float)));
	glEnableVertexAttribArray(2);

	//testing uniforms
	float r = 0.1f;
	float increment = 0.01f;

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
		view = glm::lookAt(cameraFront +cameraPos, cameraFront , cameraFront +cameraUp);

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

		

		
			//draw

		glBindVertexArray(VAO);

		unsigned int transformLoc = glGetUniformLocation(ourShader.ID, "transform");
		glUniformMatrix4fv(transformLoc, 1, GL_FALSE, glm::value_ptr(rot_mat));
		


		glUniformMatrix4fv(transformLoc, 1, GL_FALSE, glm::value_ptr(identity));
		
		//glUniformMatrix4fv(transformLoc, 1, GL_FALSE, glm::value_ptr(identity));
		glBindBuffer(GL_ARRAY_BUFFER, VBO);
		glBufferData(GL_ARRAY_BUFFER, sizeof(positions), positions, GL_DYNAMIC_DRAW);
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
		glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(unsigned int) * 6 * 9 * 2 * 3, cube_indices, GL_STATIC_DRAW);
		glBindVertexArray(VAO);
		glDrawElements(GL_TRIANGLES, 6*9*3*2 , GL_UNSIGNED_INT, nullptr);
												//6faces 9squares 3vertices 2triangles

		float currentFrame = glfwGetTime();
		deltaTime = currentFrame - lastFrame;
		lastFrame = currentFrame;
		glUniformMatrix4fv(transformLoc, 1, GL_FALSE, glm::value_ptr(identity));

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

	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);
	float cameraSpeed = 2.5f * deltaTime; // adjust accordingly
	if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) {

		camera_rot_mat = glm::rotate(identity, glm::degrees(rot_angle), cameraTan);
		cameraPos += glm::mat3(camera_rot_mat)*cameraSpeed* cameraPos ;
		cameraPos =	glm::mat3(trans_cam_mat) * glm::normalize(cameraPos);
		cameraUp += glm::mat3(camera_rot_mat)*cameraSpeed * cameraUp;
		cameraTan += glm::mat3(camera_rot_mat)*cameraSpeed * cameraTan;
		//std::cout << "Postion " << glm::to_string(cameraPos) << "Front " << glm::to_string(cameraFront) << "Up " << glm::to_string(cameraUp) << "\n"
		//	<< std::endl;
	}
	if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) {
		camera_rot_mat = glm::rotate(identity, glm::degrees(-rot_angle), cameraTan);
		cameraPos += glm::mat3(camera_rot_mat)*cameraSpeed* cameraPos;
		cameraPos = glm::mat3(trans_cam_mat) * glm::normalize(cameraPos);
		cameraUp += glm::mat3(camera_rot_mat)*cameraSpeed * cameraUp;
		cameraTan += glm::mat3(camera_rot_mat)*cameraSpeed * cameraTan;
		cameraUp = glm::mat3(trans_cam_mat) * glm::normalize(cameraUp);
		cameraTan = glm::mat3(trans_cam_mat) *glm::normalize(cameraTan);
	}

	if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) {
		camera_rot_mat = glm::rotate(identity, glm::degrees(rot_angle), cameraUp);
		cameraPos += glm::mat3(camera_rot_mat)*cameraSpeed* cameraPos;
		cameraPos = glm::mat3(trans_cam_mat) * glm::normalize(cameraPos);
		cameraTan += glm::mat3(camera_rot_mat)*cameraSpeed * cameraTan;
		cameraTan = glm::mat3(trans_cam_mat) *glm::normalize(cameraTan);
	}
	if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) {
		camera_rot_mat = glm::rotate(identity, glm::degrees(-rot_angle), cameraUp);
		cameraPos += glm::mat3(camera_rot_mat)*cameraSpeed* cameraPos;
		cameraPos = glm::mat3(trans_cam_mat) * glm::normalize(cameraPos);
		cameraTan += glm::mat3(camera_rot_mat)*cameraSpeed * cameraTan;
		cameraTan = glm::mat3(trans_cam_mat) * glm::normalize(cameraTan);
	}


}


void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	if (glfwGetKey(window, GLFW_KEY_F) == GLFW_PRESS) {
		is_textured = (is_textured + 1) % 3;
	}
	rot_angle = 90.0f;

	if (glfwGetKey(window, GLFW_KEY_Z) == GLFW_PRESS) {

	}

	if (glfwGetKey(window, GLFW_KEY_X) == GLFW_PRESS) {
		animate_rotate_yellowi();
		//rot_mat = glm::rotate(identity, glm::radians(90.0f * deg2rad), glm::vec3(0.0f, 1.0f, 1.0f));
	}

	if (glfwGetKey(window, GLFW_KEY_C) == GLFW_PRESS) {
		rot_mat = glm::rotate(identity, glm::radians(90.0f * deg2rad), glm::vec3(0.0f, 0.0f, 1.0f));
	}
}

// glfw: whenever the window size changed (by OS or user resize) this callback function executes
// ---------------------------------------------------------------------------------------------
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
	// make sure the viewport matches the new window dimensions; note that width and 
	// height will be significantly larger than specified on retina displays.
	glViewport(0, 0, width, height);
}