uniform sampler2D sampler2d0;
uniform sampler2D sampler2d1;

void main() {
	//Inicializa a esfera
	vec4 v = gl_Vertex;

	//Inicializa a normal e a luz
	vec3 normal = gl_Vertex.xyz;    
	vec3 luz = gl_LightSource[0].position.xyz;

	//Cor primaria da esfera
	vec4 preto = vec4(1.0, 1.0, 1.0, 1.0);

	//DIRECAO DA LUZ
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
	float kespecular = especular* especular* especular* especular* especular* especular* especular* especular;

	//DIFUSA + ESPECULAR
	vec3 cor_final = (difusa * preto.xyz) + vec3(kespecular);

	gl_FrontColor.xyz = cor_final;
	gl_FrontColor.w = 1.0;
	gl_TexCoord[0] = gl_MultiTexCoord0;
	gl_TexCoord[1] = gl_MultiTexCoord0;
	gl_Position = ftransform();

	//DEBUG
	//gl_FrontColor.xyz = v.xyz;
	//gl_FrontColor.xyz = vec3(kespecular);

}