uniform sampler2D sampler2d0;

void main() {
	//Inicializa a esfera
	vec4 v = gl_Vertex;

	//Inicializa a normal e a luz
	vec3 normal = gl_Vertex.xyz;    
	vec3 luz = gl_LightSource[0].position.xyz;

	//Cor primaria da esfera
	vec4 preto = vec4(0.0, 0.0, 0.0, 1.0);

	//Inicializa a textura
	gl_TexCoord[0] = gl_MultiTexCoord0;
	gl_Position = ftransform();
	vec4 textura = texture2D(sampler2d0, gl_TexCoord[0].st);

	v = gl_ModelViewMatrix * v;
	normal = gl_NormalMatrix * normal;
	vec3 dir_luz = normalize(luz - v.xyz);

	//DIFUSA
	float difusa = dot(normal, dir_luz);
	difusa = max(difusa, 0.0);
	
	//ESPECULAR
	vec3 reflexo = normalize(reflect(-dir_luz, normal));
	float especular = dot(reflexo, normalize((-v.xyz)));
	especular = max(especular, 0.0);
	float kespecular = pow(especular, 8);

	//DIFUSA + ESPECULAR
	vec3 cor_final = (difusa * preto.xyz) + vec3(kespecular);

	gl_FrontColor.xyz = cor_final;
	gl_FrontColor.w = 1.0;
	gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;

	//DEBUG
	//gl_FrontColor.xyz = v.xyz;
	//gl_FrontColor.xyz = vec3(kespecular);

}
