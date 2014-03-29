#version 130

in vec3 fN;
in vec3 fL1;
in vec3 fL2;

in vec3 fE;				// NEW!  Coming in from the vertex shader

out vec4 fColor;

void main () {
	vec3 N = normalize(fN);
	vec3 L = normalize(fL1);

	vec3 E = normalize(-fE);	// NEW!	Reverse E
	vec3 H = normalize(L + E);	// NEW! Create the half vector	

	// Diffuse component
	float diffuse_intensity1 = max(dot(N, L), 0.0);
	vec4 diffuse_final1 = diffuse_intensity1*vec4(0.1, 0.6, 0.1, 1.0);		// NEW!! Multiply the diffuse intensity times a color
	//vec4 diffuse_final1 = diffuse_intensity1*vec4(0.1, 0.1, 0.1, 1.0);

	// NEW! Specular component
	float spec_intensity1 = pow(max(dot(N, H), 0.0), 300);
	//vec4 spec_final1 = spec_intensity1*vec4(0.7, 0.9, 0.7, 1.0);
	vec4 spec_final1 = spec_intensity1*vec4(0.7, 0.1, 0.1, 1.0);


	//Do it again!
	L = normalize(fL2);
	H = normalize(L + E);

	float diffuse_intensity2 = max(dot(N, L), 0.0);
	//vec4 diffuse_final2 = diffuse_intensity2*vec4(0.1, 0.8, 0.1, 1.0);		// NEW!! Multiply the diffuse intensity times a color
	vec4 diffuse_final2 = diffuse_intensity2*vec4(0.1, 0.1, 0.1, 1.0);

	float spec_intensity2 = pow(max(dot(N, H), 0.0), 30);
	vec4 spec_final2 = spec_intensity2*vec4(0.7, 0.9, 0.7, 1.0);
	//vec4 spec_final2 = spec_intensity2*vec4(0.9, 0.1, 0.1, 1.0);

	float amb_intensity = 0.05f;
	vec4 amb_final = amb_intensity*vec4(0.1f, 0.1f, 0.5f, 1.0f);

	fColor = diffuse_final1 + spec_final1 + diffuse_final2 + spec_final2 + amb_final;
	
	
	/*
	if (diffuse_intensity == 0) {
		fColor = vec4(0.05, 0.05, 0.05, 1.0);
	}
	else {
		fColor = vec4(diffuse_intensity, diffuse_intensity, diffuse_intensity, 0.5);
	}
	*/
}
