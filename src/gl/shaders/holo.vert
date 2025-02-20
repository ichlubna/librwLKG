#version 330 core
out vec2 uv;

void main()
{
    vec2 triangle[3] = vec2[3](vec2(-1,-1), vec2(3,-1), vec2(-1, 3));
    gl_Position = vec4(triangle[gl_VertexID], 0, 1);
    uv = 0.5f * gl_Position.xy + vec2(0.5f);
}
