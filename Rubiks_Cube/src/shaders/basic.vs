#version 330 core

layout(location = 0) in vec4 position;
layout (location = 1) in vec2 aTexCoord;
layout(location = 2) in vec3 fColor;

out vec2 TexCoord;
out	vec3 faceColor;

uniform mat4 model;
uniform mat4 view;
uniform mat4 camera_rotation;
uniform mat4 projection;
uniform mat4 piece_rotation;

void main(){
	gl_Position =  projection * view * camera_rotation * piece_rotation * model * position;
	TexCoord = vec2(aTexCoord.x, aTexCoord.y);
	faceColor = fColor;
}

