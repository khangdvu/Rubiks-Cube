#version 330 core

out vec4 color;

in vec2 TexCoord;
in vec3 faceColor;

uniform sampler2D texture_wood;
uniform sampler2D texture_grunge;


void main() {
	color = vec4(faceColor, 1.0f);
}