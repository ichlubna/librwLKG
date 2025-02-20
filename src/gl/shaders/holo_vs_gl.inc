const char *holo_vert_src =
"#version 330 core\n"
"out vec2 uv;\n"

"void main()\n"
"{\n"
"    vec2 triangle[3] = vec2[3](vec2(-1,-1), vec2(3,-1), vec2(-1, 3));\n"
"    gl_Position = vec4(triangle[gl_VertexID], 0, 1);\n"
"    uv = 0.5f * gl_Position.xy + vec2(0.5f);\n"
"}\n"
;
