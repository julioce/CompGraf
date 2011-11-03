uniform sampler2D sampler2d0, sampler2d1;

void main()
{
	//Adiciona as texturas
	vec4 textura = texture2D(sampler2d0,gl_TexCoord[0].st) *
		  texture2D(sampler2d1, 6.0 * gl_TexCoord[0].st);

	//Ilumina melhor
	textura = textura * 1.4;

	//Se for o friso preto ele tera o reflexo
	if((textura.r < 0.158) && (textura.g < 0.18) && (textura.b < 0.18)) {
		gl_FragColor = gl_Color/1.4;
	} else {
		gl_FragColor = textura;
	}
	
}
