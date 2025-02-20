#version 330 core
uniform sampler2D fboTexture;
in vec2 uv;
out vec4 fragColor;

void main(void)
{
	vec4 color = texture(fboTexture, uv);
	fragColor = color;
}

