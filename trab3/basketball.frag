uniform sampler2D sampler2d0,sampler2d1;

void main()
{

	vec4 texel;

	texel = texture2D(sampler2d0,gl_TexCoord[0].st) *
		  texture2D(sampler2d1, 8.0 * gl_TexCoord[0].st);

	texel = texel * 1.6;

	if((texel.r < 0.15) && (texel.g < 0.15) && (texel.b < 0.15)) {
		gl_FragColor = gl_Color;
	} else {
		gl_FragColor = vec4(texel.rgb, 1.0);
	}
	
}
