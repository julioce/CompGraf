uniform sampler2D sampler2d0;
varying float difusa;
varying float kespecular;

void main()
{
	//Adiciona as texturas
	vec4 textura = texture2D(sampler2d0, gl_TexCoord[0].st);
	textura = textura * 0.9;
	
	gl_FragColor = textura + (difusa/3.0) + kespecular;
	
}
