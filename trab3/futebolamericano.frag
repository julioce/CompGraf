uniform sampler2D sampler2d0;

void main()
{
	//Adiciona a textura
	vec4 textura = texture2D(sampler2d0, gl_TexCoord[0].st);
	gl_FragColor = vec4(textura.rgb, 1.0);
}
