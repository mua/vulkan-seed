#version 450

/*************************************************************************
* Uniforms
*************************************************************************/

layout(set = 0, binding = 0) uniform Block {
    vec4 mouse;
    vec2 resolution;
    float time;
    float _padding1_;
} uniforms;

layout (location = 0) in vec2 iUV;
layout (location = 0) out vec4 oColor;

/*************************************************************************
* Constants
*************************************************************************/

#define TAU 6.283185
#define EPSILON 0.00001

void main()
{
    // Setup
    vec3 col = vec3(.1, .1, .1);
    vec2 aspectRatio = vec2(1., (uniforms.resolution.y / uniforms.resolution.x));
    vec2 uv = ((iUV - vec2(.5)) * aspectRatio) + vec2(.5);
    vec2 uvc = (uv - vec2(.5));
    float time = uniforms.time * 4.;

    // Flesh out with some distance fields here

    // Vignette
    col = mix(col, vec3(.0, .0, .0), dot(uvc * 2.1, uvc * 2.1));
    
    oColor = vec4(col, 1.0);
}