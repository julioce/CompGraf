uniform sampler2D sampler2d0;

void main()
{

	//Adiciona a textura
	vec4 textura = texture2D(sampler2d0, gl_TexCoord[0].st);

	//Se for o friso preto ele tera o reflexo
	if((textura.r < 0.1) && (textura.g < 0.1) && (textura.b < 0.1)) {
		gl_FragColor = gl_Color;
	} else {
		gl_FragColor = vec4(textura.rgb, 1.0);
	}
	
}
