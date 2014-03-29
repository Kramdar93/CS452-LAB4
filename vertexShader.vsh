#version 130

in vec4 s_vPosition;
in vec4 s_vNormal;	// NEW! the normal is now coming in too

uniform mat4 mM;	// The matrix to convert into the world coordinate system
uniform mat4 mV;	// The matrix to convert into the camera coordinate system
uniform mat4 mP;	// The perspective matrix for depth
uniform mat4 mRotations; // All the rotations for this model

uniform vec4 vLight1;  // The Light position
uniform vec4 vLight2;

out vec3 fN;			// Because these are "out", they go to the fragment shader
out vec3 fL1;			// as interpolated values (i.e. the pixel will have an interpolated normal)
out vec3 fL2;
out vec3 fE;			// NEW!! The vector between the camera and a pixel

void main () {
	
	fN = (mRotations*s_vNormal).xyz;	// Rotate the normal! only take the first 3 parts, since fN is a vec3
	fL1 = vLight1.xyz;					// Same here.  Note: if we're rotating the camera, we'd need to rotate the light direction as well.
	fL2 = vLight2.xyz;
	fE = (mV*mM*s_vPosition).xyz;			// NEW!! where the pixel is relative to the camera. 

	// New way using matrix multiplication.  From local, to world, to camera, to NDCs
	gl_Position = mP*mV*mM*s_vPosition;

}
