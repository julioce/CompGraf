uniform sampler2D sampler2d0;

void main(void){
	gl_FragColor = texture2D(sampler2d0, gl_TexCoord[0].st);
}