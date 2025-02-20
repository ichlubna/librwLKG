const char *holo_frag_src =
"#version 330 core\n"
"uniform sampler2D fboTexture;\n"
"in vec2 uv;\n"
"out vec4 fragColor;\n"

"void main(void)\n"
"{\n"
"	vec4 color = texture(fboTexture, uv);\n"
"	fragColor = color;\n"
"}\n"

;
