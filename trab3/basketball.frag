uniform sampler2D sampler2d0, sampler2d1, sampler2d2;
varying float difusa;

void main()
{
	//Adiciona as texturas
	vec4 textura = texture2D(sampler2d2, 1.0 * gl_TexCoord[0].st);
	textura = textura * 0.9;
	
	//Aplica a logo NBA
	if((textura.r < 0.30) && (textura.g < 0.30) && (textura.b < 0.30)) {
		textura = texture2D(sampler2d0,gl_TexCoord[0].st) *
		texture2D(sampler2d1, 6.0 * gl_TexCoord[0].st);
	}

	//Se for o friso preto ele tera o reflexo
	if((textura.r < 0.158) && (textura.g < 0.18) && (textura.b < 0.18)) {
		gl_FragColor = gl_Color;
	} else {
		gl_FragColor = textura + (difusa/3.0);
	}
	
}
