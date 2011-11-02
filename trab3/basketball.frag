uniform sampler2D sampler2d0;
uniform sampler2D sampler2d1;

void main()
{
	gl_FragColor = gl_Color * texture2D(sampler2d0, gl_TexCoord[0].xy);
}
