#version 330 core

out vec4 color;

in vec2 TexCoord;
in vec3 faceColor;

uniform sampler2D u_texture;



void main() {
	color = texture(u_texture,TexCoord) * vec4(faceColor, 1.0f);
}